#include "databaseconnection.h"

databaseconnection::databaseconnection()
{
    currentUserID = "";

    qDebug()<<"construcT";
    programSeqID = "";
    // dash = &createDash;

}

databaseconnection::~databaseconnection()
{
    setConnection.close();  //close the database
}

QStringList databaseconnection::pending_completed()
{
    QStringList data;

    QSqlQuery *pending_complete = new QSqlQuery;


    pending_complete->prepare(" SELECT COUNT(courseid) AS PendingCourse FROM studentcourses "
                                 "WHERE `studentid` = '" +getUserId() +"' AND courseGrade IS NULL; ");

    if(!(pending_complete->exec()))  //checks if query does not execute
        qDebug()<<"Back Fire";
    else
    {
        while(pending_complete->next())
        {
            QString pendingCourse = pending_complete->value(0).toString();    //name is assigned to the first value of program sequence query

            data.append(pendingCourse);      //appends the name of pending courses

            QSqlQuery *complete = new QSqlQuery;

            complete->prepare("SELECT COUNT(courseGrade) AS PendingCourse FROM studentcourses "
                                  "WHERE `studentid` = '" +getUserId() +"' AND courseGrade IS NOT NULL; ");
            if(!(complete->exec()))  //checks if query does not execute
                qDebug()<<"Back Fire";
            else
            {
                while(complete->next())
                {
                    QString completeCourse = complete->value(0).toString();    //name is assigned to the first value of program sequence query

                    data.append(completeCourse);      //appends the name of pending courses

                }

            }
            delete complete;
        }

    }

    delete pending_complete; //release programSequence from heap

    for (int var = 0; var < data.size(); ++var)
    {
        qDebug()<<data[var]<<" HERE ";
    }

    return data;    //returns QstringList data


}

QStringList databaseconnection::commented_Course()
{
    QStringList data;

    QSqlQuery *coursecomments = new QSqlQuery;


    coursecomments->prepare("SELECT timeStamp FROM coursecomments "
                                "WHERE `studentID` = '" +getUserId() +"'");

    if(!(coursecomments->exec()))  //checks if query does not execute
        qDebug()<<"Back Fire";
    else
    {
        while(coursecomments->next())
        {
            QString month = coursecomments->value(0).toString();    //name is assigned to the first value of comment timeStamp
            QRegExp separator("-|\\s|:|T");
            QStringList list = month.split(separator, QString::SkipEmptyParts);

            data.append(list[1]);      //appends the name of commented month
        }

    }

    delete coursecomments; //release coursecomments from heap

    return data;    //returns QstringList data

}

void databaseconnection::connect()
{
    //set the connections for the database
    setConnection = QSqlDatabase::addDatabase("QMYSQL");
    setConnection.setHostName("127.0.0.1");
    //setConnection.setPort(3306);
    //setConnection.setPort(3366);
    setConnection.setPort(3336);
    //setConnection.setPort(3366);
    setConnection.setUserName("root");
    setConnection.setPassword("");
    setConnection.setDatabaseName("studentGradingSystem");
    connected = setConnection.open();

    //exception handling
    try
    {
        if(setConnection.open())
        {
            qDebug() << "Successfully connected to database!";

        }
        else
            // Lets the program know that it didnt connect to the server
        {
            QString error = setConnection.lastError().text();
            throw error.toStdString().c_str();
        }


    }
    catch(const char * message)  //catches the exception as a char pointer
    {
        QMessageBox messagebox;
        messagebox.about(NULL,"Connection Failier",message);
    }
    logSatus=false;
}


void databaseconnection::disconnect()
{
    qDebug()<<"db removed";
    setConnection.close();  //close connection from mysql and qt
    QSqlDatabase::removeDatabase( QSqlDatabase::defaultConnection );  //remove database
    return;

}

void databaseconnection::insertNewUser(users &student)
{
    // creates an entry in the database for a new student

    int id = student.getUBID();
    qDebug()<<id;
    setUserId(QString::number(id));

    //List of Qstring for the user's requirements
    QString fname = student.getFName();
    QString lname = student.getLName();
    QString mName = student.getMName();
    qDebug()<<mName;

    QString username = student.getUserName();
    QString password = student.getPassword();       //password recieves the returned value of function getPassword
    QString email = student.getEmail();
    QString roleID = student.getRole();
    qDebug()<<roleID<<"ROle ASDsad";
    QString studentID;
    if (roleID == "2")              //checks if roleId is 2(represents lecturer)
        studentID = "";
    else
        studentID = QString::number(id);
    QSqlQuery query;
    QTime ct = QTime::currentTime();
    QString currentTime =ct.toString();


    //inserts value to the person table from query
    query.prepare("INSERT INTO person ( firstname, lastname,middleName) "
                  "VALUES ( :firstname, :lastname, :middleName)");
    query.bindValue(":firstname", fname);
    query.bindValue(":lastname", lname);
    query.bindValue(":middleName", mName);

    bool insertedNewUser = query.exec();
    if(!insertedNewUser)
    {
        qDebug()<<query.lastError().text();
        qDebug()<<"got serious probs";
    }

    QSqlQuery newQuery ;

    QString userID;

    if(newQuery.exec("SELECT id FROM person WHERE firstname = '" + fname + "' AND lastname = '" + lname   + "' ")) //chekcs if newQuery executes
    {
        while (newQuery.next())
        {
            userID = newQuery.value(0).toString();      //userID is assigned to the first value of newQuery

            qDebug()<<"got id from person ";
            qDebug()<<userID;
            qDebug()<<" ^got id from person  ";
        }
    }
    else {
        qDebug()<<"got serious probs2";
    }


    QString answer[questionAsk];
    answer[0] = student.getQuestion1();     //index 0 of answer is assigned to the first question
    answer[1]  = student.getQuestion2();
    answer[2] = student.getQuestion3();

    int quesId[questionAsk];

    quesId[0] = student.getQuesId1();       //quesId index 0 is assigned to the first question's id
    quesId[1] = student.getQuesId2();
    quesId[2] = student.getQuesId3();

    if(insertedNewUser)      //checks if query executes
    {
        qDebug()<<"Going to insert into users";
        QSqlQuery query3;
        query3.prepare("INSERT INTO users (id, personId, username, password, email,activeUser,roleId, createdAt) "
                       "VALUES (:id,:personId, :username, :password, :email,:activeUser,:roleId, :createdAt)");
        query3.bindValue(":id", id);
        query3.bindValue(":personId", userID);
        query3.bindValue(":username", username);
        query3.bindValue(":password", password);
        query3.bindValue(":email", email);
        if (roleID.toInt() == 1)
            query3.bindValue(":activeUser", 1);
        else
            query3.bindValue(":activeUser", 0);

        query3.bindValue(":roleId", roleID);
        query3.bindValue(":createdAt", ct);


        QString stuID;
        if(query3.exec())           //checks if query3 does not executes
        {
            QSqlQuery getID;


            if(getID.exec("SELECT id FROM users WHERE personid = " + userID))       //checks if getId executes
            {
                while (getID.next())
                {
                    stuID = getID.value(0).toString();      //stuID recieves the first value of the getId QSqlquery
                }
            }

            else
            {
                qDebug()<<getID.lastError().text();
            }

            qDebug()<<"Will enter for"<<userID;
            for (int var = 0; var < questionAsk; ++var)     //runs until var is greater than questionAsk
            {
                QSqlQuery query2;
                query2.clear();
                query2.prepare("INSERT INTO securityquestions (userId , questionId , answer) "
                               "VALUES (:userId, :questionId, :answer)");       //inserts query into securtyquestions table
                query2.bindValue(":userId", stuID);
                query2.bindValue(":questionId", quesId[var]);
                query2.bindValue(":answer", answer[var]);
                if(!query2.exec())
                {
                    QMessageBox::warning(NULL,"ERROR",query.lastError().text()); //warning message box displays if query does not execute
                }
            }
        }

        else
        {
            qDebug()<<query3.lastError().text();
            QMessageBox::warning(NULL,"ERROR",query3.lastError().text());
        }
        if (roleID == "2")
        {
            QString FullName = fname;       //FullName is assigned to fname
            FullName.append(" ");
            FullName.append(lname); //append lname to FullName
            QSqlQuery insertLecuter;

            insertLecuter.prepare("INSERT INTO `lecturer`(`id`, `name`) "
                                  "VALUES (:id,:name)");
            insertLecuter.bindValue(":id", stuID);
            insertLecuter.bindValue(":name", FullName);

            if(insertLecuter.exec())        //checks if insertLecuter executes
            {
                qDebug()<<"Add lecture tabel";
            }
            else {
                QMessageBox::warning(NULL,"ERROR$)!!",insertLecuter.lastError().text());
            }
            // VALUES ('[value-1]','[value-2]')
        }


    }
    else
    {
        QMessageBox::warning(NULL,"ERROR",query.lastError().text());        //warning message box is displayed if query does not execute
    }

}

