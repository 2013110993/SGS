#include "student.h"
// student(f,m,l,u,f,e,p,ID," ", 'm',QString::number(studentRole));
student::student(QString fName, QString mName, QString lName, QString userName, QString address, QString email, QString password,int id, QString DOB= "test", QChar gender = 'M', QString role= "1") :
    users(fName,  mName,  lName,  userName,  gender,  address,  email,  password,  DOB, id,  role)
{
    setID(id);
}

int student::getID()
{
    return id;
}

void student::setID(int ID)
{
    id = ID;
}

float student::getRoleID()
{

    return 0;
}

void student::seRoletID(int)
{

}
