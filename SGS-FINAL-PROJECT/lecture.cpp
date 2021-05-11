#include "lecture.h"

//lecture::lecture(QString fName, QString mName, QString lName, QString userName, QString address, QString email, QString password, QString DOB, QChar gender, QString role, int questionId1, int questionId2, int questionId3, QString question1, QString question2, QString question3)
//{

//}

lecture::lecture()
{

}

QSqlQuery lecture::getLecturerCourses(databaseconnection &dbobj)
{
    return dbobj.getLectureCourse();        //returns lecturer courses from function getLectureCourse()
}
