#include "forgotpassword.h"
#include "ui_forgotpassword.h"
#include <QMessageBox>
#include <QtSql>
#include <databaseconnection.h>

//databaseconnection connect;

forgotPassword::forgotPassword(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::forgotPassword)
{
    ui->setupUi(this);

    //ui->studentAccountTypeRadioButton->
    ui->lecturerForgotFormLineEdit->hide();

    //Hides securityQuestions & resetPassword Sections
    ui->securityQuestiongroupBox->hide();
    ui->resetPasswordGroupBox->hide();
}

forgotPassword::~forgotPassword()
{
    delete ui;
}

void forgotPassword::on_forgotPasswordResetButton_clicked()
{
     QString confirmPassword = ui->confirmPassword_forgotFormLineEdit->text(); //first question answer line edit
     QString newPassword = ui->newPassword_forgotFormLineEdit->text(); //first question answer line edit
     qDebug()<<(ui->confirmPassword_forgotFormLineEdit == ui->newPassword_forgotFormLineEdit &&  (confirmPassword.isEmpty()) && (newPassword.isEmpty()));
    if(ui->confirmPassword_forgotFormLineEdit->text() == ui->newPassword_forgotFormLineEdit->text() &&  !(confirmPassword.isEmpty()) && !(newPassword.isEmpty())) //&&
    {
        connect.resetPassword(newPassword);
        QMessageBox msgBox;
        msgBox.setText("Reset successfully!");
        msgBox.exec();
        this->close();
    }
    else
    {
        QMessageBox::warning(this,"ERROR404","new password is empty or Mismatch ");

    }

}

void forgotPassword::on_forgotPasswordCancelButton_clicked()
{
    this->close();
}

void forgotPassword::on_studentAccountTypeRadioButton_clicked()
{
    ui->studentIdForgotFormLineEdit->show();
    ui->lecturerForgotFormLineEdit->hide();
}

void forgotPassword::on_lecturerAccountTypeRadioButton_clicked()
{
    ui->studentIdForgotFormLineEdit->hide();
    ui->lecturerForgotFormLineEdit->show();
}

void forgotPassword::on_accountLostResetButton_clicked()
{

    if(ui->studentAccountTypeRadioButton->isChecked())
    {

        QSqlQuery accountInfo = connect.getUserInfo(ui->studentIdForgotFormLineEdit->text(), 0);
        if (accountInfo.size() > 0)
        {
            QMessageBox msgBox;
            msgBox.setText("Account Found, Select question and input your answer");
            msgBox.exec();

            //show Security Questions after Search
            ui->securityQuestiongroupBox->show();

             int var =0;
            while (accountInfo.next())
            {
                correctanswer[var]= accountInfo.value(1).toString();
                qDebug()<< correctanswer[var];
                ui->securityQuestionsForgotFormcomboBox->addItem(accountInfo.value(2).toString());
                var ++;
            }
        }
        else
        {
            QMessageBox::warning(this,"Error","No Such account found on the system, please enter a correct ID");
        }

    }
    else
    {
        QSqlQuery accountInfo = connect.getUserInfo(ui->lecturerForgotFormLineEdit->text(), 1);
        if (accountInfo.size() > 0)
        {
            QMessageBox msgBox;
            msgBox.setText("Account Found, Select question and input your answer");
            msgBox.exec();
             int var =0;
            while (accountInfo.next())
            {
                correctanswer[var]= accountInfo.value(1).toString();
                qDebug()<< correctanswer[var];
                ui->securityQuestionsForgotFormcomboBox->addItem(accountInfo.value(2).toString());
                var ++;
            }
        }
        else {
            QMessageBox::warning(this,"Error","No Such account found on the system, please enter a correct ID");
        }

    }

}

void forgotPassword::on_checkAnswerResetButton_clicked()
{
    int selectQuestion = ui->securityQuestionsForgotFormcomboBox->currentIndex();
    QString answer = ui->QuestionAnswer_forgotFormLineEdit->text();
    qDebug()<<answer;
    selectQuestion--;
    qDebug()<<correctanswer[selectQuestion];
   // QString c = correctanswer[selectQuestion];
   //int x = QString::compare(correctanswer[selectQuestion], answer, Qt::CaseInsensitive);
    qDebug()<<(correctanswer[selectQuestion] == answer);
    if(correctanswer[selectQuestion] == answer)
    {
        QMessageBox msgBox;
        msgBox.setText("Answer accepted");
        msgBox.exec();

        //show Security Questions after Search
        ui->resetPasswordGroupBox->show();
    }
    else
    {
        qDebug()<<"error";
    }


}
