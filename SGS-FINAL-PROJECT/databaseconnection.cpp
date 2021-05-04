#include "databaseconnection.h"

#include "dashboardstudent.h"

databaseconnection::databaseconnection()
{
    currentUserID = "";

    qDebug()<<"construcT";
    // dash = &createDash;

}

databaseconnection::~databaseconnection()
{
    setConnection.close();
}

void databaseconnection::connect()
{
    setConnection = QSqlDatabase::addDatabase("QMYSQL");
    setConnection.setHostName("127.0.0.1");
    //setConnection.setPort(3306);
    setConnection.setPort(3366);
    setConnection.setUserName("root");
    setConnection.setPassword("");
    setConnection.setDatabaseName("db");
    connected = setConnection.open();
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
    catch(const char * message)
    {
        QMessageBox messagebox;
        messagebox.about(NULL,"Connection Failier",message);
    }
    logSatus=false;
}

void databaseconnection::insertNewUser(student &student)
{
    // creates an entry in the database for a new student
    int id = student.getID();
    qDebug()<<id;
    setUserId(QString::number(id));

    QString fname = student.getFName();
    QString lname = student.getLName();
    QString username = student.getUserName();
    QString password = student.getPassword();
    QString email = student.getEmail();
    QString roleID = student.getRole();
    QString studentID = QString::number(id);
    QSqlQuery query;
    QTime ct = QTime::currentTime();
    QString currentTime =ct.toString();


    query.prepare("INSERT INTO person ( firstname, lastname) "
                  "VALUES ( :firstname, :lastname)");
    query.bindValue(":firstname", fname);
    query.bindValue(":lastname", lname);

    if(!query.exec())
    {
        qDebug()<<query.lastError().text();
        qDebug()<<"got serious probs";
    }

    QSqlQuery newQuery ;

    QString userID;

    if(newQuery.exec("SELECT id FROM person WHERE firstname = '" + fname + "' AND lastname = '" + lname   + "' "))
    {
        while (newQuery.next())
        {
            userID = newQuery.value(0).toString();

            qDebug()<<"got id from person ";
            qDebug()<<userID;
            qDebug()<<" ^got id from person  ";
        }
    }
    else {
        qDebug()<<"got serious probs2";
    }


    QString answer[questionAsk];
    answer[0] = student.getQuestion1();
    answer[1]  = student.getQuestion2();
    answer[2] = student.getQuestion3();

    int quesId[questionAsk];

    quesId[0] = student.getQuesId1();
    quesId[1] = student.getQuesId2();
    quesId[2] = student.getQuesId3();

    if(query.exec())
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



        if(query3.exec())
        {
            QSqlQuery getID;

            QString stu;
            if(getID.exec("SELECT id FROM users WHERE personid = " + userID))
            {
                while (getID.next())
                {
                    stu = getID.value(0).toString();
                }
            }

            else
            {
                qDebug()<<getID.lastError().text();
            }

            qDebug()<<"Will enter for"<<userID;
            for (int var = 0; var < questionAsk; ++var)
            {
                QSqlQuery query2;
                query2.clear();
                query2.prepare("INSERT INTO securityquestions (userId , questionId , answer) "
                               "VALUES (:userId, :questionId, :answer)");
                query2.bindValue(":userId", stu);
                query2.bindValue(":questionId", quesId[var]);
                query2.bindValue(":answer", answer[var]);
                if(!query2.exec())
                {
                    QMessageBox::warning(NULL,"ERROR",query.lastError().text());
                }
            }
        }


        else
        {
            qDebug()<<query3.lastError().text();
            QMessageBox::warning(NULL,"ERROR",query3.lastError().text());
        }

    }
    else
    {
        QMessageBox::warning(NULL,"ERROR",query.lastError().text());
    }
}

