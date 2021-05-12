#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;


#include "register.h"
#include "ui_register.h"
#include "lecture.h"
#include<QMessageBox>
#include <QDebug>
#include "databaseconnection.h"


extern databaseconnection * connection;  //extern pointer connection can be used globally.

//constructor
Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
    ui->stackedWidgetRegister->setCurrentIndex(0);
    userRole=1;
    ui->createLectureButton->hide();
}

//destructor
Register::~Register()
{
    delete ui;  //deletes ui
}

void Register::on_cancelSignUpButton_clicked()
{
    this->close();
}


//Register Next page
void Register::on_signUpNextButton_clicked()
{
    //EMAIL VALIDATION
    QLineEdit *fNameLineEdit = new QLineEdit;   //new QlineEdit for the firstName
    QLineEdit *emailLineEdit = new QLineEdit;   //new QlineEdir for the last Name
    QLineEdit *confirmEmailLineEdit = new QLineEdit;    //new QLineEdit for the email confirmation
    fNameLineEdit = ui->firstName_RegFormLineEdit;      //fNameLineEdit is assigned to the value the user's first name
    emailLineEdit = ui->email_RegFormLineEdit;      //emailLineEdit is assigned to the value the user's email
    confirmEmailLineEdit = ui->confirmEmail_RegFormLineEdit_2;      //confirmEmailLineEdit is assigned to the value the user's email confirmation
    QRegularExpression rx("\\b[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,4}\\b",
                          QRegularExpression::CaseInsensitiveOption);
    emailLineEdit->setValidator(new QRegularExpressionValidator(rx, this));     //check if it's an acceptable email.

    //question validations
    int currIndex = ui->question_1_comboBox->currentIndex();       //currIndex is assigned to the first question combo box
    QString questionText = ui->firtstQuestionAnswer_RegFormLineEdit->text(); //first question answer line edit

    int currIndex2 = ui->question_2_comboBox->currentIndex();       //currIndex2 is assigned to the second question combo box
    QString questionText2 = ui->secondQuestionAnswer_RegFormLineEdit->text(); //second question answer line edit

    int currIndex3 = ui->question_3_comboBox->currentIndex();       //third question combo box
    QString questionText3 = ui->thirdQuestionAnswer_RegFormLineEdit->text(); //third question answer line edit

    //exception handling
    try
    {
        //checks for any empty data in inside the form
        if (fNameLineEdit->text() == NULL || ui->lastName_RegFormLineEdit->text() == NULL || ui->userName_RegFormLineEdit->text()==NULL ||
                ui->password_RegFormLineEdit->text() == NULL || ui->passwordConfirm_RegFormLineEdit->text() == NULL ||
                ui->confirmEmail_RegFormLineEdit_2->text() == NULL || ui->email_RegFormLineEdit->text() == NULL ||
                ui->studentIdRegFormLineEdit->text() == NULL || ui->question_1_comboBox->currentIndex() == 0 ||
                ui->firtstQuestionAnswer_RegFormLineEdit->text() == NULL || ui->question_2_comboBox->currentIndex() == 0 ||
                ui->secondQuestionAnswer_RegFormLineEdit->text() == NULL || ui->question_3_comboBox->currentIndex() == 0 ||
                ui->thirdQuestionAnswer_RegFormLineEdit->text() == NULL || ui->studentIdRegFormLineEdit->text() == NULL
                )
        {
            throw "Fill in the missing Data";  //throws excpetion if there's any missing date
        }
        else if (ui->password_RegFormLineEdit->text() != ui->passwordConfirm_RegFormLineEdit->text())  //checks if password matches the password confirmation
        {
            throw "Password MissMatched!";  //throws this exception
        }
        else if (!emailLineEdit->hasAcceptableInput())  //checks if email format is incorrect
        {
            throw "Email Format is Incorrect";  //throws exception if email is incorrect
        }
        else if (emailLineEdit->text() != confirmEmailLineEdit->text()) //checks if the email line edit is not equal to confirm email line edit
        {
            throw "Email Format does not match!"; //throws exception if email does not match
        }
        else if(currIndex == currIndex2 || currIndex == currIndex3 || currIndex2 == currIndex3) //checks if questions are repeated
        {
            throw "Questions are repeated!";  //throws exception if questions are repeated
        }
        else  //enters if no issue was encountered
        {

            //faculties is assigned to the value that the databaseconnection class's function getFaculty() returns
            QSqlQuery faculties = connection->getFaculty();
            while(faculties.next())
            {
                QString faculty = faculties.value(0).toString(); //faculty recieves the value(0) from the QSqlQuery faculties
                ui->facultyComboBox->addItem(faculty); //adds all the faculties to the faculty combo box
            }
            ui->stackedWidgetRegister->setCurrentIndex(1); //executes if there's no error(moves on to the next procedure)
        }
    }
    catch (const char *message)  //catch the exception as a char
    {
        QMessageBox messagebox;
        messagebox.warning(NULL,"Error",message); //displays the exception message in a warning message box
    }

}

