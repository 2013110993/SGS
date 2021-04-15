#ifndef DATABASECONNECTION_H
#define DATABASECONNECTION_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include "student.h"
#include "dashboard.h"
#include "dashboardstudent.h"
//#include "sgsapp.h"



class databaseconnection
{

public:
    databaseconnection();
    ~databaseconnection();
    void connect();
    void disconnect();
    void searchAllStudent();
    void searchStudent();
    void insertNewUser(student &student);
    bool loginUser(QString, QString);
    void logoutUser(Dashboard *);
    void resetPassword();
    void suspendUser();
    bool isconnected();
    QSqlQuery updateQuestion();
    QSqlQuery getLostAccount(QString lostAccount);


private:
    bool connected;
    bool logSatus;
    Dashboard *dash;
    Dashboard createDash;
    QString currentUserID;
    int const questionAsk = 3;
};

#endif // DATABASECONNECTION_H
