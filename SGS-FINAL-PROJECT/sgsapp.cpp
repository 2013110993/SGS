#include "sgsapp.h"
#include "ui_sgsapp.h"
#include "databaseconnection.h"
#include <QtSql>


sgsApp::sgsApp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::sgsApp)

{


    ui->setupUi(this);
    connection = new databaseconnection;
    //Default landing Page for StackedWidget
    ui->stackedWidgetSGS->setCurrentIndex(0);

    qDebug()<<"about to connect";

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
    qDebug()<<"!queries.next";;
    qDebug()<< !(queries.next());

    if(!(queries.next()))
    {
        queries = connection->updateQuestion();
        qDebug()<<"here1";

    }
    else {
          qDebug()<<"debug queries.next";;
        qDebug()<<queries.lastError();
    }

    if (queries.size() > 0)
    {
     connect(this,SIGNAL(sendQuestion(QSqlQuery)), reg , SLOT(recieveQuestion(QSqlQuery)));
     emit sendQuestion(queries);
    }


    //Modal Approach
    reg->setModal(true);
    reg->show();
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
            ui->loginErrorLabel->setStyleSheet("border:1px solid #b50009; color:#b50009;height:30px;border-radius:5px;");
           }
}

void sgsApp::on_forgotPasswordButton_clicked()
{
    //create a new instance of reg
    forgot = new forgotPassword(this);
   // QSqlQuery query = connection->updateQuestion();
    //Modal Approach
    forgot->setModal(true);
    forgot->show();

}

//Login Form to Change echo mode for Password
void sgsApp::on_passwordShowButton_clicked()
{
    //Checks which echo mode and switch it
    if(ui->passwordInput->echoMode() == QLineEdit::Password )
    {
        ui->passwordInput->setEchoMode(QLineEdit::Normal);
        ui->passwordShowButton->setIcon(QIcon(":/iconsGray/Icons/Gray/Eye OFF.png"));
    }else{
        ui->passwordInput->setEchoMode(QLineEdit::Password);
        ui->passwordShowButton->setIcon(QIcon(":/iconsGray/Icons/Gray/Eye ON.png"));
    }

}

