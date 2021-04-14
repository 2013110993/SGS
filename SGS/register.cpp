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
    ui->studentIdRegFormLineEdit->hide();
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
    ui->stackedWidgetRegister->setCurrentIndex(1);
    QString f = ui->firstName_RegFormLineEdit->text();
    QString l = ui->lastName_RegFormLineEdit->text();
    QString m =  ui->userName_RegFormLineEdit->text();
    QString u =  ui->userName_RegFormLineEdit->text();
    QString e =  ui->email_RegFormLineEdit->text();
    QString p =  ui->password_RegFormLineEdit->text();
    QString id =  ui->studentIdRegFormLineEdit->text();
    int ID = id.toInt();
    const int studentRole=1;
    databaseconnection * connection = new databaseconnection;
    //QString m =  ui->middleName_RegFormLineEdit->text();
    user = new student(f,m,l,u,f,e,p,ID," ", 'm',QString::number(studentRole));
    connection->insertNewUser(*user);

   // user->setGender(ui->gender_RegFormLineEdit->text());

   // test->insertNewUser()
   QMessageBox msgBox;
   msgBox.setText("Your Account has been created successfully!");
   msgBox.exec();
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
}

void Register::on_lecturerRadioButton_clicked()
{
    ui->studentIdRegFormLineEdit->hide();
}

void Register::on_middleNamecheckBox_stateChanged(int arg1)
{
    if(arg1)
    {
        ui->middleName_RegFormLineEdit->show();
    }
    else{
        ui->middleName_RegFormLineEdit->hide();
    }
}