bool databaseconnection::loginUser(QString username, QString password)
{
    QSqlQuery query;
    qDebug()<<username<<" "<<password;
    QString logIn =QString::number(1);
    QString role;

    if (query.exec( "SELECT id, roleid from users WHERE username = '" + username + "' AND password = "
                    " '" + password + "' AND activeUser = '" + logIn + "' ")) //fetch query from the user table
    {
        qDebug()<<"enter";
        if (query.size() > 0) //checks if the query is not empty
        {
            QString userID;
            while (query.next())
            {
                userID = query.value(0).toString();  //Qstring userId is assigned to the first value of the query
                setUserId(userID);  //calls function setUserId and passes userId as argument
                role = query.value(1).toString();
                qDebug()<<getUserId();
                qDebug() <<"role "<< role <<" here";
                setRole(role);   //setRole() is called and Qstring role is passed as argument
            }

            QSqlQuery query4;

            query4.prepare("INSERT INTO userstatus (id, status) "// debug if there is time ...
                           "VALUES (:id,:status)");
            query4.bindValue(":id","userID");
            if(query4.exec())
                qDebug()<<"update log status";
            else {
                qDebug()<<query4.lastError().text();
            }


            logSatus=true;
            //Debug here..

            switch (getRole().toInt())      //switch inserts UserRole as argument
            {
            case 1:         //enter if Userrole is equal to 1
            {
                qDebug()<<"Student";

                return true;
            }

            case 2:     //enter if Userrole is equal to 2
            {
                qDebug()<<"Lecture";
                return true;
            }
            case 3:     //enter if Userrole is equal to 3
            {
                qDebug()<<"Admin";
                return true;

            }

            }

        }
        else
        {
            qDebug()<<query.lastError().text();
            return false;       //returns false if UserRole is neither of the case validation
        }
    }
    else
    {
        qDebug()<<query.lastError().text();
        return false;           //returns false if query does not execute
    }
    return false;

}

void databaseconnection::logoutUser()
{
    logSatus=false;
    //dash->close();

    //sets last login time on the current user and logs them out
    QTime ct = QTime::currentTime();
    QString currentTime =ct.toString();
    QSqlQuery query3;
    query3.prepare("INSERT INTO loginstatus (id, lastLogin) "
                   "VALUES (:id,:lastLogin)");

    query3.bindValue(":id",getUserId());
    qDebug()<<ct;
    query3.bindValue(":lastLogin",ct);
    if(query3.exec())           //checks if query3 executes
    {
        qDebug()<<"update log status";
        //emit userLogOut();
    }
    else {
        qDebug()<<query3.lastError().text();
    }

}

void databaseconnection::suspendUser()
{

}

bool databaseconnection::isconnected()
{
    return connected; //returns connected
}

QSqlQuery databaseconnection::updateQuestion()
{
    QSqlQuery * query = new QSqlQuery;          //creates new query insied the heap
    query->prepare("SELECT * FROM questions");
    query->exec();

    QSqlQuery info = *query;        //info is assigned to query's value
    delete query;       //delete query from the heap
    return info;
}

QSqlQuery databaseconnection::getUserInfo(QString lostAccount, int role)
{
    //creation of 2 queries inside heap
    QSqlQuery * query = new QSqlQuery;
    QSqlQuery * query1 = new QSqlQuery;

    if (role == 0)      //checks if role is student
    {
        query->prepare("SELECT id FROM `users` WHERE users.id =" +lostAccount );

        if(query->exec())
            while (query->next())
            {
                setUserId(query->value(0).toString());
            }

        qDebug()<<"getid: "<<getUserId()<<" ::";

        query1->prepare("SELECT questionId, answer,  questions FROM  questions, securityquestions WHERE securityquestions.questionId = questions.id "
                        "AND securityquestions.userId = " + getUserId());

        query1->exec();
    }
    else
    {
        query->prepare("SELECT id FROM users WHERE username = '" + lostAccount + "'" );

        if(query->exec())
            while (query->next())
            {
                setUserId(query->value(0).toString());
            }


        qDebug()<<"getid: "<<getUserId()<<" ::";

        query1->prepare("SELECT questionId, answer,  questions FROM  questions, securityquestions WHERE securityquestions.questionId = questions.id "
                        "AND securityquestions.userId = " + getUserId());

        if (!query1->exec())     //executes query1
            qDebug()<<"ERRPRROORER0";
    }


    delete query;
    QSqlQuery info = *query1;
    delete query1;
    return info;            //returns Qsqlquery info

}

