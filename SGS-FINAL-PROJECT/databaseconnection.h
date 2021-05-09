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
    bool setStudentsCoursePerSequence(QSqlQuery);
    bool setCourseGrade(QStringList);
    QSqlQuery getStudentsCourses(); //overloaded function
    QSqlQuery getStudentsCourses(QString); //overloaded function
    QSqlQuery getLectureCourses(QString);
    QSqlQuery getCourses();
    QString getUserId();
    QStringList getComment(QString);
    QStringList getSequenceName();
    void addLectureCourse(QString,QString);
    QSqlQuery getLectureCourse ();
    void setUserId(QString);
    void resetPassword(QString);
    void setRole(QString);
    QString getRole();


    QSqlQuery getLecturesByCourse(QString);
    QSqlQuery getComments(QString, QString);

    bool isCourseGraded(QString);

    //friend functions
    friend void closeDatabase(databaseconnection &);
    friend QSqlQuery getLecturerCourses(databaseconnection &);

private:
    bool connected;
    bool logSatus;
    Dashboard *dash;
    Dashboard createDash;
    QString currentUserID;
    QString UserRole;
    int const questionAsk = 3;
    QString programSeqID;
    QSqlDatabase setConnection;
};

#endif // DATABASECONNECTION_H
