#include "register.h"
#include "ui_register.h"
#include<QMessageBox>
#include <QDebug>

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