//Register Back page

void Register::on_backSignUpButton_clicked()
{
    ui->stackedWidgetRegister->setCurrentIndex( ui->stackedWidgetRegister->currentIndex() -1 ); //go to previous widget
}

//slot for the Student Radio Buttons
void Register::on_studentRadioButton_clicked()
{
    ui->studentIdRegFormLineEdit->setPlaceholderText("Enter Student ID: "); //sets a place holder for the student user
    userRole=1;   //userRole will be assgned to 1 (represents students)
    ui->signUpNextButton->show();  //shows the sign up button
    ui->createLectureButton->hide();  //hides the lecture button
}

//slot for the Lecturer Radio Buttons
void Register::on_lecturerRadioButton_clicked()
{
    ui->studentIdRegFormLineEdit->setPlaceholderText("Enter Lecture Username: ");  //sets a place holder for the lecturer line edit
    userRole=2;
    ui->signUpNextButton->hide();  //hides sign up button for student
    ui->createLectureButton->show();  //shows lecturer button
}

//slot for the _middleNamecheckBox Radio Buttons
void Register::on_middleNamecheckBox_stateChanged(int arg1)
{
    if(arg1)
    {
        ui->middleName_RegFormLineEdit->show(); //show middle name line edit
    }
    else{
        ui->middleName_RegFormLineEdit->hide(); //hides the middle name line edit
    }
}

// slot for signUpButton()
void Register::on_signUpButton_clicked()
{

    int currIndex = ui->programComboBox->currentIndex();   // program combo box
    int currIndex2 = ui->facultyComboBox->currentIndex();  //faculty combo box
    {
        //built a list of Qstrings that will recieve the user's info
        QString f = ui->firstName_RegFormLineEdit->text();  // f is receeives user's first name
        QString l = ui->lastName_RegFormLineEdit->text();   // l recieves user's last name
        QString u =  ui->userName_RegFormLineEdit->text();  // m receives user's username
        QString e =  ui->email_RegFormLineEdit->text();     // e recieves user's email address
        QString p =  ui->password_RegFormLineEdit->text();  // p receives user's password
        QString id =  ui->studentIdRegFormLineEdit->text(); // id receives user's student id
        int ID ;
        if (userRole == 2)  //checks if userRole is 2(lecturer)
            ID = 0;  //id will be assigned to 0
        else
            ID = id.toInt(); //converts id which is a line edit, to a integer and pass its value to integer ID

        QString ques1 =  ui->firtstQuestionAnswer_RegFormLineEdit->text();  // Qstring ques1 receives user's first question answer line edit
        QString ques2 =  ui->secondQuestionAnswer_RegFormLineEdit->text();  // ques2 receives user's second question answer line edit
        QString ques3 =  ui->thirdQuestionAnswer_RegFormLineEdit->text();   // ques3 receives user's third question answer line edit
        QString middleName ;

        int quesId1 =  ui->question_1_comboBox->currentIndex(); // quesId1 is assigned to user's question choice inside inside question_1_combo_box
        int quesId2 =  ui->question_2_comboBox->currentIndex(); // quesId2 is assigned to user's question choice inside inside question_2_combo_box
        int quesId3 =  ui->question_3_comboBox->currentIndex(); // quesId3 is assigned to user's question choice inside inside question_3_combo_box
        if (ui->middleNamecheckBox->isChecked())
          middleName   = ui->middleName_RegFormLineEdit->text();
        else
            middleName = "";

        if(userRole == 2)
            user = new lecture(f,middleName,l,u,f,e,p,ID," ", 'm',QString::number(userRole),quesId1,quesId2,quesId3,ques1,ques2,ques3);

        else
            user = new student(f,middleName,l,u,f,e,p,ID," ", 'm',QString::number(userRole),quesId1,quesId2,quesId3,ques1,ques2,ques3);

        connection->insertNewUser(*user);
        if(userRole == 1)
        {
            //user = new student(f,m,l,u,f,e,p,ID," ", 'm',QString::number(userRole),quesId1,quesId2,quesId3,ques1,ques2,ques3);
            QString faculty = ui->facultySelected_label->text();
            QString program = ui->programSelected_label->text();
            QString year = ui->programSequenceYearSelected_label->text();
            connection->setStudentSequence(faculty,program,year.toInt());
            qDebug()<<faculty;
            qDebug()<<program;
            qDebug()<<year;
        }

        this->close();

    }

}

