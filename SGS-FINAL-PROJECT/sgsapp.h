#ifndef SGSAPP_H
#define SGSAPP_H

#include <QMainWindow>
#include "register.h"

#include "databaseconnection.h"

#include "forgotpassword.h"
#include "activate_deactivateuser.h"


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

    void programSequenceList();

    void on_viewStudentProgramSequence_Button_clicked();

    void on_programSequenceTableWidget_cellClicked(int row, int column);

    void on_updateCourse_pushButton_clicked();

    void on_disableUser_Button_2_clicked();

    void on_disableUser_Button_clicked();

    void on_viewCourses_Button_clicked();

    void viewCoursesTable();

    void viewLecturerCoursesTable();

    void on_viewCoursesTableWidget_cellClicked(int row, int column);

    void on_AddLecturerCourse_Button_clicked();

    void on_lecturerCoursesListTableWidget_cellClicked(int row, int column);

    void on_filterSearchButton_clicked();

private:
    Ui::sgsApp *ui;
    forgotPassword * forgot;
    Register *reg;
    Activate_DeactivateUser *active_deactivate;
    databaseconnection * connection;
    QSqlQuery queries;
    bool buttonClick;
};
#endif // SGSAPP_H
