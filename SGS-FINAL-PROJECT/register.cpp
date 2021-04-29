#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;


#include "register.h"
#include "ui_register.h"
#include<QMessageBox>
#include <QDebug>
#include "databaseconnection.h"



Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
    ui->stackedWidgetRegister->setCurrentIndex(0);
    userRole=1;
    // ui->middleName_RegFormLineEdit->hide();
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
    //EMAIL VALIDATION
    QLineEdit *fNameLineEdit = new QLineEdit;
    QLineEdit *emailLineEdit = new QLineEdit;
    QLineEdit *confirmEmailLineEdit = new QLineEdit;
    fNameLineEdit = ui->firstName_RegFormLineEdit;
    emailLineEdit = ui->email_RegFormLineEdit;
    confirmEmailLineEdit = ui->confirmEmail_RegFormLineEdit_2;  //
    QRegularExpression rx("\\b[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,4}\\b",
                          QRegularExpression::CaseInsensitiveOption);
    emailLineEdit->setValidator(new QRegularExpressionValidator(rx, this));

    //question validations
    int currIndex = ui->question_1_comboBox->currentIndex();       //first question combo box
    QString questionText = ui->firtstQuestionAnswer_RegFormLineEdit->text(); //first question answer line edit

    int currIndex2 = ui->question_2_comboBox->currentIndex();       //second question combo box
    QString questionText2 = ui->secondQuestionAnswer_RegFormLineEdit->text(); //second question answer line edit

    int currIndex3 = ui->question_3_comboBox->currentIndex();       //third question combo box
    QString questionText3 = ui->thirdQuestionAnswer_RegFormLineEdit->text(); //third question answer line edit

    //checks for any empty data in inside the form
    try
    {
        if (fNameLineEdit->text() == NULL || ui->lastName_RegFormLineEdit->text() == NULL || ui->userName_RegFormLineEdit->text()==NULL ||
                ui->password_RegFormLineEdit->text() == NULL || ui->passwordConfirm_RegFormLineEdit->text() == NULL ||
                ui->confirmEmail_RegFormLineEdit_2->text() == NULL || ui->email_RegFormLineEdit->text() == NULL ||
                ui->studentIdRegFormLineEdit->text() == NULL || ui->question_1_comboBox->currentIndex() == 0 ||
                ui->firtstQuestionAnswer_RegFormLineEdit->text() == NULL || ui->question_2_comboBox->currentIndex() == 0 ||
                ui->secondQuestionAnswer_RegFormLineEdit->text() == NULL || ui->question_3_comboBox->currentIndex() == 0 ||
                ui->thirdQuestionAnswer_RegFormLineEdit->text() == NULL || ui->studentIdRegFormLineEdit->text() == NULL
                )
        {
            throw "Fill in the missing Data";
        }
        else if (ui->password_RegFormLineEdit->text() != ui->passwordConfirm_RegFormLineEdit->text())
        {
            throw "Password MissMatched!";
        }
        else if (!emailLineEdit->hasAcceptableInput())            //displays warning message box if email format is incorrect
        {
           throw "Email Format is Incorrect";
        }
        else if (emailLineEdit->text() != confirmEmailLineEdit->text()) //displays warning message box if the email line edit is not equal to confirm email line edit
        {
           throw "Email Format does not match!";
        }
        else if(currIndex == currIndex2 || currIndex == currIndex3 || currIndex2 == currIndex3) //checks if questions are repeated
        {
           throw "Questions are repeated!";
        }
        else
        {
             ui->stackedWidgetRegister->setCurrentIndex(1); //executes if there's no error
        }
    }
    catch (const char *message)
    {
        QMessageBox messagebox;
        messagebox.warning(NULL,"Error",message);
    }

    //Generate Table for ProgramSequence
    on_registerTableWidget_ProgramSequenceTable();

//    if(!emailLineEdit->hasAcceptableInput())            //displays warning message box if email format is incorrect
//    {
//        QMessageBox::warning(this, tr("Email verification"),
//                             tr("Email Format is incorrect."), QMessageBox::Ok);
//        return;
//    }
//    else if(emailLineEdit->text() != confirmEmailLineEdit->text()) //displays warning message box if the email line edit is not equal to confirm email line edit
//    {
//        QMessageBox::warning(this, tr("Email verification"),
//                             tr("Email Format does not Match."), QMessageBox::Ok);
//        return;

//    }



//    if( questionText.isEmpty() ||  currIndex == 0 || questionText2.isEmpty() || currIndex2 == 0 || questionText3.isEmpty() || currIndex3 == 0)
//    {
//        QMessageBox msgBox1;
//        msgBox1.setText("Your Account is not completed, Please fill the missing data!");
//        msgBox1.exec();
//        qDebug()<<"is empty";
//    }
//    else if(currIndex == currIndex2 || currIndex == currIndex3 || currIndex2 == currIndex3) //checks if questions are repeated
//    {
//        QMessageBox msgBox1;
//        msgBox1.setText("Questions are repeated!");
//        msgBox1.exec();
//    }
//    else
//    {