bool databaseconnection::loginUser(QString username, QString password)
{
    QSqlQuery query;
    qDebug()<<username<<" "<<password;
    QString logIn =QString::number(1);
    QString role;

    if (query.exec( "SELECT id, roleid from users WHERE username = '" + username + "' AND password = "
                    " '" + password + "' AND activeUser = '" + logIn + "' "))
    {
        qDebug()<<"enter";
        if (query.size() > 0)
        {
            QString userID;
            while (query.next())
            {
                userID = query.value(0).toString();
                setUserId(userID);
                role = query.value(1).toString();
                qDebug()<<getUserId();
                qDebug() <<"role "<< role <<" here";
                setRole(role);
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

            switch (getRole().toInt())
            {
            case 1:
            {
                qDebug()<<"Student";

                return true;
            }

            case 2:
            {
                qDebug()<<"Lecture";
                return true;
            }
            case 3:
            {
                qDebug()<<"Admin";
                return true;

            }

            }

        }
        else
        {
            qDebug()<<query.lastError().text();
            return false;
        }
    }
    else
    {
        qDebug()<<query.lastError().text();
        return false;
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
    if(query3.exec())
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
    return connected;
}

QSqlQuery databaseconnection::updateQuestion()
{
    QSqlQuery * query = new QSqlQuery;
    query->prepare("SELECT * FROM questions");
    query->exec();

    QSqlQuery info = *query;
    delete query;
    return info;



}

QSqlQuery databaseconnection::getUserInfo(QString lostAccount, int role)
{
    QSqlQuery * query = new QSqlQuery;
    QSqlQuery * query1 = new QSqlQuery;
    if (role == 0)
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
        query1->exec();
    }


    delete query;
    QSqlQuery info = *query1;
    delete query1;
    return info;


}

QSqlQuery databaseconnection::getLecturerInfo(QString lecturer)
{
    QSqlQuery * query1 = new QSqlQuery;
    query1->prepare("SELECT userId,  questionId, answer,  questions FROM  questions "
                    "INNER JOIN securityquestions ON securityquestions.questionId = questions.id  INNER JOIN users ON users.id = securityquestions.userId "
                    "WHERE users.username = '" + lecturer + "' ");


    if((query1->exec()))
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
    delete query1;
    return info;
}

QSqlQuery databaseconnection::getFaculty()
{
    QSqlQuery * query1 = new QSqlQuery;
    query1->prepare("SELECT faculty FROM academicprogram GROUP BY faculty");

    if(!(query1->exec()))
    {
        QMessageBox::warning(NULL,"We encounter an error: ",query1->lastError().text());
    }
    QSqlQuery query = *query1;
    delete query1;
    return query;
}

QSqlQuery databaseconnection::getProgramSequences(QString faculty, QString program)
{
    QSqlQuery * query1 = new QSqlQuery;
    query1->prepare("SELECT name,faculty, programsequence.pSYear FROM academicprogram JOIN programsequence ON programsequence.academicProgramID = academicprogram.id "
                    "WHERE faculty = '" + faculty + "' AND  name LIKE '" + program + "%'");


    if(!(query1->exec()))
    {
        QMessageBox::warning(NULL,"We encounter an error: ",query1->lastError().text());
    }
    QSqlQuery query = *query1;
    delete query1;
    return query;
}

QSqlQuery databaseconnection::getLectureName(QString coureID)
{
    QSqlQuery *programSequence = new QSqlQuery;
    QString programSequenceid;
    QString admissionYr;
    programSequence->prepare("SELECT firstname,lastname FROM lecturercourses "
                             "JOIN users ON lecturercourses.lecturerID = users.id "
                             "JOIN person ON users.personId = person.id "
                             " WHERE lecturercourses.courseID = '" + coureID +"'");




    //        'AAGR 1121'


    if(!(programSequence->exec()))
    {
        QMessageBox::warning(NULL,"We encounter an error: ",programSequence->lastError().text());
    }



    QSqlQuery lectures = *programSequence ;
    delete programSequence;
    return lectures;

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
        QMessageBox::warning(NULL,"We encounter an error: ",query->lastError().text());
        qDebug()<<query->lastError().text();
    }
    else {
        while(query->next())
        {
            programID = query->value(0).toString();
            qDebug()<< programID;
        }
    }
    delete query;


    QSqlQuery * query1 = new QSqlQuery;
    query1->prepare("INSERT INTO student(userId, programSequenceid, admissionYear)"
                    "VALUES (:userId, :programSequenceid, :admissionYear)");
    query1->bindValue(":userId", getUserId());
    query1->bindValue(":programSequenceid", programID);
    query1->bindValue(":admissionYear", yr);

    if(!(query1->exec()))
    {
        QMessageBox::warning(NULL,"We encounter an error: ",query1->lastError().text());
    }
    delete query1;
    bool updateStudentSequences = setStudentsCoursePerSequence(getStudentsCourses());
    if(updateStudentSequences)
        qDebug()<<"Successfully Add all courses";

}

bool databaseconnection::setStudentsCoursePerSequence(QSqlQuery courses)
{
    QString courseID;
    qDebug()<<"add course with studentID"<<getUserId();
    while (courses.next())
    {
        courseID = courses.value(0).toString();
            QSqlQuery * query = new QSqlQuery;
            query->prepare("INSERT INTO `studentcourses`(`studentid`, `courseid`) "
                           "VALUES (:studentid,:courseid)");


                           query->bindValue(":studentid",getUserId());
                           query->bindValue(":courseid",courseID);
                           if(query->exec())
                           {
                               qDebug()<<"add course with studentID"<<courseID;
                               //emit userLogOut();
                           }
                           else
                           {
                               qDebug()<<query->lastError().text();
                               return false;
                           }
            delete query;

    }

    return true;



}

