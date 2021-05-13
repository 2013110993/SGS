#include "users.h"

//users::users()
//{

//}

users::users(QString fName, QString mName, QString lName, QString userName, QChar gender, QString address, QString email, QString password, QString DOB,int id, QString role,
             int questionId1, int questionId2,int questionId3, QString question1, QString question2, QString question3)
{
    //sets the user's requierments
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
    UBid = id;      //assigns user's id
}
void users::setRole(QString defualt)
{
    role = defualt;     //assigns user's role
}

int users::getUBID()
{
    return UBid;
}

void users::setUserName(QString username)
{
    userName = username;        //assigns user's username
}

void users::setPassword(QString pass)
{
    password = pass;        //assigns user's password
}

void users::setFName(QString fname)
{
     fName = fname;     //assigns user's first name
}

void users::setLName(QString lname)
{
    lName = lname;      //assigns user's last name
}

void users::setDOB(QString dob)
{
    DOB = dob;      //assigns user's date of birth
}

void users::setGender(QChar gen)
{
    gender = gen;       //assigns user's gender
}

void users::setAddress(QString add)
{
    address = add;      //assigns user's address
}

void users::setEmail(QString mail)
{
    email = mail;       //assigns user's email
}

void users::setMName(QString mname)
{
    mName = mname;      //assigns user's middle name
}

QString users::getFName()
{
    return fName;       //returns user's first name
}

QString users::getLName()
{
    return lName;       //returns user's last name
}

QString users::getMName()
{
    return mName;       //returns user's middle name
}

QString users::getDOB()
{
    return DOB;     //returns user's date of birth
}

QChar users::getGender()
{
    return gender;      //returns user's gender
}

QString users::getAddress()
{
    return address;     //returns user's address
}

QString users::getEmail()
{
    return email;       //returns user's email
}

QString users::getPassword()
{
    return password;        //returns user's password
}

QString users::getUserName()
{
    return userName;        //returns user's username
}

QString users::getRole()
{
    return role;        //returns user's role
}

void users::setQuestion1(QString ques1)
{
    Question1 = ques1;      //assigns question 1
}

QString users::getQuestion1()
{
    return Question1;      //returns question 1
}

void users::setQuestion2(QString ques2)
{
    Question2 = ques2;      //assigns questions 2
}

QString users::getQuestion2()
{
    return Question2;       //returns questions 2
}

void users::setQuestion3(QString ques3)
{
     Question3 = ques3;     //assigns question 3
}

QString users::getQuestion3()
{
    return Question3;    //returns question 3
}

void users::setQuesId1(int questionId)
{
    quesId1 = questionId;       //assigns questions id 1
}

void users::setQuesId2(int questionId2)
{
    quesId2 = questionId2;      //assigns question id 2
}

void users::setQuesId3(int questionId3)
{
    quesId3 = questionId3;      //assigns question id 3
}

int users::getQuesId1()
{
    return quesId1;     //returns question id 1
}

int users::getQuesId2()
{
    return quesId2;     //returns question id 2
}

int users::getQuesId3()
{
    return quesId3;     //returns question id 3
}
