#include "activate_deactivateuser.h"
#include "ui_activate_deactivateuser.h"

Activate_DeactivateUser::Activate_DeactivateUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Activate_DeactivateUser)
{
    ui->setupUi(this);
}

void Activate_DeactivateUser::ActivateDeactivateUserAccount(databaseconnection * database) //friend function with sgsapp class
{
    databaseExtern = database;
    qDebug()<<"PASSED OBJECT";
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
    int role;
    QString lectureName = ui->lectureSearchLineEdit->text();
    if (ui->studentRadioButton->isChecked())
        role = 1;
    else if (ui->lecturerRadioButton->isChecked())
        role =2;

    QStringList result = databaseExtern->activate_DeactivateLecture(lectureName,role);

    if (result.size() > 0)
    {
        int counter = 0;
        ui->Name_label->setText(result[counter]);
        counter++;

        ui->userName_Label->setText(result[counter]);
        counter++;

        ui->createAt_Label->setText(result[counter]);

        counter++;

        ui->role_2->setText(result[counter]);
        counter++;

        if (result[counter] == "1")
            ui->Activate_Label->setText("Active");
        else
            ui->Activate_Label->setText("Disactive");

    }
    else
    {
        QMessageBox::warning(NULL,"ERROR","Could Not Deactivate the user, Check the form Again");
    }

}

void Activate_DeactivateUser::on_activateResetButton_clicked()
{


    int role;
    QString lectureName = ui->lectureSearchLineEdit->text();
    if (ui->studentRadioButton->isChecked())
        role = 1;
    else if (ui->lecturerRadioButton->isChecked())
        role =2;

    if (!(lectureName.isEmpty()))
    {
        bool active = databaseExtern->activateUser(lectureName,role);

        if (!active)
        {
            QMessageBox::warning(NULL,"ERROR","Could Not Deactivate the user, Check the information entered. ");
        }
        else
        {
            QMessageBox::information(NULL,"Successfully Actived User","User has successfully being Actived.");
            on_lectureSearchButton_clicked();
        }
    }
    else
    {
        QMessageBox::warning(NULL,"ERROR","Please fill in the Missing information");
    }


}

void Activate_DeactivateUser::on_disactivateResetButton_clicked()
{
    int role;
    QString lectureName = ui->lectureSearchLineEdit->text();
    if (ui->studentRadioButton->isChecked())
        role = 1;
    else if (ui->lecturerRadioButton->isChecked())
        role =2;

    if (!(lectureName.isEmpty()))
    {
        bool deactive = databaseExtern->deactivateUser(lectureName,role);
        if (!deactive)
        {
            QMessageBox::warning(NULL,"ERROR","Could Not Deactivate the user, Check the form Again");


        }
        else
        {
            QMessageBox::information(NULL,"Successfully Deactived User","User has successfully being Deactived.");
            on_lectureSearchButton_clicked();
        }
    }

    else
    {
        QMessageBox::warning(NULL,"ERROR","Please fill in the Missing information");
    }

}