bool databaseconnection::setCourseGrade(QStringList studentCourseGrade)
{
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

    bool courseHasGrade = isCourseGraded(courseID);
    bool addGrade = false;
    bool addComment = false;

    qDebug()<<"COURSE HAS GRADE:: "<<courseHasGrade <<" END";


    if (!courseHasGrade)

    {
        QSqlQuery * query1 = new QSqlQuery;


        qDebug()<<(grade == "TR");
        if (grade == "TR")
        {
            isTransfered =1;
        }
        else
        {
            isTransfered = 0;
        }
        query1->prepare("UPDATE studentcourses "
                        "SET courseGrade= '" + grade + "', courseRating= '" + rating  + "' , isTransferred = " + QString::number( isTransfered) + " "
                        "WHERE studentid = "+ getUserId() + " AND courseid = '"+ courseID+"' " );

        if(!(query1->exec()))
        {
            QMessageBox::warning(NULL,"We encounter an error: ","COULD NOT ADD YOUR GRADE " + query1->lastError().text());
            return false;
        }
        delete query1;
        addGrade = true;


    }


    if (!(comment.isEmpty() || lecture.isEmpty()))
    {

        qDebug()<<lecture;
        QStringList list = lecture.split(QRegExp("\\s+"));
        QStringList::Iterator lectureName = list.begin();
        QString firstName = *lectureName;
        ++lectureName;
        QString lastName = *lectureName;

        qDebug()<<firstName<<" "<<lastName;

        QTime ct = QTime::currentTime();

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
        delete query;

        QSqlQuery * query1 = new QSqlQuery;
        query1->prepare("INSERT INTO `coursecomments`(`courseid`, `timeStamp`, `comment`, `lecturerid`) "
                        "VALUES ( :courseid, :timeStamp, :comment, :lecturerid)");

        query1->bindValue(":courseid", courseID);
        query1->bindValue(":timeStamp", ct);
        query1->bindValue(":comment", comment);
        query1->bindValue(":lecturerid", LectureID);

        if(!(query1->exec()))
        {
            QMessageBox::warning(NULL,"We encounter an error: ","COULD NOT ADD COMMENT " + query->lastError().text());
            qDebug()<<query->lastError().text();
        }

        delete query;
        addComment = true;
    }

    if(!addGrade)
    {
        QMessageBox::warning(NULL,"We encounter an error: ","COULD NOT ADD GRADE, You have Already add a grade to this course. " );
        qDebug()<<"Grade NOT ADDED";
    }
    if (!addComment)
        QMessageBox::warning(NULL,"We encounter an error: ","COULD NOT ADD Comment, There seem to be an error while adding a Comment. " );


        if (addGrade && addComment)
        {
                QMessageBox msgBox;
                msgBox.setText("Successfully Added Grade & Comment");
                msgBox.setInformativeText("Both Grade And Comment have been added.");
                msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Discard );
                msgBox.setDefaultButton(QMessageBox::Ok);
                int ret = msgBox.exec();
         }


    if (addGrade || addComment)
    {
        if (addGrade)
        {
                QMessageBox msgBox;
                msgBox.setText("Successfully Added Grade ");
                msgBox.setInformativeText("The grade for this course "+  courseID  +" has been added.");
                msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Discard );
                msgBox.setDefaultButton(QMessageBox::Ok);
                int ret = msgBox.exec();
         }
        else
        {
            QMessageBox msgBox;
            msgBox.setText("Successfully Added Commet ");
            msgBox.setInformativeText("The Commet for this course "+  courseID  +" has been added.");
            msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Discard );
            msgBox.setDefaultButton(QMessageBox::Ok);
            int ret = msgBox.exec();
        }
            return true;

    }

    else
        return false;

}

QSqlQuery databaseconnection::getStudentsCourses()
{
    QSqlQuery *programSequence = new QSqlQuery;
    QString programSequenceid;
    QString admissionYr;
    programSequence->prepare("SELECT  programSequenceid, admissionYear FROM student WHERE userid = " + getUserId());



    if(!(programSequence->exec()))
    {
        QMessageBox::warning(NULL,"We encounter an error: ",programSequence->lastError().text());
    }

    {
        while(programSequence->next())
        {
            programSequenceid = programSequence->value(0).toString();
            admissionYr = programSequence->value(1).toString();
            qDebug()<<programSequenceid;
            qDebug()<<admissionYr;
        }

    }


    QSqlQuery * courses = new QSqlQuery;
    courses->prepare("SELECT courseID, name,credithour, prequisite, semester, pSYear FROM programsequencecourses "
                     "JOIN courses on courses.courseCode = programsequencecourses.courseID "
                     "JOIN prequisites on prequisites.id = courses.courseCode "
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
    return currentUserID;
}

void databaseconnection::setUserId(QString userId)
{
    currentUserID = userId;
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
    UserRole = role;
}

QString databaseconnection::getRole()
{
    return UserRole;
}

bool databaseconnection::isCourseGraded(QString courseID)
{

    QSqlQuery * query1 = new QSqlQuery;
    query1->prepare("SELECT courseGrade FROM studentcourses WHERE studentid = " + getUserId() + " AND courseid = '" + courseID + "'");

    if(!(query1->exec()))
    {
        QMessageBox::warning(NULL,"We encounter an error: ",query1->lastError().text());
    }
    else
    {
        while(query1->next())
        {
            QString checkingGrade = query1->value(0).toString();
            if(checkingGrade.isEmpty())
                return false;
            else
                return true;
        }

    }
    delete query1;
    return false;





}

