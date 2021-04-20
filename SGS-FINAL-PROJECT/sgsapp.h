#ifndef SGSAPP_H
#define SGSAPP_H

#include <QMainWindow>
#include "register.h"

#include "databaseconnection.h"

#include "forgotpassword.h"


QT_BEGIN_NAMESPACE
namespace Ui { class sgsApp; }
QT_END_NAMESPACE

class sgsApp : public QMainWindow
{
    Q_OBJECT

public:
    sgsApp(QWidget *parent = nullptr);
    ~sgsApp();
    void disableStudentFeature();
    void showFeature();
    void hideFeature();

signals:
     void sendQuestion(QSqlQuery);

private slots:
    void on_signUpButton_clicked();
    void on_signInButton_clicked();
    void logout();

    void on_forgotPasswordButton_clicked();

    void on_passwordShowButton_clicked();

    void on_logoutTopBarButton_clicked();

    void on_new_Account_pushButton_clicked();

    void on_resetPasswd_pushButton_clicked();

    void on_suspendSetting_pushButton_clicked();

    void on_dashboard_pushButton_clicked();


    void on_logoutButton_clicked();

    void on_changePassword_Button_clicked();

    void on_addUser_Button_clicked();

    void on_viewProgramSequence_Button_clicked();

private:
    Ui::sgsApp *ui;
    forgotPassword * forgot;
    Register *reg;
    databaseconnection * connection;
    QSqlQuery queries;
    bool buttonClick;
};
#endif // SGSAPP_H
