#include "sgsapp.h"
#include "ui_sgsapp.h"
#include <QDebug>

sgsApp::sgsApp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::sgsApp)
{
    ui->setupUi(this);

    //Default landing Page for StackedWidget
    ui->stackedWidgetSGS->setCurrentIndex(0);
}

sgsApp::~sgsApp()
{
    delete ui;
}

//Register Button
void sgsApp::on_signUpButton_clicked()
{
    //create a new instance of reg
    reg = new Register(this);

    //Modal Approach
    reg->setModal(true);
    reg->show();
}


//Login Button
void sgsApp::on_signInButton_clicked()
{
    QString username = ui->usernameInput->text();
        QString password = ui->passwordInput->text();

        if( username == "admin" && password == "admin")
        {
           ui->stackedWidgetSGS->setCurrentIndex(1);
        }
        else {
           ui->loginErrorLabel->setText("~ Invalid Credentials! ~");
        }
}

void sgsApp::on_forgotPasswordButton_clicked()
{
    //create a new instance of reg
    forgot = new forgotPassword(this);

<<<<<<< HEAD
   // QSqlQuery query = connection->updateQuestion();
=======
>>>>>>> 9f4a76a785e1dbcf101c8a1edcdd7e13a53938c6
    //Modal Approach
    forgot->setModal(true);
    forgot->show();

}

//Login Form to Change echo mode for Password
void sgsApp::on_pushButton_clicked()
{
    //Checks which echo mode and switch it
    if(ui->passwordInput->echoMode() == QLineEdit::Password )
    {
        ui->passwordInput->setEchoMode(QLineEdit::Normal);
    }else{
        ui->passwordInput->setEchoMode(QLineEdit::Password);
    }

}
