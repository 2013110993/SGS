#include "users.h"

//users::users()
//{

//}

users::users(QString fName, QString mName, QString lName, QString userName, QChar gender, QString address, QString email, QString password, QString DOB,int id, QString role,
             int questionId1, int questionId2,int questionId3, QString question1, QString question2, QString question3)
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
    setQuestion1(question1);
    setQuestion2(question2);
    setQuestion3(question3);
    setQuesId1(questionId1);
    setQuesId2(questionId2);
    setQuesId3(questionId3);

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

void users::setQuestion1(QString ques1)
{
    Question1 = ques1;
}

QString users::getQuestion1()
{
    return Question1;
}

void users::setQuestion2(QString ques2)
{
    Question2 = ques2;
}

QString users::getQuestion2()
{
    return Question2;
}

void users::setQuestion3(QString ques3)
{
     Question3 = ques3;
}

QString users::getQuestion3()
{
    return Question3;
}

void users::setQuesId1(int questionId)
{
    quesId1 = questionId;
}

void users::setQuesId2(int questionId2)
{
    quesId2 = questionId2;
}

void users::setQuesId3(int questionId3)
{
    quesId3 = questionId3;
}

int users::getQuesId1()
{
    return quesId1;
}

int users::getQuesId2()
{
    return quesId2;
}

int users::getQuesId3()
{
    return quesId3;
}
