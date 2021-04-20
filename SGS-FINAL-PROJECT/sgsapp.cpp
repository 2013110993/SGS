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
    buttonClick = true;
    qDebug()<<"about to connect";

}

sgsApp::~sgsApp()
{
    delete connection;
    delete ui;


}

void sgsApp::disableStudentFeature()
{
    ui->AddProgramSequence_Button->hide();
    ui->addCourse_Button->hide();
    ui->disableUser_Button->hide();
    ui->addUser_Button->hide();
    ui->addInstitution_Button->hide();
}

void sgsApp::hideFeature()
{
//    ui->AddProgramSequence_Button->hide();
//    ui->addCourse_Button->hide();
//    ui->addInstitution_Button->hide();
//    ui->addInstitution_Button_2->hide();

}

void sgsApp::showFeature()
{
//    ui->AddProgramSequence_Button->show();
//    ui->addCourse_Button->show();
//    ui->addInstitution_Button->show();
//    ui->addInstitution_Button_2->show();
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
    qDebug()<< !(queries.next());

    if(!(queries.next()))
    {
        queries = connection->updateQuestion();
    }
    else
    {
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
        qDebug()<<connection->getRole();
        int role =  connection->getRole().toInt();
        qDebug()<<role;
        if (checking)
        {
            switch (role)
            {
            case 1:
            {
                ui->stackedWidgetSGS->setCurrentIndex(1);
                disableStudentFeature();
                ui->userRoleLable->setText(username);
            }
                break;
            case 2:
            {
                ui->stackedWidgetSGS->setCurrentIndex(1);
                ui->userRoleLable->setText(username);
            }
                break;
            case 3:
            {
                ui->stackedWidgetSGS->setCurrentIndex(1);
                ui->userRoleLable->setText(username);
            }
                break;
            default:
                qDebug()<<"error! ! 404";
            }


        }

        else {
            ui->loginErrorLabel->setText("~ Invalid Credentials! ~");
            ui->loginErrorLabel->setStyleSheet("border:1px solid #b50009; color:#b50009;height:30px;border-radius:5px;");
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


void sgsApp::on_logoutTopBarButton_clicked()
{
    ui->stackedWidgetSGS->setCurrentIndex(0);
}


void sgsApp::on_new_Account_pushButton_clicked()
{

}

void sgsApp::on_resetPasswd_pushButton_clicked()
{

}

void sgsApp::on_suspendSetting_pushButton_clicked()
{


}

void sgsApp::on_dashboard_pushButton_clicked()
{
    //New functionality comming soon
//    if (buttonClick)
//    {
//        buttonClick = false;
//        qDebug("clicked");
//          ui->dashboard_pushButton->setIcon(QIcon(":/icons White/Icons/White/Single Arrow LEFT.png"));
//          hideFeature();
//    }
//    else
//    {
//        ui->dashboard_pushButton->setIcon(QIcon(":/icons White/Icons/White/Single Arrow RIGHT.png"));
//        buttonClick = true;
//        showFeature();
//    }
}

//New Buttons
void sgsApp::on_logoutButton_clicked()
{
    ui->stackedWidgetSGS->setCurrentIndex(0);
}

void sgsApp::on_changePassword_Button_clicked()
{
    //create a new instance of reg
    forgot = new forgotPassword(this);
   // QSqlQuery query = connection->updateQuestion();
    //Modal Approach
    forgot->setModal(true);
    forgot->show();
}

void sgsApp::on_addUser_Button_clicked()
{
    Register * registerNewStudent = new Register;
    //Modal approach
    registerNewStudent->setModal(true);
    registerNewStudent->show();
}

void sgsApp::on_viewProgramSequence_Button_clicked()
{

}
