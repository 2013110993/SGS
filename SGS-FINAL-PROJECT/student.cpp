#include "student.h"
// student(f,m,l,u,f,e,p,ID," ", 'm',QString::number(studentRole));
student::student(QString fName, QString mName, QString lName, QString userName, QString address, QString email, QString password,int id, QString DOB, QChar gender, QString role,
                 int questionId1, int questionId2,int questionId3, QString question1, QString question2, QString question3) :
    users(fName,  mName,  lName,  userName,  gender,  address,  email,  password,  DOB, id,  role, questionId1, questionId2, questionId3, question1, question2, question3)
{
    setID(id); //calls set id for the student
}

int student::getID()
{
    return id;  //
}

void student::setID(int ID)
{
    id = ID;        //sets the if for student
}

float student::getRoleID()
{
    return 0; //returns 0 for studentss role id
}

void student::seRoletID(int)
{

}

