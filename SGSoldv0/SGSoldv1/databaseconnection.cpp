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
    //delete dash;
}

void databaseconnection::connect()
{
    QSqlDatabase setConnection = QSqlDatabase::addDatabase("QMYSQL");
    setConnection.setHostName("127.0.0.1");
    setConnection.setPort(3366);
    setConnection.setUserName("root");
    setConnection.setPassword("");
    setConnection.setDatabaseName("studentgradingsystem");
    connected = setConnection.open();
    try
    {
    if(setConnection.open())
    {
        qDebug() << "Successfully connected to database!";

    }
    else
        throw "The connection to phpMyAdmin Failed!";
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

        int id = student.getID();
        qDebug()<<id;

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

        query.prepare("INSERT INTO person (id, firstname, lastname) "
                      "VALUES (:id, :firstname, :lastname)");

        query.bindValue(":id", id);
        query.bindValue(":firstname", fname);
        query.bindValue(":lastname", lname);

        QString answer[questionAsk];
        answer[0] = student.getQuestion1();
        answer[1]  = student.getQuestion2();
        answer[2] = student.getQuestion3();

        int quesId[questionAsk];

        quesId[0] = student.getQuesId1();
        quesId[1] = student.getQuesId2();
        quesId[2] = student.getQuesId3();

        qDebug()<<"id : "<<studentID<<" asd";
        if(query.exec())
        {
            qDebug()<<"add person, going to user";
            QSqlQuery query3;
            query3.prepare("INSERT INTO users (personId, username, password, email,activeUser,roleId, createdAt) "
                          "VALUES (:personId, :username, :password, :email,:activeUser,:roleId, :createdAt)");
            query3.bindValue(":personId", id);
            query3.bindValue(":username", username);
            query3.bindValue(":password", password);
            query3.bindValue(":email", email);
            query3.bindValue(":activeUser", 1);
            query3.bindValue(":roleId", roleID);
            query3.bindValue(":createdAt", ct);
            qDebug()<<id;

           if(query3.exec())
            qDebug()<<"created user";
           else {
               qDebug()<<query3.lastError().text();
           }
            QSqlQuery getID;
            QString stu;
            if(getID.exec("SELECT id FROM users WHERE personid = " + studentID))
            {
                while (getID.next())
                {
                    stu = getID.value(0).toString();

                        qDebug()<<"created user right : ";

                        qDebug()<<stu;
                         qDebug()<<" ^created user right : ";

                }

            }

            else
            {
               qDebug()<< "lasterror";
                qDebug()<<getID.lastError().text();
            }

            for (int var = 0; var < questionAsk; ++var)
            {
                QSqlQuery query2;
                query2.clear();
                query2.prepare("INSERT INTO securityquestions (userId , questionId , answer) "
                              "VALUES (:userId, :questionId, :answer)");
                query2.bindValue(":userId", stu);
                query2.bindValue(":questionId", quesId[var]);
                query2.bindValue(":answer", answer[var]);
                if(query2.exec())
                {

                     qDebug()<<"adding ques"<<stu;
                }

                else {
                    qDebug()<<"errororor";
                    getID.lastError().text();
                }

            }
        }
        else
        {
             qDebug()<<query.lastError().text();
        }

}

bool databaseconnection::loginUser(QString username, QString password)
{
    QSqlQuery query;
    qDebug()<<username<<" "<<password;
    QString logIn =QString::number(1);
    QString role;

    if (query.exec( "SELECT id, roleid from users WHERE username = '" + username + "' AND password = '" +
                    password + "' AND activeUser = '" + logIn + "' "))
    {
        qDebug()<<"enter";
                if (query.size() > 0)
                {
                        QString userID;
                            while (query.next())
                            {
                                userID = query.value(0).toString();
                                setAccountID(userID);
                                role = query.value(1).toString();
                               qDebug() <<"role "<< role <<" here";
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

                        if(role == "1")
                        {
                            qDebug()<<"creating dashStud";
                            dashboardStudent * studDash = new dashboardStudent;
                            qDebug()<<"creating dashStud";
                           // studDash->getUserLabel()->setText(username);
                            studDash->show();
                            //delete  studDash;
                            return true;
                        }
                        else if (role == "3") {
                            qDebug()<<"creating dashStud";
                             dash = new Dashboard;
                            qDebug()<<"creating dashStud";
                            dash->getUserLabel()->setText(username);
                            dash->show();
                            //delete dash;
                            return true;
                        }

                }
                else
                {
                    qDebug()<<"here: ";
                    qDebug()<<query.lastError().text();
                    qDebug()<<" Login failed Invalid username or password.d s";
                    return false;
                }
    }
    else
        {
        qDebug()<<"here: ";
        qDebug()<<query.lastError().text();
           qDebug()<<"Login failed Invalid username or password.";
           return false;
        }
    return false;

}

void databaseconnection::logoutUser(Dashboard * dash)
{
    logSatus=false;
    //dash->close();
    QTime ct = QTime::currentTime();
    QString currentTime =ct.toString();
    QSqlQuery query3;
    query3.prepare("INSERT INTO loginstatus (id, lastLogin) "
                  "VALUES (:id,:lastLogin)");
    qDebug()<<"here check: "<<getAccountID()<<"here check: ";
    query3.bindValue(":id",getAccountID());
     qDebug()<<ct;
    query3.bindValue(":lastLogin",ct);
    if(query3.exec())
    {
        qDebug()<<"update log status";
        //emit userLogOut();
    }
    else
    {
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
    qDebug()<<"test0000";
    query->exec();

    return *query;



}

QSqlQuery databaseconnection::getLostAccount(QString lostAccount)
{
    QSqlQuery * query = new QSqlQuery;
    // ques id, ans, where id es id
    query->prepare("SELECT  FROM users WHERE personId = " + lostAccount);
    qDebug()<<"test0000";
    query->exec();

    return *query;
}

void databaseconnection::setAccountID(QString accID)
{
    currentUserID = accID;
}

QString databaseconnection::getAccountID()
{
    return currentUserID;
}


bool test()
{

    return true;

}