QSqlQuery databaseconnection::getLecturerInfo(QString lecturer)
{
    QSqlQuery * query1 = new QSqlQuery;
    query1->prepare("SELECT userId,  questionId, answer,  questions FROM  questions "
                    "INNER JOIN securityquestions ON securityquestions.questionId = questions.id  INNER JOIN users ON users.id = securityquestions.userId "
                    "WHERE users.username = '" + lecturer + "' ");


    if((query1->exec()))        //checks if quer1 is executes
    {
        while (query1->next())
        {
            qDebug()<<query1->value(0).String;
            qDebug()<<query1->value(1).String;
            qDebug()<<query1->value(2).String;
            qDebug()<<query1->value(3).String;

        }
    }
    QSqlQuery info = *query1;
    delete query1;      //release query1 from the heap
    return info;
}

QSqlQuery databaseconnection::getFaculty()
{
    QSqlQuery * query1 = new QSqlQuery;
    query1->prepare("SELECT faculty FROM academicprogram GROUP BY faculty");  //fetch query and assigns it to the query1

    if(!(query1->exec()))  //checks if query1 does not execute
    {
        QMessageBox::warning(NULL,"We encounter an error: ",query1->lastError().text());  //display warning message box
    }
    QSqlQuery query = *query1;  //query is assigned to the query1 pointer
    delete query1;  //deletes query1 from the heap
    return query;  //returns query
}

QSqlQuery databaseconnection::getProgramSequences(QString faculty, QString program)
{
    QSqlQuery * query1 = new QSqlQuery;
    query1->prepare("SELECT name,faculty, programsequence.pSYear FROM academicprogram JOIN programsequence ON programsequence.academicProgramID = academicprogram.id "
                    "WHERE faculty = '" + faculty + "' AND  name LIKE '" + program + "%'"); //fetch specific values from programsequence table


    if(!(query1->exec()))
    {
        QMessageBox::warning(NULL,"We encounter an error: ",query1->lastError().text());  //displays warning message box if query1 does not executes
    }
    QSqlQuery query = *query1;
    delete query1;
    return query;       //returns query
}

QSqlQuery databaseconnection::getLectureName(QString coureID)
{
    QSqlQuery *programSequence = new QSqlQuery;
    QString programSequenceid;
    QString admissionYr;

    //fetch values from users table and person table and lecturecourses table and assigns it to programSequence
    programSequence->prepare("SELECT firstname,lastname FROM lecturercourses "
                             "JOIN users ON lecturercourses.lecturerID = users.id "
                             "JOIN person ON users.personId = person.id "
                             "WHERE lecturercourses.courseID = '" + coureID +"' "
                                                                             "GROUP by lecturerid");



    if(!(programSequence->exec()))
    {
        QMessageBox::warning(NULL,"We encounter an error: ",programSequence->lastError().text()); //displays warning message if programSequence does not executes
    }



    QSqlQuery lectures = *programSequence ;
    delete programSequence;
    return lectures;        //returns lectures Qsqlquery

}

void databaseconnection::setStudentSequence(QString faculty, QString programSequence, int year)
{

    QSqlQuery * query = new QSqlQuery;
    QString yr = QString::number(year);
    query->prepare(" SELECT programsequence.id FROM academicprogram "
                   "JOIN programsequence ON programsequence.academicProgramID = academicprogram.id "
                   "WHERE faculty = '" + faculty +"' AND name LIKE '" + programSequence + "' AND pSYear = "+ yr);
    QString programID;
    if(!(query->exec()))
    {
        QMessageBox::warning(NULL,"We encounter an error: ",query->lastError().text()); //displays warning message if query does not executes
        qDebug()<<query->lastError().text();
    }
    else {
        while(query->next())
        {
            programID = query->value(0).toString();     //programID is assigned to first value of query
            qDebug()<< programID;
        }
    }
    delete query;       //release query from heap


    QSqlQuery * query1 = new QSqlQuery;
    query1->prepare("INSERT INTO student(userId, programSequenceid, admissionYear)"
                    "VALUES (:userId, :programSequenceid, :admissionYear)");

    //bind query1 values
    query1->bindValue(":userId", getUserId());
    query1->bindValue(":programSequenceid", programID);
    query1->bindValue(":admissionYear", yr);

    if(!(query1->exec()))
    {
        QMessageBox::warning(NULL,"We encounter an error: ",query1->lastError().text()); //displays warning message if query1 does not executes
    }
    delete query1;
    bool updateStudentSequences = setStudentsCoursePerSequence(getCourses());  //updateStudentSequences is assigned to the returned value of function setStudentsCoursePerSequence(getCourses())
    if(updateStudentSequences)  //checks if updateStudentSequences is true
        qDebug()<<"Successfully Add all courses";

}

bool databaseconnection::setStudentsCoursePerSequence(QSqlQuery courses)
{
    QString courseID;
    qDebug()<<"add course with studentID"<<getUserId();
    while (courses.next())  //runs Qsqlquery courses
    {
        courseID = courses.value(0).toString();
        QSqlQuery * query = new QSqlQuery;
        query->prepare("INSERT INTO `studentcourses`(`studentid`, `courseid`) "
                       "VALUES (:studentid,:courseid)");

        query->bindValue(":studentid",getUserId());     //bind query value for student Id
        query->bindValue(":courseid",courseID);

        if(query->exec())
        {
            qDebug()<<"add course with studentID"<<courseID;
            //emit userLogOut();
        }
        else
        {
            qDebug()<<query->lastError().text();
            return false;                               //returns false if query does not execute
        }
        delete query;       //delete query from heap

    }

    return true;
}

