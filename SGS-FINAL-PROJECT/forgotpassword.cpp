#include "forgotpassword.h"
#include "ui_forgotpassword.h"
#include <QMessageBox>
#include <QtSql>
#include <databaseconnection.h>

//databaseconnection connect;

//forgot password constructos
forgotPassword::forgotPassword(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::forgotPassword)
{
    ui->setupUi(this);          //sets up the ui for this class

    //hides specific features inside forgotPassword ui
    ui->lecturerForgotFormLineEdit->hide();
    ui->securityQuestiongroupBox->hide();
    ui->resetPasswordGroupBox->hide();
}

forgotPassword::~forgotPassword()
{
    delete ui;      //release ui from heap
}

//slot for the forgot button
void forgotPassword::on_forgotPasswordResetButton_clicked()
{
    QString confirmPassword = ui->confirmPassword_forgotFormLineEdit->text(); //first question answer line edit
    QString newPassword = ui->newPassword_forgotFormLineEdit->text(); //first question answer line edit
    qDebug()<<(ui->confirmPassword_forgotFormLineEdit == ui->newPassword_forgotFormLineEdit &&  (confirmPassword.isEmpty()) && (newPassword.isEmpty()));

    //cehcks if password matches with the confirm password line edit and also checks if bth line edit are not empty
    if(ui->confirmPassword_forgotFormLineEdit->text() == ui->newPassword_forgotFormLineEdit->text() &&  !(confirmPassword.isEmpty()) && !(newPassword.isEmpty())) //&&
    {
        qDebug()<<"errror";
        connect.resetPassword(newPassword);     //calls function resetPassword that will reset the user's password
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
    this->close();          //forogot password ui closes
}

void forgotPassword::on_studentAccountTypeRadioButton_clicked()
{
    //if user clicks radio button student, studentIdForgotFormLineEdit will pop out and lecturerForgotFormLineEdit will be hidden
    ui->studentIdForgotFormLineEdit->show();
    ui->lecturerForgotFormLineEdit->hide();
}

void forgotPassword::on_lecturerAccountTypeRadioButton_clicked()
{
    //if user clicks radio button lecture, studentIdForgotFormLineEdit will be hidden and lecturerForgotFormLineEdit will be shown
    ui->studentIdForgotFormLineEdit->hide();
    ui->lecturerForgotFormLineEdit->show();
}

void forgotPassword::on_accountLostResetButton_clicked()
{

    //exception handling
    try
    {
        //displays window for full account reset
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
                while (accountInfo.next()) //runs query
                {
                    correctanswer[var] = accountInfo.value(1).toString();       //correcntAnswer array is assigned to value 1 of accountInfo
                    qDebug()<< correctanswer[var];
                    ui->securityQuestionsForgotFormcomboBox->addItem(accountInfo.value(2).toString());
                    var ++;
                }

                ui->stackedWidgetResetPassword->setCurrentIndex(1);
                //ui->securityQuestiongroupBox->show();
                ui->accountLostResetButton->hide();
            }
            else
            {
                throw "No Such account found on the system, please enter a correct ID"; //throws exception if id was not found
            }
        }
        else  //enters if user is lecturer
        {
            QSqlQuery accountInfo = connect.getUserInfo(ui->lecturerForgotFormLineEdit->text(), 1);

            if (accountInfo.size() > 0)     //checks if accountInfo is not empty
            {
                QMessageBox msgBox;
                msgBox.setText("Account Found, Select question and input your answer");
                msgBox.exec();
                int var =0;
                while (accountInfo.next())      //runs accounInfo query
                {
                    correctanswer[var]= accountInfo.value(1).toString();
                    qDebug()<< correctanswer[var];
                    ui->securityQuestionsForgotFormcomboBox->addItem(accountInfo.value(2).toString());  //adds security questions to securityQuestionsForgotFormcomboBox combo box
                    var ++;
                }
                ui->securityQuestiongroupBox->show();
            }
            else
            {
                throw "No Such account found on the system, please enter a correct ID";
            }
        }
    }
    catch (const char *message)     //catches the exception as a char message
    {
        QMessageBox messagebox;
        messagebox.warning(NULL,"Error",message);
    }
    /*
    //displays window for full account reset
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

            ui->stackedWidgetResetPassword->setCurrentIndex(1);
            //ui->securityQuestiongroupBox->show();
            ui->accountLostResetButton->hide();
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
            ui->securityQuestiongroupBox->show();
        }
        else {
            QMessageBox::warning(this,"Error","No Such account found on the system, please enter a correct ID");
        }

    }*/

}

void forgotPassword::on_checkAnswerResetButton_clicked()
{

    try     //exception hndling
    {
        //Creates and displays security questions stored with the user to allow for updating of password
        int selectQuestion = ui->securityQuestionsForgotFormcomboBox->currentIndex();
        QString answer = ui->QuestionAnswer_forgotFormLineEdit->text();
        qDebug()<<answer;
        qDebug()<<correctanswer[selectQuestion]<<"hellohello";
        qDebug()<<(correctanswer[selectQuestion] == answer);

        if (selectQuestion == 0)        //checks if user did not selected a question
        {
            qDebug()<<"Entro";
            throw  "Question is not slected";
        }
        else if(answer == NULL)  //throws exception is Answer line edit is empty
        {
            throw  "Answer is Empty";
        }
        else    //if everyting is correct it will succesfully proceed
        {
            --selectQuestion;
            if(correctanswer[selectQuestion] == answer)     //checks if questions' answer matches
            {
                QMessageBox msgBox;
                msgBox.setText("Answer accepted");
                msgBox.exec();

                //show Security Questions after Search
                ui->stackedWidgetResetPassword->setCurrentIndex(2);     //stached widget moves to last procedure
                ui->resetPasswordGroupBox->show();
            }

            else
            {
                throw  "Answer is  Incorrect";          //throws exception if answer missmatches

            }
        }

    }
    catch (const char *message)         //catch handler recieves execption as a char pointer
    {
        QMessageBox messagebox;
        messagebox.warning(NULL,"Error",message);
    }

}

void forgotPassword::on_forgotPassword_accepted()
{
    //opens the window to apply to reset password
}
