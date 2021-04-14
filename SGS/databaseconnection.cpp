#include "databaseconnection.h"

#include "dashboardstudent.h"

databaseconnection::databaseconnection()
{
   currentUserID = "test";

    qDebug()<<"construc";
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
    setConnection.setDatabaseName("test");
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
        query.prepare("INSERT INTO person (id, firstname, lastname) "
                      "VALUES (:id, :firstname, :lastname)");

        query.bindValue(":id", id);
        query.bindValue(":firstname", fname);
        query.bindValue(":lastname", lname);


        if(query.exec())
        {
            QSqlQuery query2;
            query2.prepare("INSERT INTO users (personId, username, password, email,activeUser,roleId) "
                          "VALUES (:personId, :username, :password, :email,:activeUser,:roleId)");
            query2.bindValue(":personId", id);
            query2.bindValue(":username", username);
            query2.bindValue(":password", password);
            query2.bindValue(":email", email);
            query2.bindValue(":activeUser", 1);
            query2.bindValue(":roleId", roleID);
             qDebug()<<id;

            if(query2.exec())
            {
                qDebug()<<"successaddingUser";
            }
            else {
                 qDebug()<<query.lastError().text();
            }



        }
        else {
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
                               currentUserID = userID = query.value(0).toString();
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
                        else if (role == "2") {
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
    qDebug()<<"here check: "<<currentUserID<<"here check: ";
    query3.bindValue(":id",currentUserID);
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


//    sgsApp * loginScreen = new sgsApp;
//    loginScreen->show();

}

void databaseconnection::suspendUser()
{

}

bool databaseconnection::isconnected()
{
    return connected;
}


bool test()
{

}

