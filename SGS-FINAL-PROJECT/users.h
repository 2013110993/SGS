#ifndef USERS_H
#define USERS_H
#include <QString>
#include <string>
using std::string;


class users
{
public:
    users(QString,QString,QString,QString,QChar,QString,QString,QString,QString,int,QString,
          int questionId1, int questionId2,int questionId3, QString question1, QString question2, QString question3);
    QString getFName();
    QString getLName();
    QString getMName();
    QString getDOB();//check
    QChar getGender();
    QString getAddress();//still might..
    QString getEmail();
    QString getPassword();
    QString getUserName();
    QString getRole();
    void setRole(QString);
    int getUBID();
    void setUBID(int);
    void setUserName(QString);
    void setPassword(QString);
    void setFName(QString);
    void setLName(QString);
    void setDOB(QString);
    void setGender(QChar);
    void setAddress(QString);
    void setEmail(QString);
    void setMName(QString);
    void setQuestion1(QString);
    QString getQuestion1();
    void setQuestion2(QString);
    QString getQuestion2();
    void setQuestion3(QString);
    QString getQuestion3();

    void setQuesId1(int);
    void setQuesId2(int);
    void setQuesId3(int);
    int getQuesId1();
    int getQuesId2();
    int getQuesId3();
private:
    int UBid;
    QString userName;
    QString fName;
    QString lName;
    QString mName;//might not user
    QChar gender;
    QString DOB;
    QString password;
    QString address;
    QString email;
    QString role;
    QString Question1;
    QString Question2;
    QString Question3;
    int quesId1;
    int quesId2;
    int quesId3;
};

#endif // USERS_H