bool databaseconnection::setCourseGrade(QStringList studentCourseGrade)
{
    //List of QStringLIst and QString
    QStringList::Iterator gradeinfo = studentCourseGrade.begin();
    QString courseID = *gradeinfo;
    ++gradeinfo;
    QString grade = *gradeinfo;
    ++gradeinfo;
    QString rating = *gradeinfo;
    ++gradeinfo;
    QString lecture = *gradeinfo;
    ++gradeinfo;
    QString comment = *gradeinfo;
    int isTransfered = 0;

    bool courseHasGrade = isCourseGraded(courseID);     //courseHasGrade will checks is Course is Graded
    bool addGrade = false;
    bool addComment = false;        //addcomment is assigned to false

    qDebug()<<"COURSE HAS GRADE:: "<<courseHasGrade <<" END";


    if (!courseHasGrade)        //checks if courseHasGrade is false
    {
        QSqlQuery * query1 = new QSqlQuery;

        qDebug()<<(grade == "TR");
        if (grade == "TR")      //checks if grade is equal to transfer
        {
            isTransfered =1;
        }
        else
        {
            isTransfered = 0;
        }
        query1->prepare("UPDATE studentcourses "
                        "SET courseGrade= '" + grade + "', courseRating= '" + rating  + "' , isTransferred = " + QString::number( isTransfered) + " "//AKI2
                        "WHERE studentid = "+ getUserId() + " AND courseid = '"+ courseID+"' " );

        if(!(query1->exec()))
        {
            QMessageBox::warning(NULL,"We encounter an error: ","COULD NOT ADD YOUR GRADE " + query1->lastError().text()); //displays warning message box if query1 does not executes
            return false;
        }
        delete query1;      //release quer1 from the heap when no longer needed
        addGrade = true;


        if (!(lecture.isEmpty())) // checks if lecturer is not empty
        {

            qDebug()<<lecture;
            QStringList list = lecture.split(QRegExp("\\s+"));
            QStringList::Iterator lectureName = list.begin();
            QString firstName = *lectureName;
            ++lectureName;
            QString lastName = *lectureName;        //sets lastName to lectureName QStringList

            qDebug()<<firstName<<" "<<lastName;

            QTime ct = QTime::currentTime();        //ct is assigned to the current time using currentTime() function from the QTime class

            QSqlQuery * query = new QSqlQuery;
            query->prepare("SELECT users.id FROM users "
                           "JOIN person ON users.personId = person.id "
                           "WHERE firstname = '" + firstName +"' AND lastname = '" + lastName + "' AND roleId = " + '2' );

            QString LectureID;
            if(!(query->exec()))
            {
                QMessageBox::warning(NULL,"We encounter an error: ","COULD NOT FIND LECTURE " + query->lastError().text() );
                qDebug()<<query->lastError().text();
            }
            else {
                qDebug()<<"got it";
                while(query->next())
                {
                    LectureID = query->value(0).toString();
                    qDebug()<< LectureID;
                }
            }
            delete query;       //release query from heap

            QSqlQuery * query3 = new QSqlQuery;

            //fetch values for query3 on the courseComment table
            query3->prepare("INSERT INTO `coursecomments`(`courseid`, `timeStamp`, `comment`, `lecturerid`, studentID,courseRating) "//AKI
                            "VALUES ( :courseid, :timeStamp, :comment, :lecturerid,:studentID,:courseRating)");

            //bind query3 values
            query3->bindValue(":courseid", courseID);
            query3->bindValue(":timeStamp", ct);
            query3->bindValue(":comment", comment);
            query3->bindValue(":lecturerid", LectureID);
            query3->bindValue(":studentID", getUserId());
            query3->bindValue(":courseRating", rating);

            if(!(query3->exec()))       //checks if query3 does not execute
            {
                QMessageBox::warning(NULL,"We encounter an error: ","COULD NOT ADD COMMENT " + query3->lastError().text());
                qDebug()<<query3->lastError().text();
            }
            else
            {
                addComment = true;
                qDebug()<<"WORKED";
            }
            delete  query3;
        }
    }

    qDebug()<<"OUT";

    if(!addGrade)       //validates if addgrade is false
    {
        QMessageBox::warning(NULL,"We encounter an error: ","COULD NOT ADD GRADE, You have Already add a grade to this course. " );
        qDebug()<<"Grade NOT ADDED";
    }
    if (!addComment)    //validates if addComment is false
        QMessageBox::warning(NULL,"We encounter an error: ","COULD NOT ADD Comment, There seem to be an error while adding a Comment. " );


    if (addGrade && addComment) //enters if addComment and addGrade are both true
    {
        QMessageBox msgBox;
        msgBox.setText("Successfully Added Grade & Comment");
        msgBox.setInformativeText("Both Grade And Comment have been added.");
        msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Discard );
        msgBox.setDefaultButton(QMessageBox::Ok);
        int ret = msgBox.exec();        //executes message box msgBox
        qDebug()<<"About to eturn T";
        return true;        //returns true
    }

    else if (addGrade || addComment)        //checks if either addGrade or addcomments is true
    {
        if (addGrade)       //checks if addGrade is true
        {
            QMessageBox msgBox; //message box for grade added
            msgBox.setText("Successfully Added Grade ");
            msgBox.setInformativeText("The grade for this course "+  courseID  +" has been added.");
            msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Discard );
            msgBox.setDefaultButton(QMessageBox::Ok);
            int ret = msgBox.exec();        //ret is assigned to the msgBox execution
        }
        else
        {
            QMessageBox msgBox; //message box for comment added
            msgBox.setText("Successfully Added Commet ");
            msgBox.setInformativeText("The Commet for this course "+  courseID  +" has been added.");
            msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Discard );
            msgBox.setDefaultButton(QMessageBox::Ok);
            int ret = msgBox.exec();
        }
        qDebug()<<"About to eturn T";
        return true;

    }

    else
        return false;       //returns false
}

QSqlQuery databaseconnection::getStudentsCourses()
{
    QSqlQuery *programSequence = new QSqlQuery;
    QString programSequenceid;
    QString admissionYr;

    //fetches the values for programSequence on student table
    programSequence->prepare("SELECT  programSequenceid, admissionYear FROM student WHERE userid = " + getUserId());

    if(!(programSequence->exec()))      //checks if programSequence executes
    {
        QMessageBox::warning(NULL,"We encounter an error: ",programSequence->lastError().text());
    }

    {
        while(programSequence->next())  //runs qsqlquery programSequence
        {
            programSequenceid = programSequence->value(0).toString();       //programSequenceid is assigned to the first value of programSequence
            admissionYr = programSequence->value(1).toString();
            programSeqID = programSequenceid;
            qDebug()<<programSequenceid;
            qDebug()<<admissionYr;
        }

    }
    QSqlQuery * courses = new QSqlQuery;
    courses->prepare("SELECT courseCode, name,credithour, studentcourses.courseGrade, prequisite, semester, pSYear FROM programsequencecourses  "
                     "JOIN courses on courses.courseCode = programsequencecourses.courseID "
                     "JOIN prequisites on prequisites.id = courses.courseCode  "
                     "JOIN programsequence on programsequence.id = programsequencecourses.programSequenceid "
                     "JOIN studentcourses on studentcourses.courseid = programsequencecourses.courseID "
                     "WHERE programSequenceid = '" + programSequenceid +"' AND psyear = " + admissionYr +" AND studentid = " + getUserId());


    if(!(courses->exec()))
    {
        QMessageBox::warning(NULL,"We encounter: ",programSequence->lastError().text()); //dispplays warning mesage box if courses does not executes
    }
    QSqlQuery course = *courses;
    delete programSequence;
    delete courses;         //release courses from heap
    return course;
}

