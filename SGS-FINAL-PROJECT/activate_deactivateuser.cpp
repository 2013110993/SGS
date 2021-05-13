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
    databaseExtern = database;  //pointer databaseExtern is assigned to a databaseconnection pointer
    qDebug()<<"PASSED OBJECT";
}

Activate_DeactivateUser::~Activate_DeactivateUser() //destructor deletes ui
{
    delete ui;
}

void Activate_DeactivateUser::on_accountLostResetButton_clicked()
{

}

void Activate_DeactivateUser::on_lectureSearchButton_clicked() //search button slot
{
    int role;
    QString lectureName = ui->lectureSearchLineEdit->text();  //Qstring lectureName recieves the value of the line edit inside the activate_deactivateuser form
    if (ui->studentRadioButton->isChecked()) //checks if radio button is student
        role = 1;   //role receieves te value of 1
    else if (ui->lecturerRadioButton->isChecked()) //checks if radio button is lecturer
        role =2;    //role will be assigned with the value 2

    /*
     * Qstring resut will receive the value of whatever the acitvate_deactivate function from the databaseconnection class returns.
     * databaseExtern is a pointer do the databaseconnecntion class
     * activate_DeactivateLecture is a function from databaseconnection class and it will receive the value of the user's line edit text and it will also recieve
     the role either 1 or 2
     * */
    QStringList result = databaseExtern->activate_DeactivateLecture(lectureName,role);

    if (result.size() > 0) //enters if size of result is greater than 0
    {
        //counter will  be used to call each value inside Qstringlist result (array)
        int counter = 0;
        ui->Name_label->setText(result[counter]); //Name_label recieves the value of the user's full name
        counter++;

        ui->userName_Label->setText(result[counter]); //userName_Label recieves the user's username
        counter++;

        ui->createAt_Label->setText(result[counter]); //createdAt_label receives the date value
        counter++;

        if (result[counter] == "1")//role_2 receives the user's role
        ui->role_2->setText("Student");
        else
            ui->role_2->setText("Lecturer");
        counter++;

        // is Active user is 1, it means the user is active
        if (result[counter] == "1")
            ui->Activate_Label->setText("Active");     //displays Active as the Active_Label
        else
            ui->Activate_Label->setText("Disactive");  //displays Disactive as the Active_Label

    }
    else
    {
        QMessageBox::warning(NULL,"ERROR","Could Not Deactivate the user, Check the form Again");
    }

}

void Activate_DeactivateUser::on_activateResetButton_clicked()
{


    int role;
    QString lectureName = ui->lectureSearchLineEdit->text();  //Qstring lectureName receives the value of the user's input of the line edit

    //checks if user clicks the student radio button
    if (ui->studentRadioButton->isChecked())
        role = 1; //role is assigned to value 1(represents student)
    else if (ui->lecturerRadioButton->isChecked()) //checks if user clicks the lecture radio button
        role =2;  //role is assigned to the value 2 (represents lecturer)

    if (!(lectureName.isEmpty()))  //checks is lectureName is not empty
    {

        /*
         *bool active is assigned to the value that the bool activeuser(lecturename, role)
         return(either true or fale since it's a function of type bool)
         * bool activeuser(lecturename, role) is a function from the databaseconnection class
         */
        bool active = databaseExtern->activateUser(lectureName,role);

        if (!active)  //if it's not active, warning message appears
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
        QMessageBox::warning(NULL,"ERROR","Please fill in the Missing information"); //warning message appears if lectureSearchLineEdit is empty
    }


}

void Activate_DeactivateUser::on_disactivateResetButton_clicked()
{
    int role;
    QString lectureName = ui->lectureSearchLineEdit->text();

    //checks if user clicks the student radio button
    if (ui->studentRadioButton->isChecked())
        role = 1;   //role is assigned to value 1(represents student)
    else if (ui->lecturerRadioButton->isChecked())
        role =2;    //role is assigned to the value 2 (represents lecturer)

    if (!(lectureName.isEmpty())) //checks is lectureName is not empty
    {

        /*
         *bool active is assigned to the value that the bool deactivateUser(lectureName,role)
         return(either true or fale since it's a function of type bool)
         * bool deactivateUser(lectureName,role) is a function from the databaseconnection class
         */
        bool deactive = databaseExtern->deactivateUser(lectureName,role);

        //if it's not deactivate, warning message apears
        if (!deactive)
        {
            QMessageBox::warning(NULL,"ERROR","Could Not Deactivate the user, Check the form Again");

        }
        else  //informs user the acount has been deactived and calls slot on_lectureSearchButton_clicked()
        {
            QMessageBox::information(NULL,"Successfully Deactived User","User has successfully being Deactived.");
            on_lectureSearchButton_clicked();
        }
    }

    else
    {
        QMessageBox::warning(NULL,"ERROR","Please fill in the Missing information");  //warning message appears if lectureName line edit is empty
    }

}