//        ui->stackedWidgetRegister->setCurrentIndex(1); //executes if there's no error

//    }
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
    userRole=1;
}

void Register::on_lecturerRadioButton_clicked()
{
    ui->studentIdRegFormLineEdit->hide();
    userRole=2;
}

void Register::on_middleNamecheckBox_stateChanged(int arg1)
{
    if(arg1)
    {
        ui->middleName_RegFormLineEdit->show();
    }
    else{
        ui->middleName_RegFormLineEdit->hide();
    }
}

void Register::on_signUpButton_clicked()
{

    int currIndex = ui->programComboBox->currentIndex();       // program combo box
    int currIndex2 = ui->facultyComboBox->currentIndex();  //faculty combo box
    //    if(currIndex == 0 || currIndex2 == 0)
    //    {
    //        QMessageBox msgBox1;
    //        msgBox1.setText("Please fill the missing data!");
    //        msgBox1.exec();
    //    }
    //    else
    {


        QString f = ui->firstName_RegFormLineEdit->text();
        QString l = ui->lastName_RegFormLineEdit->text();
        QString m =  ui->userName_RegFormLineEdit->text();
        QString u =  ui->userName_RegFormLineEdit->text();
        QString e =  ui->email_RegFormLineEdit->text();
        QString p =  ui->password_RegFormLineEdit->text();
        QString id =  ui->studentIdRegFormLineEdit->text();
        int ID = id.toInt();

        QString ques1 =  ui->firtstQuestionAnswer_RegFormLineEdit->text();
        QString ques2 =  ui->secondQuestionAnswer_RegFormLineEdit->text();
        QString ques3 =  ui->thirdQuestionAnswer_RegFormLineEdit->text();

        int quesId1 =  ui->question_1_comboBox->currentIndex();
        int quesId2 =  ui->question_2_comboBox->currentIndex();
        int quesId3 =  ui->question_3_comboBox->currentIndex();


        databaseconnection * connection = new databaseconnection;

        user = new student(f,m,l,u,f,e,p,ID," ", 'm',QString::number(userRole),quesId1,quesId2,quesId3,ques1,ques2,ques3);

        connection->insertNewUser(*user);
        this->close();
        delete connection;

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

//Generating Table for Program Sequence List
void Register::on_registerTableWidget_ProgramSequenceTable()
{
    ui->programSequenceTable_registerTableWidget->setColumnCount(3);
    ui->programSequenceTable_registerTableWidget->setStyleSheet("background:#f1f1f1;color:#333;");

    QStringList header;
    header << "Program"<< "Faculty" <<"Sequence";

    ui->programSequenceTable_registerTableWidget->setHorizontalHeaderLabels(header);
    ui->programSequenceTable_registerTableWidget->horizontalHeader()->setStyleSheet("background:#70808c;");

    int rowCount = 0;

    for(int i = 0; i< 10; i++){

         ui->programSequenceTable_registerTableWidget->insertRow(rowCount);
         ui->programSequenceTable_registerTableWidget->setColumnWidth(0,150);
         ui->programSequenceTable_registerTableWidget->setColumnWidth(1,530);
         ui->programSequenceTable_registerTableWidget->setColumnWidth(2,60);

        QTableWidgetItem *program = new QTableWidgetItem;
        QTableWidgetItem *faculty = new QTableWidgetItem;
        QTableWidgetItem *programSequence = new QTableWidgetItem;

        program->setText("Bachelor Degree");
        faculty->setText("Faculty of Science & Technology Math, Physics and IT Department");
        programSequence->setText("2019-1");

        ui->programSequenceTable_registerTableWidget->setItem(rowCount,0,program);
        ui->programSequenceTable_registerTableWidget->setItem(rowCount,1,faculty);
        ui->programSequenceTable_registerTableWidget->setItem(rowCount,2,programSequence);

        rowCount++;
    }

}



void Register::on_programSequenceTable_registerTableWidget_cellClicked(int row, int column)
{
    QString program = ui->programSequenceTable_registerTableWidget->item(row,0)->text();
    QString faculty =  ui->programSequenceTable_registerTableWidget->item(row,1)->text();
    QString programSequence = ui->programSequenceTable_registerTableWidget->item(row,2)->text();


    ui->facultySelected_label->setText(faculty);
    ui->programSelected_label->setText(program);
    ui->programSequenceYearSelected_label->setText(programSequence);

}