QSqlQuery databaseconnection::getStudentsCourses(QString studetnID)
{

    QSqlQuery *programSequence = new QSqlQuery;
    QString programSequenceid;
    QString admissionYr;
    programSequence->prepare("SELECT  programSequenceid, admissionYear FROM student WHERE userid = " + studetnID);




    if(!(programSequence->exec()))      //checks if programSequence executes
    {
        QMessageBox::warning(NULL,"We encounter an error: ",programSequence->lastError().text());
    }


    {
        while(programSequence->next())  //runs the QSQLQuery programSequence
        {
            programSequenceid = programSequence->value(0).toString();
            admissionYr = programSequence->value(1).toString();     //admissionYr is assigned to the second value of programSequence which is the addmissionYear
            programSeqID = programSequenceid;
            qDebug()<<programSequenceid;
            qDebug()<<admissionYr;
        }

    }

    QSqlQuery * courses = new QSqlQuery;
    courses->prepare("SELECT courseCode, name,credithour, studentcourses.courseGrade, prequisite, semester, pSYear FROM programsequencecourses  "
                     "JOIN courses on courses.courseCode = programsequencecourses.courseID "
                     "JOIN prequisites on prequisites.id = courses.courseCode  "
                     "JOIN programsequence on programsequence.id = programsequencecourses.programSequenceid "
                     "JOIN studentcourses on studentcourses.courseid = programsequencecourses.courseID "
                     "WHERE programSequenceid = '" + programSequenceid +"' AND psyear = " + admissionYr +" AND studentid = " + studetnID);

    if(!(courses->exec()))
    {
        QMessageBox::warning(NULL,"We encounter: ",programSequence->lastError().text()); //displays warning mesage box if courses does not executes
    }
    QSqlQuery course = *courses;
    delete programSequence;
    delete courses;
    return course;          //returns the qsqlquery courses


}

QSqlQuery databaseconnection::getLectureCourses(QString courseID)
{

    QSqlQuery * courses = new QSqlQuery;
    courses->prepare("SELECT name, creditHour, prequisite, semester FROM `courses`  "
                     "JOIN prequisites on prequisites.id = courses.id "
                     "WHERE courses.courseCode = '" + courseID +"'");

    if(!(courses->exec()))
    {
        QMessageBox::warning(NULL,"We encounter: ",courses->lastError().text());
    }

    QSqlQuery course = *courses;
    delete courses;         //release courses from the heap
    return course;
}


QSqlQuery databaseconnection::getCourses()
{
    QSqlQuery *programSequence = new QSqlQuery;
    QString programSequenceid;
    QString admissionYr;

    //fetch programsequence values from the student table
    programSequence->prepare("SELECT  programSequenceid, admissionYear FROM student WHERE userid = " + getUserId());



    if(!(programSequence->exec()))      //checks if query programSequence does not execute
    {
        QMessageBox::warning(NULL,"We encounter an error: ",programSequence->lastError().text());
    }

    {
        while(programSequence->next())      //runs programSequence qsqlquery
        {
            programSequenceid = programSequence->value(0).toString();
            admissionYr = programSequence->value(1).toString(); //admissionYr is assigned to the second value of programSequence
            programSeqID = programSequenceid;
            qDebug()<<"eherre";
            qDebug()<<programSeqID;
            qDebug()<<"eherre";
            qDebug()<<programSequenceid;
            qDebug()<<admissionYr;
        }

    }


    QSqlQuery * courses = new QSqlQuery;
    courses->prepare("SELECT courseCode, name,credithour, prequisite, semester, pSYear FROM programsequencecourses  "
                     "JOIN courses on courses.courseCode = programsequencecourses.courseID "
                     "JOIN prequisites on prequisites.id = courses.courseCode  "
                     "JOIN programsequence on programsequence.id = programsequencecourses.programSequenceid "
                     "WHERE programSequenceid = '" + programSequenceid +"' AND psyear = " + admissionYr);




    if(!(courses->exec()))
    {
        QMessageBox::warning(NULL,"We encounter: ",programSequence->lastError().text());
    }
    QSqlQuery course = *courses;
    delete programSequence;
    delete courses;
    return course;
}


QString databaseconnection::getUserId()
{
    return currentUserID;       //returns the  current userId
}

QStringList databaseconnection::getComment(QString courseID)
{
    QString courseComment;
    QString rating;
    QStringList data;
    QString date = "2021-04-29 23:37:07";
    QRegExp separator("-|\\s|:|T");

    QSqlQuery * courseCommentPerStudent = new QSqlQuery;
    courseCommentPerStudent->prepare("SELECT comment,timeStamp FROM coursecomments "
                                     "WHERE studentid = " + getUserId() + " AND courseid = '" + courseID+ "' " );



    if(!(courseCommentPerStudent->exec())) //checks if courseCommentPerStudent does not executes
    {
        QMessageBox::warning(NULL,"We encounter an error: ",courseCommentPerStudent->lastError().text());
    }
    else
    {
        while(courseCommentPerStudent->next())      //run query courseCommentPerStudent if it executes
        {
            courseComment = courseCommentPerStudent->value(0).toString();
            date = courseCommentPerStudent->value(1).toString();
            qDebug()<<date;
            QStringList list = date.split(separator, QString::SkipEmptyParts);
            data.append(courseComment); //append coursecomment to data

            //date format
            QString dateFormat = " ";
            dateFormat.append( list[2]);
            dateFormat.append("/");
            dateFormat.append(list[1]);
            dateFormat.append("/");
            dateFormat.append(list[0]);

            data.append(dateFormat); //append dateFormat to data

        }

        QSqlQuery * rating = new QSqlQuery;
        rating->prepare("SELECT `courseRating` FROM `studentcourses` "//AKI3
                        "WHERE `studentid` = " + getUserId() + " AND courseid = '" + courseID+ "' ");

        if(!(rating->exec()))       //validates if rating does not executes
            qDebug()<<"Back Fire";
        else
        {

            while(rating->next())  //run qsqlquery rating if it executes
            {
                QString rate = rating->value(0).toString();
                qDebug()<<rate;
                data.append(rate);
            }

        }

        delete rating;      //release rating from the heap
    }
    delete courseCommentPerStudent;
    return data;    //return QStringList data

}

