#ifndef USERS_H
#define USERS_H
#include <QString>
#include <string>
using std::string;


class users
{
public:
    users(QString,QString,QString,QString,QChar,QString,QString,QString,QString,int,QString);
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
};

#endif // USERS_H
