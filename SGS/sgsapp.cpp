#include "sgsapp.h"
#include "ui_sgsapp.h"
#include "databaseconnection.h"


sgsApp::sgsApp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::sgsApp)

{
    connection = new databaseconnection;

    ui->setupUi(this);
    //Default landing Page for StackedWidget
    ui->stackedWidgetSGS->setCurrentIndex(0);




}

sgsApp::~sgsApp()
{
    delete connection;
    delete ui;

}

void sgsApp::logout()
{
    qDebug()<<"showed";
        this->show();

}

//Register Button
void sgsApp::on_signUpButton_clicked()
{
    //create a new instance of reg

    reg = new Register(this);

    //Modal Approach
    reg->setModal(true);
    reg->show();
    //delete reg;
}


//Login Button
void sgsApp::on_signInButton_clicked()
{
        QString username = ui->usernameInput->text();
        QString password = ui->passwordInput->text();


        bool checking = connection->loginUser(username,password);
        if (checking)
        this->close();
        else {
            ui->loginErrorLabel->setText("~ Invalid Credentials! ~");
           }
}

void sgsApp::on_forgotPasswordButton_clicked()
{
    //create a new instance of reg
    forgot = new forgotPassword(this);

    //Modal Approach
    forgot->setModal(true);
    forgot->show();

}