//function gets sequence
QStringList databaseconnection::getSequenceName()
{
    qDebug()<<"about to insert enter getname";
    QSqlQuery * programSequence = new QSqlQuery;
    QStringList data;
    qDebug()<<programSeqID;
    //fetch data from the programsequence table and assigns them to the programsequence Qstrinlist
    programSequence->prepare("SELECT name,faculty FROM `programsequence` "
                             "JOIN academicprogram on academicprogram.id = programsequence.academicProgramID "
                             "WHERE programsequence.id = '" + programSeqID+ "' ");

    if(!(programSequence->exec()))  //checks if query does not execute
        qDebug()<<"Back Fire";
    else
    {
        while(programSequence->next())
        {
            QString name = programSequence->value(0).toString();    //name is assigned to the first value of program sequence query
            QString faculty = programSequence->value(1).toString();     //faculty recieves the second value of the query


            qDebug()<<name;
            qDebug()<<faculty;

            data.append(name);      //appends the name of program sequence
            data.append(faculty);
        }

    }

    delete programSequence; //release programSequence from heap

    return data;    //returns QstringList data

}

void databaseconnection::addLectureCourse(QString courseId, QString year)
{
    QSqlQuery * addCourse = new QSqlQuery;

    addCourse->prepare("INSERT INTO `lecturercourses`(`id`, `courseID`, `lecturerID`, `Year`) "
                       "VALUES ( :id, :courseID,:lecturerID,:Year)");

    //bind addCourse values
    addCourse->bindValue(":id", courseId);
    addCourse->bindValue(":courseID", courseId);
    addCourse->bindValue(":lecturerID", getUserId());
    addCourse->bindValue(":Year", year);

    if(!addCourse->exec())
    {
        qDebug()<<addCourse->lastError().text();
        qDebug()<<"got serious probs";
    }
    else
    {
        QMessageBox messagebox;
        messagebox.about(NULL,"Successfully Added Course","Course has being add to your list. "); //displays about message if QSqlQueryaddcourse executes
    }
}

QSqlQuery databaseconnection::getLectureCourse()
{
    QSqlQuery * query1 = new QSqlQuery;

    //fetch quer1 values from lecturercourses table
    query1->prepare("SELECT name,creditHour, prequisite, semester, Year  FROM `lecturercourses` "
                    "JOIN prequisites on prequisites.id = lecturercourses.courseID "
                    "JOIN courses on courses.id = prequisites.id "
                    "WHERE `lecturerID` = " + getUserId() );

    if(!(query1->exec()))
    {
        QMessageBox::warning(NULL,"We encounter an error: ",query1->lastError().text());
    }
    QSqlQuery lectureCourses = * query1;

    delete query1;          //release query1 from heap because it's no longer needed
    return lectureCourses;

}

QStringList databaseconnection::getTotalUsersPieChart()
{

    QStringList StudentLecturerAmount;
    QSqlQuery * query1 = new QSqlQuery;
    query1->prepare("SELECT COUNT(roleId) FROM `users` WHERE roleId = 1");
    if(!(query1->exec()))
    {
        QMessageBox::warning(NULL,"We encounter an error: ",query1->lastError().text());
    }
    else
    {
        while(query1->next())
        {
            StudentLecturerAmount.append(query1->value(0).toString());
        }
    }
    delete query1;


    QSqlQuery * query2 = new QSqlQuery;
    query2->prepare("SELECT COUNT(roleId) FROM `users` WHERE roleId = 2");
    if(!(query2->exec()))
    {
        QMessageBox::warning(NULL,"We encounter an error: ",query2->lastError().text());
    }
    else
    {
        while(query2->next())
        {
            StudentLecturerAmount.append(query2->value(0).toString());
        }
    }
    delete query2;

    return  StudentLecturerAmount;




}

QSqlQuery databaseconnection::getRatingComment()
{
    QSqlQuery * query1 = new QSqlQuery;
    query1->prepare("SELECT `courseid` FROM `coursecomments` "
                        "WHERE `lecturerid` = '" + getUserId() + "' "
                        "GROUP By courseid ");
    if(!(query1->exec()))
    {
        QMessageBox::warning(NULL,"We encounter an error: ",query1->lastError().text());
    }
    QSqlQuery coursesInfo = *query1;
    delete query1;
    return coursesInfo;

}

QSqlQuery databaseconnection::getRatingComment(QString courseId, QString rating)
{
    QSqlQuery * query1 = new QSqlQuery;
    query1->prepare("SELECT COUNT(`courseRating`) FROM `coursecomments`  "
                        "WHERE `lecturerid` = '" + getUserId() + "' "
                        "and courseRating = '"+ rating +"' "
"AND courseID = '" + courseId + "' ");
    if(!(query1->exec()))
    {
        QMessageBox::warning(NULL,"We encounter an error: ",query1->lastError().text());
    }
    QSqlQuery coursesInfo = *query1;
    delete query1;
    return coursesInfo;
}

