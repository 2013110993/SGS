#ifndef DATABASECONNECTION_H
#define DATABASECONNECTION_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include "student.h"
//#include "sgsapp.h"



class databaseconnection
{

public:
    databaseconnection();
    ~databaseconnection();


    bool setStudentsCoursePerSequence(QSqlQuery);
    bool setCourseGrade(QStringList);
    bool loginUser(QString, QString);
    bool isconnected();
    bool isCourseGraded(QString);
    bool activateUser(QString, int);
    bool deactivateUser(QString, int);
    bool addProgramSequence(QString,QString,QString,QString,QStringList,QStringList,QStringList,QStringList,QStringList);

    bool checkisCourseAval(QString);

    void connect();
    void disconnect();
    void searchAllStudent();
    void searchStudent();
    void insertNewUser(users &student);
    void logoutUser();
    void resetPassword();
    void suspendUser();
    void setStudentSequence(QString,QString,int);
    void addLectureCourse(QString,QString);\
    void setUserId(QString);
    void resetPassword(QString);
    void setRole(QString);

    QSqlQuery updateQuestion();
    QSqlQuery getUserInfo(QString , int);
    QSqlQuery getLecturerInfo(QString);
    QSqlQuery getFaculty();
    QSqlQuery getProgramSequences(QString,QString);
    QSqlQuery getLectureName(QString);
    QSqlQuery getStudentsCourses(); //overloaded function
    QSqlQuery getStudentsCourses(QString); //overloaded function
    QSqlQuery getLectureCourses(QString);
    QSqlQuery getCourses();
    QSqlQuery getLecturesByCourse(QString);
    QSqlQuery getComments(QString, QString);
    QSqlQuery getLectureCourse();

    //overload functions
    QSqlQuery getRatingComment();
    QSqlQuery getRatingComment(QString, QString);

    QString getRole();
    QString getUserId();

    QStringList getComment(QString);
    QStringList getSequenceName();
    QStringList activate_DeactivateLecture(QString, int);



    //friend functions
    friend void closeDatabase(databaseconnection &);
    friend QSqlQuery getLecturerCourses(databaseconnection &);

    QStringList pending_completed();
    QStringList commented_Course();

private:
    bool connected;
    bool logSatus;
    QString currentUserID;
    QString UserRole;
    int const questionAsk = 3;
    QString programSeqID;
    QSqlDatabase setConnection;
};

#endif // DATABASECONNECTION_H
