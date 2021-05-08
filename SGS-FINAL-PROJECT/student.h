#ifndef STUDENT_H
#define STUDENT_H
#include <QString>
#include <string>
#include "users.h"
using std::string;

class student : public users
{
public:
    student(QString fName, QString mName, QString lName, QString userName, QString address, QString email, QString password,int id, QString DOB, QChar gender, QString role,
            int questionId1, int questionId2,int questionId3, QString question1, QString question2, QString question3);
    int getID();
    float getGPA();
    void setID(int);
    float getRoleID();
    void seRoletID(int);
    void setGPA(float);


private:

    int id;

};

#endif // STUDENT_H
