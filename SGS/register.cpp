#include "register.h"
#include "ui_register.h"
#include<QMessageBox>
#include <QDebug>
#include "databaseconnection.h"



Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
    ui->stackedWidgetRegister->setCurrentIndex(0);
    userRole=1;
   // ui->studentIdRegFormLineEdit->hide();
}

Register::~Register()
{
    delete ui;
}

void Register::on_cancelSignUpButton_clicked()
{
    this->close();
}


//Register Next page
void Register::on_signUpNextButton_clicked()
{
    //ui->stackedWidgetRegister->setCurrentIndex( ui->stackedWidgetRegister->currentIndex() + 1 );
    ui->stackedWidgetRegister->setCurrentIndex(1);
}

//Register Back page


void Register::on_backSignUpButton_clicked()
{
    ui->stackedWidgetRegister->setCurrentIndex( ui->stackedWidgetRegister->currentIndex() -1 );
}

//Accout Types Radio Buttons
void Register::on_studentRadioButton_clicked()
{
    ui->studentIdRegFormLineEdit->show();
    userRole=1;
}

void Register::on_lecturerRadioButton_clicked()
{
    ui->studentIdRegFormLineEdit->hide();
    userRole=2;
}

void Register::on_middleNamecheckBox_stateChanged(int arg1)
{
    if(arg1)
    {
        qDebug()<<arg1;
        ui->middleName_RegFormLineEdit->show();
    }
    else{
        ui->middleName_RegFormLineEdit->hide();
    }
}

void Register::on_signUpButton_clicked()
{
    QString f = ui->firstName_RegFormLineEdit->text();
    QString l = ui->lastName_RegFormLineEdit->text();
    QString m =  ui->userName_RegFormLineEdit->text();
    QString u =  ui->userName_RegFormLineEdit->text();
    QString e =  ui->email_RegFormLineEdit->text();
    QString p =  ui->password_RegFormLineEdit->text();
    QString id =  ui->studentIdRegFormLineEdit->text();
    int ID = id.toInt();

    QString ques1 =  ui->firtstQuestionAnswer_RegFormLineEdit->text();
    qDebug()<<ques1;

    QString ques2 =  ui->secondQuestionAnswer_RegFormLineEdit->text();
    qDebug()<<ques2;

    QString ques3 =  ui->thirdQuestionAnswer_RegFormLineEdit->text();
    qDebug()<<ques3;

    int quesId1 =  ui->question_1_comboBox->currentIndex();
    int quesId2 =  ui->question_2_comboBox->currentIndex();
    int quesId3 =  ui->question_3_comboBox->currentIndex();

    qDebug()<<quesId1;
    qDebug()<<quesId2;
    qDebug()<<quesId3;

    databaseconnection * connection = new databaseconnection;
    //QString m =  ui->middleName_RegFormLineEdit->text();
    user = new student(f,m,l,u,f,e,p,ID," ", 'm',QString::number(userRole),quesId1,quesId2,quesId3,ques1,ques2,ques3);
    connection->insertNewUser(*user);
    QMessageBox msgBox;
    msgBox.setText("Your Account has been created successfully!");
    msgBox.exec();
    this->close();
}

void Register::recieveQuestion(QSqlQuery question)
{
        question.seek(-1);
       while (question.next())
                    {
                        QString questions = question.value(1).toString();
                        qDebug()<<questions;
                        ui->question_1_comboBox->addItem(questions);
                          ui->question_2_comboBox->addItem(questions);
                            ui->question_3_comboBox->addItem(questions);

                    }
}