QStringList databaseconnection::activate_DeactivateLecture(QString lectureName, int role)
{
    QStringList result;

    QSqlQuery * query1 = new QSqlQuery;

    if (role == 2)  //enters if user role is Lecturer
    {

        //Implement query1 (lecturer table)
        query1->prepare(" SELECT  lecturer.name, username, createdAt,roleId, activeuser FROM `lecturer` "
                        "JOIN users on users.id = lecturer.id "
                        "WHERE lecturer.name like '" + lectureName + "%'" );

        if(!(query1->exec()))       // Executes a warning message box if query1 is not found
        {
            QMessageBox::warning(NULL,"We encounter an error: ",query1->lastError().text());
        }
        else
        {

            QString date;
            while (query1->next()) //enters if lecturer id was found
            {
                result.append(query1->value(0).toString()); //append value 0 which is lecturer.name
                result.append(query1->value(1).toString()); //append value 1 which is username
                date = query1->value(2).toString();  //QString receives the value of the date that the account was created
                QRegExp separator("-|\\s|:|T");
                QStringList list = date.split(separator, QString::SkipEmptyParts);  //splits the actual date and time by / and :

                //formats the order of the date
                QString dateFormat = " ";
                dateFormat.append( list[2]);
                dateFormat.append("/");
                dateFormat.append(list[1]);
                dateFormat.append("/");
                dateFormat.append(list[0]);
                dateFormat.append(" ");
                dateFormat.append(list[3]);
                dateFormat.append(":");
                dateFormat.append(list[4]);
                dateFormat.append(":");

                //add seconds to the date format
                QString ulgy = list[5];
                QStringList newFormat = ulgy.split(".", QString::SkipEmptyParts);
                QString sec = newFormat[0];
                dateFormat.append(sec);
                result.append(dateFormat);

                result.append(query1->value(3).toString()); //append value 3 which is roleId
                result.append(query1->value(4).toString()); //append value 4 which is activeuser


            }

        }

        return result;
    }

    //enters if user role is student(role == 1)
    else
    {

        //implement query1 (users table)
        query1->prepare("SELECT  firstname, lastName, username, createdAt,roleId, activeuser FROM `users` "
                        "JOIN person on person.id = users.personId "
                        "  WHERE users.id = " + lectureName  );

        if(!(query1->exec()))   //runs if there's no error encountered at exectution time
        {
            QMessageBox::warning(NULL,"We encounter an error: ",query1->lastError().text());   // Warning Message box implemented
        }
        else
        {
            //Qstring date will be used to store actual date of the creation of user account
            QString date;
            //enters while loop is user ID was found
            while (query1->next())
            {
                QString fullName;  //will receive the full name of user
                fullName.append(query1->value(0).toString()); //append value 0 which is firstName to string
                fullName.append(query1->value(1).toString()); //append value 1 which is lastName to string

                result.append(fullName);  //fullName appends first and last name together
                result.append(query1->value(2).toString()); //appends username to string
                date = query1->value(3).toString(); //date is assigned to createdAt
                QRegExp separator("-|\\s|:|T");
                QStringList list = date.split(separator, QString::SkipEmptyParts); //used to split the date by / and :

                //display the actual format of the date
                QString dateFormat = " ";
                dateFormat.append( list[2]);
                dateFormat.append("/");
                dateFormat.append(list[1]);
                dateFormat.append("/");
                dateFormat.append(list[0]);
                dateFormat.append(" ");
                dateFormat.append(list[3]);
                dateFormat.append(":");
                dateFormat.append(list[4]);
                dateFormat.append(":");

                //creates the seconds for the date format
                QString ulgy = list[5];
                QStringList newFormat = ulgy.split(".", QString::SkipEmptyParts);
                QString sec = newFormat[0];
                dateFormat.append(sec);
                result.append(dateFormat);

                result.append(query1->value(4).toString()); //append roleId to string
                result.append(query1->value(5).toString()); //append activeuser to string


            }

        }

        return result;
    }



}

void databaseconnection::setUserId(QString userId)
{
    currentUserID = userId;     //sets the user id
}

void databaseconnection::resetPassword(QString newPass)
{
    QSqlQuery * query1 = new QSqlQuery;
    query1->prepare("UPDATE users SET password = '" + newPass + "' WHERE id = '" + getUserId() + " '");

    if(!(query1->exec()))
    {
        QMessageBox::warning(NULL,"We encounter an error: ",query1->lastError().text());
    }
    delete query1;
}

void databaseconnection::setRole(QString role)
{
    UserRole = role;        //sets the user's role
}

QString databaseconnection::getRole()
{
    return UserRole;  //returns user's UserRole
}

QSqlQuery databaseconnection::getLecturesByCourse(QString coureName)
{

    QSqlQuery * query1 = new QSqlQuery;

    //fetch query1 values from courses table
    query1->prepare("SELECT courses.ID, courses.name, lecturer.name FROM  courses "
                    "JOIN `lecturercourses` on `lecturercourses`.courseID = courses.courseCode "
                    "JOIN lecturer on lecturer.id = lecturercourses.lecturerID "
                    "WHERE courses.name Like '" + coureName + "%' "
                                                              "");

    if(!(query1->exec()))
    {
        QMessageBox::warning(NULL,"We encounter an error: ",query1->lastError().text());
    }

    QSqlQuery lectureByCourse = *query1;
    delete query1;
    return lectureByCourse;     //returns QSqlQuery lectureByCourse which contains query1 values

}

QSqlQuery databaseconnection::getComments(QString courseID, QString lectureName)
{
    QSqlQuery * query1 = new QSqlQuery;

    //fetch query1 values from coursecomment table
    query1->prepare("SELECT timeStamp,comment, courseRating FROM `coursecomments` "
                    "JOIN lecturer on lecturer.id = coursecomments.lecturerid "
                    "WHERE coursecomments.courseid = '" + courseID + "' AND lecturer.name = '" + lectureName + "'");

    if(!(query1->exec()))
    {
        QMessageBox::warning(NULL,"We encounter an error: ",query1->lastError().text());        //display warning message box if query1 was not executed
    }

    QSqlQuery lectureComment = *query1;
    delete query1;          //release query1 from the heap since it's no longer needed
    return lectureComment;

}

bool databaseconnection::isCourseGraded(QString courseID)
{

    QSqlQuery * query1 = new QSqlQuery;

    //fetch query1 values from student course table
    query1->prepare("SELECT courseGrade FROM studentcourses WHERE studentid = " + getUserId() + " AND courseid = '" + courseID + "'");

    if(!(query1->exec()))
    {
        QMessageBox::warning(NULL,"We encounter an error: ",query1->lastError().text());
    }
    else
    {
        while(query1->next())  //runs if query1 executes
        {
            QString checkingGrade = query1->value(0).toString();
            if(checkingGrade.isEmpty())
                return false;       //returns false if checkingGrade is empty
            else
                return true;
        }

    }
    delete query1;      //release query1 from heap
    return false;
}

bool databaseconnection::activateUser(QString userName, int role)
{
    QSqlQuery * query1 = new QSqlQuery;

    if (role == 2)      //checks if role is lecturer
    {
        //fetch query1 values from user table
        query1->prepare("UPDATE users SET activeUser = 1 "
                        "WHERE username = '" + userName + "'");

        if(!(query1->exec()))
        {
            QMessageBox::warning(NULL,"We encounter an error: ",query1->lastError().text());
            delete query1;
            return false;       //returns false if queryq does not execute
        }
        else
        {
            delete query1;      //release query1 from heap
            return true;        //returns true if query executes
        }
    }

    //enters if role is not equal to 2
    else
    {
        query1->prepare("UPDATE users SET activeUser = 1 "
                        " WHERE id = " + userName );

        if(!(query1->exec()))
        {
            QMessageBox::warning(NULL,"We encounter an error: ",query1->lastError().text());
            delete query1;
            return false;       //return false if query1 does not execute
        }
        else
        {
            delete query1;
            return true;        //returns true if query executes

        }
    }
}

