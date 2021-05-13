#include "lecture.h"

lecture::lecture(QString fName, QString mName, QString lName, QString userName, QString address, QString email, QString password,int id, QString DOB, QChar gender, QString role,
                 int questionId1, int questionId2,int questionId3, QString question1, QString question2, QString question3):
    users(fName,  mName,  lName,  userName,  gender,  address,  email,  password,  DOB, id,  role, questionId1, questionId2, questionId3, question1, question2, question3)
{

}


QSqlQuery lecture::getLecturerCourses(databaseconnection &dbobj)
{
    return dbobj.getLectureCourse();        //returns lecturer courses from function getLectureCourse()
}
