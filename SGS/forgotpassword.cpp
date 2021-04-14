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
