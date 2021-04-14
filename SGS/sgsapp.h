#ifndef SGSAPP_H
#define SGSAPP_H

#include <QMainWindow>
#include "register.h"
<<<<<<< HEAD
#include "databaseconnection.h"

=======
#include "forgotpassword.h"
>>>>>>> 7e630ac98acc01afa541de3a7b22e01f8e4ee867

QT_BEGIN_NAMESPACE
namespace Ui { class sgsApp; }
QT_END_NAMESPACE

class sgsApp : public QMainWindow
{
    Q_OBJECT

public:
    sgsApp(QWidget *parent = nullptr);
    ~sgsApp();

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
};
#endif // SGSAPP_H
