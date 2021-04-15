#include "forgotpassword.h"
#include "ui_forgotpassword.h"
#include <QMessageBox>

forgotPassword::forgotPassword(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::forgotPassword)
{
    ui->setupUi(this);
    //ui->studentAccountTypeRadioButton->
    ui->lecturerForgotFormLineEdit->hide();
}

forgotPassword::~forgotPassword()
{
    delete ui;
}

void forgotPassword::on_forgotPasswordResetButton_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Reset successfully!");
    msgBox.exec();
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

void forgotPassword::on_searchAccountButton_clicked()
{

    QString lostAccount = ui->studentIdForgotFormLineEdit->text();



}
