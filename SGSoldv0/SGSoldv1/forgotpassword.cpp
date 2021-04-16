#include "forgotpassword.h"
#include "ui_forgotpassword.h"
#include <QMessageBox>

forgotPassword::forgotPassword(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::forgotPassword)
{
    ui->setupUi(this);
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
<<<<<<< HEAD

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
=======
>>>>>>> 9f4a76a785e1dbcf101c8a1edcdd7e13a53938c6