void Register::recieveQuestion(QSqlQuery question)
{
    question.seek(-1);
    while (question.next())
    {
        QString questions = question.value(1).toString();

        ui->question_1_comboBox->addItem(questions);
        ui->question_2_comboBox->addItem(questions);
        ui->question_3_comboBox->addItem(questions);

    }

}

//table slot for programSequenceTable_registerTableWidget_cellClicked
void Register::on_programSequenceTable_registerTableWidget_cellClicked(int row, int column)
{
    //insert information to table
    QString program = ui->programSequenceTable_registerTableWidget->item(row,0)->text();
    QString faculty =  ui->programSequenceTable_registerTableWidget->item(row,1)->text();
    QString programSequence = ui->programSequenceTable_registerTableWidget->item(row,2)->text();



    ui->facultySelected_label->setText(faculty); // facultyselected is assigned the user's faculty data
    ui->programSelected_label->setText(program);
    ui->programSequenceYearSelected_label->setText(programSequence); // programSequenceYearSelected_label is assigned the user's programSequence data

}

// search button slot
void Register::on_filterSearchButton_clicked()
{
    int programIndex = ui->programComboBox->currentIndex();  //programIndex is assigned to the user's choice of program from the programComboBox

    while (ui->programSequenceTable_registerTableWidget->rowCount() > 0)
    {
        ui->programSequenceTable_registerTableWidget->removeRow(0);
    }

    QString faculty = ui->facultyComboBox->currentText(); //faculty is assigned to facultyCombox's current text
    QString program = ui->programComboBox->currentText(); // program is assigned to programComboBox's current text

    if(programIndex == 1) // cehcks if program index is Associate
        program = "Associate";
    else
        program = "Bachelor";  //assigns program to string Bachelor since programIndex is not 1

    qDebug()<<faculty;
    qDebug()<<program;
    //    databaseconnection database;

    /*
     * programSequences is assigned to the value that getProgramSequence(faculty, program) function returns
     * getProgramSequences(faculty,program) belongs to databaseconnection class and returns a query
     */
    QSqlQuery programSequences = connection->getProgramSequences(faculty,program);
    ui->programSequenceTable_registerTableWidget->reset();

    ui->programSequenceTable_registerTableWidget->setColumnCount(3);
    ui->programSequenceTable_registerTableWidget->setStyleSheet("background:#f1f1f1;color:#333;"); // adding style to the programSequenceTable_registerTableWidge

    QStringList header;
    header << "Program"<< "Faculty" <<"Sequence";  // the table format

    ui->programSequenceTable_registerTableWidget->setHorizontalHeaderLabels(header);  //programSequenceTable_registerTableWidget recieves header QStringList as the horizontal header label
    ui->programSequenceTable_registerTableWidget->horizontalHeader()->setStyleSheet("background:#70808c;");

    int rowCount = 0;  //integer created to keep track of the row

    for(; programSequences.next();){

        ui->programSequenceTable_registerTableWidget->insertRow(rowCount); // row implemented inside programSequenceTable_registerTableWidget
        ui->programSequenceTable_registerTableWidget->setColumnWidth(0,590);
        ui->programSequenceTable_registerTableWidget->setColumnWidth(1,70);    // sets the width of the column 2 inisde table
        ui->programSequenceTable_registerTableWidget->setColumnWidth(2,70);

        QTableWidgetItem *program = new QTableWidgetItem;  //new QTableWidgetItem pointer created in the heap for the program
        QTableWidgetItem *faculty = new QTableWidgetItem;
        QTableWidgetItem *programSequence = new QTableWidgetItem; //new QTableWidgetItem pointer created in the heap for the program sequence

        program->setText(programSequences.value(0).toString());    //sets the text for the program QTableWidget
        faculty->setText(programSequences.value(1).toString());
        programSequence->setText(programSequences.value(2).toString()); //sets the text for the programSequence QTableWidget

        ui->programSequenceTable_registerTableWidget->setItem(rowCount,0,program);  //push program value to the table widget programSequenceTable_registerTableWidget
        ui->programSequenceTable_registerTableWidget->setItem(rowCount,1,faculty);
        ui->programSequenceTable_registerTableWidget->setItem(rowCount,2,programSequence);

        rowCount++;
    }


}
//slot for createLectureButton
void Register::on_createLectureButton_clicked()
{
    on_signUpButton_clicked();  //calls button slot signUPButton()
}
