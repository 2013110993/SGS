#ifndef LECTURE_H
#define LECTURE_H
#include "users.h"
#include "student.h"
#include "databaseconnection.h"
class lecture
        //: public student
{
public:
   // lecture(QString fName, QString mName, QString lName, QString userName, QString address, QString email, QString password, QString DOB, QChar gender, QString role,
     //        int questionId1, int questionId2,int questionId3, QString question1, QString question2, QString question3);
    lecture();
    void addNewStudent(student &student);
    QSqlQuery getLecturerCourses(databaseconnection &dbobj);

};

#endif // LECTURE_H
