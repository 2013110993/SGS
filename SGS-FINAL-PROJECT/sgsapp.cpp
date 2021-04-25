#include "sgsapp.h"
#include "ui_sgsapp.h"
#include "databaseconnection.h"
#include <QtSql>
#include <QTableWidget>


sgsApp::sgsApp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::sgsApp)

{


    ui->setupUi(this);

    connection = new databaseconnection;

    //Default landing Page for StackedWidget
    ui->stackedWidgetSGS->setCurrentIndex(0);

    //Default landing for Dashboard
    ui->stackedWidgetPages->setCurrentIndex(0);

    buttonClick = true;

    qDebug()<<"about to connect";


}

sgsApp::~sgsApp()
{
    delete connection;
    delete forgot;
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

           if (username == "admin" && password == "admin")
           {
               ui->stackedWidgetSGS->setCurrentIndex(1);
           }

//        bool checking = connection->loginUser(username,password);
//        qDebug()<<connection->getRole();
//        int role =  connection->getRole().toInt();
//        qDebug()<<role;
//        if (checking)
//        {
//            switch (role)
//            {
//            case 1:
//            {
//                ui->stackedWidgetSGS->setCurrentIndex(1);
//                disableStudentFeature();
//                ui->userRoleLable->setText(username);
//            }
//                break;
//            case 2:
//            {
//                ui->stackedWidgetSGS->setCurrentIndex(1);
//                ui->userRoleLable->setText(username);
//            }
//                break;
//            case 3:
//            {
//                ui->stackedWidgetSGS->setCurrentIndex(1);
//                ui->userRoleLable->setText(username);
//            }
//                break;
//            default:
//                qDebug()<<"error! ! 404";
//            }


//        }

//        else {
//            ui->loginErrorLabel->setText("~ Invalid Credentials! ~");
//            ui->loginErrorLabel->setStyleSheet("border:1px solid #b50009; color:#b50009;height:30px;border-radius:5px;");
//           }
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



//New Buttons
void sgsApp::on_logoutButton_clicked()
{
    ui->stackedWidgetSGS->setCurrentIndex(0);
}

void sgsApp::on_changePassword_Button_clicked()
{
    //create a new instance of reg
    forgot = new forgotPassword(this);
    //Modal Approach
    forgot->setModal(true);
    forgot->show();
}

void sgsApp::on_addUser_Button_clicked()
{
    //reg = new Register(this);
    Register * registerNewStudent = new Register(this);
    //Modal approach
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
     connect(this,SIGNAL(sendQuestion(QSqlQuery)), registerNewStudent , SLOT(recieveQuestion(QSqlQuery)));
     emit sendQuestion(queries);
    }

    registerNewStudent->show();

}

//DASHBOARD PAGES
void sgsApp::on_dashboard_pushButton_clicked()
{
    //Navigate tho Dashboard Page
    ui->stackedWidgetPages->setCurrentIndex(0);
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


void sgsApp::on_AddProgramSequence_Button_clicked()
{

}


void sgsApp::on_viewStudentProgramSequence_Button_clicked()
{
    programSequenceList();
    ui->stackedWidgetPages->setCurrentIndex(2);
}

//Generating the Program Sequence QTableWidget
void sgsApp::programSequenceList()
{
    ui->programSequenceTableWidget->setColumnCount(7);
    ui->programSequenceTableWidget->setStyleSheet("background:#f1f1f1;color:#333;");

    QStringList header;
    header << "Code"<< "Course Name" <<"Credits" << "Grade" <<"Pre-requisites" << "Semester" << "Year";

    ui->programSequenceTableWidget->setHorizontalHeaderLabels(header);
    ui->programSequenceTableWidget->horizontalHeader()->setStyleSheet("background:#70808c;");

    int rowCount = 0;

    for(int i = 0; i< 24; i++){

         ui->programSequenceTableWidget->insertRow(rowCount);
         ui->programSequenceTableWidget->setColumnWidth(0,80);
         ui->programSequenceTableWidget->setColumnWidth(1,220);
         ui->programSequenceTableWidget->setColumnWidth(2,48);
         ui->programSequenceTableWidget->setColumnWidth(3,40);
         ui->programSequenceTableWidget->setColumnWidth(4,150);
         ui->programSequenceTableWidget->setColumnWidth(5,60);
         ui->programSequenceTableWidget->setColumnWidth(6,40);

        QTableWidgetItem *courseCode = new QTableWidgetItem;
        QTableWidgetItem *courseName = new QTableWidgetItem;
        QTableWidgetItem *credits = new QTableWidgetItem;
        QTableWidgetItem *grade = new QTableWidgetItem;
        QTableWidgetItem *prerequisites = new QTableWidgetItem;
        QTableWidgetItem *semester = new QTableWidgetItem;
        QTableWidgetItem *year = new QTableWidgetItem;

        courseCode->setText("CMPS3151");
        courseName->setText("Telecommunications Systems");
        credits->setText("3");
        grade->setText("A");
        prerequisites->setText("CMPS1191");
        semester->setText("1");
        year->setText("1");

        ui->programSequenceTableWidget->setItem(rowCount,0,courseCode);
        ui->programSequenceTableWidget->setItem(rowCount,1,courseName);
        ui->programSequenceTableWidget->setItem(rowCount,2,credits);
        ui->programSequenceTableWidget->setItem(rowCount,3,grade);
        ui->programSequenceTableWidget->setItem(rowCount,4,prerequisites);
        ui->programSequenceTableWidget->setItem(rowCount,5,semester);
        ui->programSequenceTableWidget->setItem(rowCount,6,year);


        rowCount++;
    }

}


