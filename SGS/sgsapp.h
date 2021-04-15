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

signals:
     void sendQuestion(QSqlQuery);

private slots:
    void on_signUpButton_clicked();
    void on_signInButton_clicked();
    void logout();

    void on_forgotPasswordButton_clicked();

private:
    Ui::sgsApp *ui;
    forgotPassword * forgot;
    Register *reg;
    databaseconnection * connection;
    QSqlQuery queries;
};
#endif // SGSAPP_H