bool databaseconnection::deactivateUser(QString userName, int role)
{
    QSqlQuery * query1 = new QSqlQuery;

    if (role == 2)  //enters if role is 2
    {
        //fetch query1 values from users table
        query1->prepare("UPDATE users SET activeUser = 0 "
                        "WHERE username = '" + userName + "'");

        if(!(query1->exec()))
        {
            QMessageBox::warning(NULL,"We encounter an error: ",query1->lastError().text());
            delete query1;
            return false;  //returns false if query1 does not execute
        }
        else
        {
            delete query1;      //release memory from heap
            return true;        //returns true if query executed

        }
    }

    else //enter if role was not equal to 2
    {

        query1->prepare("UPDATE users SET activeUser = 0 "
                        " WHERE id = " + userName );

        if(!(query1->exec()))
        {
            QMessageBox::warning(NULL,"We encounter an error: ",query1->lastError().text());
            delete query1;      //release query1 from heap
            return false;
        }
        else
        {
            delete query1;
            return true;        //returns true if query executes
        }
    }
}

bool databaseconnection::addProgramSequence(QString programSeqId, QString programName, QString faculty, QString Year, QStringList courseCodes,
                                            QStringList courseName, QStringList credits, QStringList prerequisites,QStringList semester)

//programSeqId,programName,faculty,Year,courseCodes,courseName,credits,prerequisites,semester);
{
    qDebug()<<programSeqId;
    qDebug()<<programName;
    qDebug()<<faculty;

    QSqlQuery * query1 = new QSqlQuery;  //new query created inside heap

    //query1 inserts specific values into the academic program table
    query1->prepare("INSERT INTO academicprogram (id, name, faculty) "
                    "VALUES (:id,:name,:faculty) " );



    //binds query1 values
    query1->bindValue(":id", programSeqId);
    query1->bindValue(":name", programName);
    query1->bindValue(":faculty", faculty);

    if(!(query1->exec()))
    {
        QMessageBox::warning(NULL,"We encounter an error: ",query1->lastError().text());    //displays warning message if query1 does not execute
        delete query1;
        return false;

    }
    else
    {
        QSqlQuery * query2 = new QSqlQuery;     //new query created inside the heap


        //query2 inserts specific values into the programsequnce table
        query2->prepare(" INSERT INTO `programsequence`(`id`, `code`, `pSYear`, `academicProgramID`) "
                        "VALUES (:id,:code,:pSYear, :academicProgramID) " );
        query2->bindValue(":id", programSeqId);
        query2->bindValue(":code", programSeqId);
        query2->bindValue(":pSYear", Year);
        query2->bindValue(":academicProgramID", programSeqId);

        if(!(query2->exec()))
        {
            QMessageBox::warning(NULL,"We encounter an error: ",query2->lastError().text());
            delete query2;
            return false;
        }
        else
        {
            // QStringList courseCodes, QStringList courseName, QStringList credits, QStringList prerequisites,

            for (int var = 0; var < courseCodes.size(); ++var)
            {
                qDebug()<<"FOR: "<<var;

                QSqlQuery * query3 = new QSqlQuery;

                if (!checkisCourseAval(courseCodes[var]))       //checks if  course is not available
                {
                    //query3 inserts specific values to table courses
                    query3->prepare("INSERT INTO `courses`(`id`, `name`, `semester`, `creditHour`, `courseCode`) "
                                    "VALUES (:id,:name,:semester, :creditHour, :courseCode) " );
                    //binds query3
                    query3->bindValue(":id", courseCodes[var]);
                    query3->bindValue(":name", courseName[var]);
                    query3->bindValue(":creditHour", credits[var]);
                    query3->bindValue(":courseCode", courseCodes[var]);
                    query3->bindValue(":semester", semester[var]);

                    if(!(query3->exec()))       //checks if query3 does no eecute
                    {
                        QMessageBox::warning(NULL,"We encounter an error: ",query3->lastError().text());
                        delete query3;
                        return false;  //returns false if query does not execute
                    }

                    QSqlQuery * query4 = new QSqlQuery;//creates new qsqlquery inside the heap

                    query4->prepare("INSERT INTO `prequisites`(`id`, `prequisite`) "
                                    "VALUES (:id,:prequisite) " );
                    query4->bindValue(":id", courseCodes[var]);
                    query4->bindValue(":prequisite", prerequisites[var]);
                    if(!(query4->exec()))
                    {
                        QMessageBox::warning(NULL,"We encounter an error: ",query4->lastError().text()); //displays warning message box if query4 does not execte
                        delete query4;
                        return false;
                    }
                      delete query4;
                }

                QSqlQuery *progCourse;
                progCourse = new QSqlQuery;

                progCourse->prepare("INSERT INTO `programsequencecourses`(`programSequenceid`, `courseID`)  "
                                "VALUES (:programSequenceid,:courseID) " );
                progCourse->bindValue(":programSequenceid", programSeqId);
                progCourse->bindValue(":courseID", courseCodes[var]);

                if(!(progCourse->exec()))           //checks if progCourse does not execute
                {
                    QMessageBox::warning(NULL,"We encounter an error: ",progCourse->lastError().text());
                    delete progCourse;
                    return false;           //returns false means query4 did not executed

                }

                //release all QSqlQueries from the heap since they are no longer neeeded

                delete query3;
                delete progCourse;

            }
            delete query1;
            delete query2;
        }


        return true;

    }

}

bool databaseconnection::checkisCourseAval(QString CourseID)  //function will checks if course is available
{
    QSqlQuery *query1;
    query1 = new QSqlQuery;

    //fetch values from table courses
    query1->prepare(" SELECT `id` FROM `courses`  "
                    " WHERE `id` = '" + CourseID + "'" );

    if(!(query1->exec())) //checks if query1 execute fails
    {
        // QMessageBox::warning(NULL,"We encounter an error: ",query1->lastError().text());
        delete query1;
        return false;

    }
    else
    {
       if(query1->size() > 0)
       {
            qDebug()<<"FOUND";
             qDebug()<<query1->value(0).toString();
             delete query1;
             return true;  //returns true if query execute succeeded

       }
       else
       {
           delete query1;
           return false;        //returns false if query execute succeeded

       }


    }
}

