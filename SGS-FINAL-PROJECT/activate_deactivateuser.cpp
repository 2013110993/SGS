#include "activate_deactivateuser.h"
#include "ui_activate_deactivateuser.h"

Activate_DeactivateUser::Activate_DeactivateUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Activate_DeactivateUser)
{
    ui->setupUi(this);
}

Activate_DeactivateUser::~Activate_DeactivateUser()
{
    delete ui;
}

void Activate_DeactivateUser::on_accountLostResetButton_clicked()
{

}

void Activate_DeactivateUser::on_lectureSearchButton_clicked()
{
    QString lectureName = ui->lectureSearchLineEdit->text();


}
