#include "users.h"

//users::users()
//{

//}

users::users(QString fName, QString mName, QString lName, QString userName, QChar gender, QString address, QString email, QString password, QString DOB,int id, QString role= "1")
{
    setUserName(userName);
    setFName(fName);
    setLName(lName);
    setMName(mName);
    setDOB(DOB);
    setEmail(email);
    setGender(gender);
    setAddress(address);
    setPassword(password);
    setUBID(id);
    setRole(role);

}

void users::setUBID(int id)
{
    UBid = id;
}
void users::setRole(QString defualt)
{
    role = defualt;
}

void users::setUserName(QString username)
{
    userName = username;
}

void users::setPassword(QString pass)
{
    password = pass;
}

void users::setFName(QString fname)
{
     fName = fname;
}

void users::setLName(QString lname)
{
    lName = lname;
}

void users::setDOB(QString dob)
{
    DOB = dob;
}

void users::setGender(QChar gen)
{
    gender = gen;
}

void users::setAddress(QString add)
{
    address = add;
}

void users::setEmail(QString mail)
{
    email = mail;
}

void users::setMName(QString mname)
{
    mName = mname;
}

QString users::getFName()
{
    return fName;
}

QString users::getLName()
{
    return lName;
}

QString users::getMName()
{
    return mName;
}

QString users::getDOB()
{
    return DOB;
}

QChar users::getGender()
{
    return gender;
}

QString users::getAddress()
{
    return address;
}

QString users::getEmail()
{
    return email;
}

QString users::getPassword()
{
    return password;
}

QString users::getUserName()
{
    return userName;
}

QString users::getRole()
{
    return role;
}
