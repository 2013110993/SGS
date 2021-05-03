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
    void logoutUser();
    void resetPassword();
    void suspendUser();
    bool isconnected();
    QSqlQuery updateQuestion();
    QSqlQuery getUserInfo(QString , int);
    QSqlQuery getLecturerInfo(QString);
    QSqlQuery getFaculty();
    QSqlQuery getProgramSequences(QString,QString);
    QSqlQuery getLectureName(QString);
    void setStudentSequence(QString,QString,int);
    bool setCourseGrade(QStringList);
    QSqlQuery getStudentsCourses();
    QString getUserId();
    void setUserId(QString);
    void resetPassword(QString);
    void setRole(QString);
    QString getRole();

    bool isCourseGraded(QString);

private:
    bool connected;
    bool logSatus;
    Dashboard *dash;
    Dashboard createDash;
    QString currentUserID;
    QString UserRole;
    int const questionAsk = 3;
    QSqlDatabase setConnection;
};

#endif // DATABASECONNECTION_H
