#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;


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
    QString f = ui->firstName_RegFormLineEdit->text();
    QString l = ui->lastName_RegFormLineEdit->text();
    QString m =  ui->userName_RegFormLineEdit->text();
    QString u =  ui->userName_RegFormLineEdit->text();
    QString e =  ui->email_RegFormLineEdit->text();
    QString p =  ui->password_RegFormLineEdit->text();
    QString id =  ui->studentIdRegFormLineEdit->text();
    int ID = id.toInt();
    const int studentRole=1;


    //QString m =  ui->middleName_RegFormLineEdit->text();
    databaseconnection * connection = new databaseconnection;
    qDebug()<<"is not empty";
    user = new student(f,m,l,u,f,e,p,ID," ", 'm',QString::number(studentRole));
    connection->insertNewUser(*user);


    //EMAIL VALIDATION
    QLineEdit *emailLineEdit = new QLineEdit;
    QLineEdit *confirmEmailLineEdit = new QLineEdit;
    emailLineEdit = ui->email_RegFormLineEdit;
    confirmEmailLineEdit = ui->confirmEmail_RegFormLineEdit_2;  //
    QRegularExpression rx("\\b[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,4}\\b",
                          QRegularExpression::CaseInsensitiveOption);
    emailLineEdit->setValidator(new QRegularExpressionValidator(rx, this));

    if(!emailLineEdit->hasAcceptableInput())            //displays warning message box if email format is incorrect
    {
        QMessageBox::warning(this, tr("Email verification"),
                             tr("Email Format is incorrect."), QMessageBox::Ok);
        return;
    }
    else if(emailLineEdit->text() != confirmEmailLineEdit->text()) //displays warning message box if the email line edit is not equal to confirm email line edit
    {
        QMessageBox::warning(this, tr("Email verification"),
                             tr("Email Format does not Match."), QMessageBox::Ok);
        return;

    }



    //question validations
    int currIndex = ui->comboBox->currentIndex();       //first question combo box
    QString questionText = ui->firtstQuestionAnswer_RegFormLineEdit->text(); //first question answer line edit

    int currIndex2 = ui->comboBox_3->currentIndex();       //second question combo box
    QString questionText2 = ui->secondQuestionAnswer_RegFormLineEdit->text(); //second question answer line edit

    int currIndex3 = ui->comboBox_2->currentIndex();       //third question combo box
    QString questionText3 = ui->thirdQuestionAnswer_RegFormLineEdit->text(); //third question answer line edit

    if( questionText.isEmpty() ||  currIndex == 0 || questionText2.isEmpty() || currIndex2 == 0 || questionText3.isEmpty() || currIndex3 == 0)
    {
        QMessageBox msgBox1;
        msgBox1.setText("Your Account is not completed, Please fill the missing data!");
        msgBox1.exec();
        qDebug()<<"is empty";
    }
    else if(currIndex == currIndex2 || currIndex == currIndex3 || currIndex2 == currIndex3) //checks if questions are repeated
    {
        QMessageBox msgBox1;
        msgBox1.setText("Questions are repeated!");
        msgBox1.exec();
    }
    else
    {
        ui->stackedWidgetRegister->setCurrentIndex(1); //executes if there's no error
        QMessageBox msgBox;
        msgBox.setText("Your Account has been created successfully!");
        msgBox.exec();

    }


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

void Register::on_signUpButton_clicked()
{
    int currIndex = ui->programComboBox->currentIndex();       // program combo box
    int currIndex2 = ui->facultyComboBox->currentIndex();  //faculty combo box
    if(currIndex == 0 || currIndex2 == 0)
    {
        QMessageBox msgBox1;
        msgBox1.setText("Please fill the missing data!");
        msgBox1.exec();
    }
}
