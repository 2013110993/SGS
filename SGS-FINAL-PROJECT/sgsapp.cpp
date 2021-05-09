#include "sgsapp.h"
#include "ui_sgsapp.h"
#include "databaseconnection.h"
#include <QtSql>
#include <QTableWidget>
#include <QWidget>

//extern databaseconnection * connection;
sgsApp::sgsApp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::sgsApp)

{


    ui->setupUi(this);

    connection = new databaseconnection;

    //Default landing Page for StackedWidget
    ui->stackedWidgetSGS->setCurrentIndex(0);

    //Default landing for Dashboard
    ui->stackedWidgetPages->setCurrentIndex(0);

    buttonClick = true;
    for (int var = 0; var < arraySize; ++var)
    {
        ArrayDeleteLater[var] = NULL;
    }

    qDebug()<<"about to connect";


}

sgsApp::~sgsApp()
{
    closeDatabase(*(connection));
    delete connection;
    //delete forgot;
    //delete active_deactivate;
    delete ui;


}

void sgsApp::disableStudentFeature()
{
    ui->addCourse_Button->hide();
    ui->disableUser_Button->hide();
    ui->addUser_Button->hide();
    ui->addInstitution_Button->hide();
}

void sgsApp::hideFeature()
{
    ui->addCourse_Button->hide();
    //ui->disableUser_Button->hide();
    //ui->addUser_Button->hide();
    //ui->addInstitution_Button->hide();

}

void sgsApp::closeDatabase(databaseconnection &dbObj)  //friend function
{
//    dbObj.~databaseconnection();
    //dbObj.disconnect();
    dbObj.disconnect();
}

void sgsApp::showFeature()
{
    ui->addCourse_Button->show();
    ui->disableUser_Button->show();
    ui->addUser_Button->show();
    ui->addInstitution_Button->show();
}

void sgsApp::logout()
{
    qDebug()<<"showed";
        this->show();

}

//Register Button
void sgsApp::on_signUpButton_clicked()
{
    //create a new instance of reg

    reg = new Register(this);
    qDebug()<< !(queries.next());

    if(!(queries.next()))
    {
        queries = connection->updateQuestion();
    }
    else
    {
        qDebug()<<queries.lastError();
    }

    if (queries.size() > 0)
    {
     connect(this,SIGNAL(sendQuestion(QSqlQuery)), reg , SLOT(recieveQuestion(QSqlQuery)));
     emit sendQuestion(queries);
    }

    //Modal Approach
    reg->setModal(true);
    reg->show();
}



//Login Button
void sgsApp::on_signInButton_clicked()
{
        QString username = ui->usernameInput->text();
        QString password = ui->passwordInput->text();

            // ///////////////////////////////////////
           //       Hardcode Login to test
           // /////////////////////////////////////////
//        if (username == "admin" && password == "admin")
//           {
//               ui->stackedWidgetSGS->setCurrentIndex(1);
//           }

        bool checking = connection->loginUser(username,password);
        qDebug()<<connection->getRole();
        int role =  connection->getRole().toInt();
        qDebug()<<role;
        if (checking)
        {
            switch (role)
            {
            case 1:
            {
                ui->stackedWidgetSGS->setCurrentIndex(1);
                ui->stackedWidgetPages->setCurrentIndex(0);
                showFeature();
                disableStudentFeature();
                ui->userRoleLable->setText(username);
            }
                break;
            case 2:
            {
                ui->stackedWidgetSGS->setCurrentIndex(1);
                ui->stackedWidgetPages->setCurrentIndex(0);
                showFeature();
                hideFeature();
                ui->userRoleLable->setText(username);
            }
                break;
            case 3:
            {
                ui->stackedWidgetSGS->setCurrentIndex(1);
                ui->stackedWidgetPages->setCurrentIndex(0);
                showFeature();
                ui->userRoleLable->setText(username);
            }
                break;
            default:
                qDebug()<<"error! ! 404";
            }


        }

        else {
            ui->loginErrorLabel->setText("~ Invalid Credentials! ~");
            ui->loginErrorLabel->setStyleSheet("border:1px solid #b50009; color:#b50009;height:30px;border-radius:5px;");
           }
}

void sgsApp::on_forgotPasswordButton_clicked()
{
    //create a new instance of reg
    forgot = new forgotPassword(this);
    //Modal Approach
    forgot->setModal(true);
    forgot->show();

}

//Login Form to Change echo mode for Password
void sgsApp::on_passwordShowButton_clicked()
{
    //Checks which echo mode and switch it
    if(ui->passwordInput->echoMode() == QLineEdit::Password )
    {
        ui->passwordInput->setEchoMode(QLineEdit::Normal);
        ui->passwordShowButton->setIcon(QIcon(":/iconsGray/Icons/Gray/Eye OFF.png"));
    }else{
        ui->passwordInput->setEchoMode(QLineEdit::Password);
        ui->passwordShowButton->setIcon(QIcon(":/iconsGray/Icons/Gray/Eye ON.png"));
    }

}


void sgsApp::on_logoutTopBarButton_clicked()
{
    ui->stackedWidgetSGS->setCurrentIndex(0);
}


void sgsApp::on_new_Account_pushButton_clicked()
{

}

void sgsApp::on_resetPasswd_pushButton_clicked()
{

}

void sgsApp::on_suspendSetting_pushButton_clicked()
{


}



//New Buttons
void sgsApp::on_logoutButton_clicked()
{
    ui->stackedWidgetSGS->setCurrentIndex(0);
}

void sgsApp::on_changePassword_Button_clicked()
{
    //create a new instance of reg
    forgot = new forgotPassword(this);
    //Modal Approach
    forgot->setModal(true);
    forgot->show();
}

void sgsApp::on_addUser_Button_clicked()
{
    //reg = new Register(this);
    Register * registerNewStudent = new Register(this);
    //Modal approach
    if(!(queries.next()))
    {
        queries = connection->updateQuestion();
        qDebug()<<"here1";

    }
    else {
          qDebug()<<"debug queries.next";;
        qDebug()<<queries.lastError();
    }

    if (queries.size() > 0)
    {
     connect(this,SIGNAL(sendQuestion(QSqlQuery)), registerNewStudent , SLOT(recieveQuestion(QSqlQuery)));
     emit sendQuestion(queries);
    }

    registerNewStudent->show();

}

//DASHBOARD PAGES
void sgsApp::on_dashboard_pushButton_clicked()
{
    //Navigate tho Dashboard Page
    ui->stackedWidgetPages->setCurrentIndex(0);
    //New functionality comming soon
//    if (buttonClick)
//    {
//        buttonClick = false;
//        qDebug("clicked");
//          ui->dashboard_pushButton->setIcon(QIcon(":/icons White/Icons/White/Single Arrow LEFT.png"));
//          hideFeature();
//    }
//    else
//    {
//        ui->dashboard_pushButton->setIcon(QIcon(":/icons White/Icons/White/Single Arrow RIGHT.png"));
//        buttonClick = true;
//        showFeature();
//    }
}



void sgsApp::on_viewStudentProgramSequence_Button_clicked()
{

    programSequenceList();
    ui->stackedWidgetPages->setCurrentIndex(2);
}

//Generating the Program Sequence QTableWidget
void sgsApp::programSequenceList()
{
    qDebug()<<connection->getRole();
    while (ui->programSequenceTableWidget->rowCount() > 0)
    {
        ui->programSequenceTableWidget->removeRow(0);
    }
    QSqlQuery programCourses = connection->getStudentsCourses();
    QStringList programSeqInfo = connection->getSequenceName();
    ui->programSequenceProgramName->setText(programSeqInfo[0]);

    ui->programSequenceFacultyName->setText(programSeqInfo[1]);

    ui->programSequenceTableWidget->setColumnCount(7);
    ui->programSequenceTableWidget->setStyleSheet("background:#f1f1f1;color:#333;");

    QStringList header;
    header << "Code"<< "Course Name" <<"Credits" << "Grade" <<"Pre-requisites" << "Semester" << "Year";

    ui->programSequenceTableWidget->setHorizontalHeaderLabels(header);
    ui->programSequenceTableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section {background:#333;height:30px; color:#fff;}");

    ui->programSequenceTableWidget->setAlternatingRowColors(true);
    ui->programSequenceTableWidget->setStyleSheet("alternate-background-color: #eee9e9; color:#333;");

    int rowCount = 0;

    for(; programCourses.next();){

         ui->programSequenceTableWidget->insertRow(rowCount);
         ui->programSequenceTableWidget->setColumnWidth(0,90);
         ui->programSequenceTableWidget->setColumnWidth(1,270);
         ui->programSequenceTableWidget->setColumnWidth(2,60);
         ui->programSequenceTableWidget->setColumnWidth(3,90);
         ui->programSequenceTableWidget->setColumnWidth(4,480);
         ui->programSequenceTableWidget->setColumnWidth(5,70);
         ui->programSequenceTableWidget->setColumnWidth(6,68);

        QTableWidgetItem *courseCode = new QTableWidgetItem;
        QTableWidgetItem *courseName = new QTableWidgetItem;
        QTableWidgetItem *credits = new QTableWidgetItem;
        QTableWidgetItem *grade = new QTableWidgetItem;
        QTableWidgetItem *prerequisites = new QTableWidgetItem;
        QTableWidgetItem *semester = new QTableWidgetItem;
        QTableWidgetItem *year = new QTableWidgetItem;

        courseCode->setText(programCourses.value(0).toString());
        courseName->setText(programCourses.value(1).toString());
        credits->setText(programCourses.value(2).toString());
        if (programCourses.value(3).toString().isEmpty())
        grade->setText("Pending");
        else
            grade->setText(programCourses.value(3).toString());


        prerequisites->setText(programCourses.value(4).toString());
        semester->setText(programCourses.value(5).toString());
        year->setText(programCourses.value(6).toString());

        ui->programSequenceTableWidget->setItem(rowCount,0,courseCode);
        ui->programSequenceTableWidget->setItem(rowCount,1,courseName);
        ui->programSequenceTableWidget->setItem(rowCount,2,credits);
        ui->programSequenceTableWidget->setItem(rowCount,3,grade);
        ui->programSequenceTableWidget->setItem(rowCount,4,prerequisites);
        ui->programSequenceTableWidget->setItem(rowCount,5,semester);
        ui->programSequenceTableWidget->setItem(rowCount,6,year);

        rowCount++;
    }
}

void sgsApp::on_viewCourses_Button_clicked()
{

    //Navigate to View Course Page
    ui->stackedWidgetPages->setCurrentIndex(1);

    //Function to display view course table
    viewCoursesTable();
}
void sgsApp::viewCoursesTable()
{

    while (ui->viewCoursesTableWidget->rowCount() > 0)
    {
        ui->viewCoursesTableWidget->removeRow(0);
    }

    QSqlQuery courses = connection->getStudentsCourses();



    ui->viewCoursesTableWidget->setColumnCount(6);
    ui->viewCoursesTableWidget->setStyleSheet("background:#f1f1f1;color:#333;");

    QStringList header;
    header << "Code"<< "Course Name" <<"Credits" << "Semester" << "Status" << "Comments";

    ui->viewCoursesTableWidget->setHorizontalHeaderLabels(header);
    ui->viewCoursesTableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section {background:#333;height:30px; color:#fff;}");

    ui->viewCoursesTableWidget->setAlternatingRowColors(true);
    ui->viewCoursesTableWidget->setStyleSheet("alternate-background-color: #eee9e9; color:#333;");

    int rowCount = 0;

    for(;courses.next() ; ){

         ui->viewCoursesTableWidget->insertRow(rowCount);
         ui->viewCoursesTableWidget->setColumnWidth(0,85);
         ui->viewCoursesTableWidget->setColumnWidth(1,195);
         ui->viewCoursesTableWidget->setColumnWidth(2,70);
         ui->viewCoursesTableWidget->setColumnWidth(3,80);
         ui->viewCoursesTableWidget->setColumnWidth(4,100);
         ui->viewCoursesTableWidget->setColumnWidth(5,108);



        QTableWidgetItem *courseCode = new QTableWidgetItem;
        QTableWidgetItem *courseName = new QTableWidgetItem;
        QTableWidgetItem *credits = new QTableWidgetItem;
        QTableWidgetItem *semester = new QTableWidgetItem;
        QTableWidgetItem *status = new QTableWidgetItem;
        QTableWidgetItem *comments = new QTableWidgetItem;

        courseCode->setText(courses.value(0).toString());
        courseName->setText(courses.value(1).toString());
        credits->setText(courses.value(2).toString());
        semester->setText(courses.value(5).toString());


        if (courses.value(3).toString().isEmpty())
        status->setText("Pending!");
        else
            status->setText("Complete: "+ courses.value(3).toString());

        ui->viewCoursesTableWidget->setItem(rowCount,0,courseCode);
        ui->viewCoursesTableWidget->setItem(rowCount,1,courseName);
        ui->viewCoursesTableWidget->setItem(rowCount,2,credits);
        ui->viewCoursesTableWidget->setItem(rowCount,3,semester);
        ui->viewCoursesTableWidget->setItem(rowCount,4,status);


        rowCount++;
    }
}

//Generate Lecturer Cours List Table
void sgsApp::viewLecturerCoursesTable()
{
    while (ui->lecturerCoursesListTableWidget->rowCount() > 0)
    {
        ui->lecturerCoursesListTableWidget->removeRow(0);
    }
    ui->lecturerCoursesListTableWidget->setColumnCount(5);
    ui->lecturerCoursesListTableWidget->setStyleSheet("background:#f1f1f1;color:#333;");

    QStringList header;
    header << "Course Name"<< "Credit" << "Pre-requisites" <<"Semester" << "Year";
    ui->lecturerCoursesListTableWidget->setHorizontalHeaderLabels(header);
    ui->lecturerCoursesListTableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section {background:#333;height:30px; color:#fff;}");

    ui->lecturerCoursesListTableWidget->verticalHeader()->setVisible(false);


    ui->lecturerCoursesListTableWidget->setAlternatingRowColors(true);
    ui->lecturerCoursesListTableWidget->setStyleSheet("alternate-background-color: #eee9e9; color:#333;");

    int rowCount = 0;
    QSqlQuery lectureCourses = lecture.getLecturerCourses(*(connection));

    for(; lectureCourses.next();)
    {
         ui->lecturerCoursesListTableWidget->insertRow(rowCount);

         ui->lecturerCoursesListTableWidget->setColumnWidth(0,250);
         ui->lecturerCoursesListTableWidget->setColumnWidth(1,110);
         ui->lecturerCoursesListTableWidget->setColumnWidth(2,375);
         ui->lecturerCoursesListTableWidget->setColumnWidth(3,100);
         ui->lecturerCoursesListTableWidget->setColumnWidth(4,180);

        QTableWidgetItem *courseName = new QTableWidgetItem;
        QTableWidgetItem *credits = new QTableWidgetItem;
        QTableWidgetItem *prerequisites = new QTableWidgetItem;
        QTableWidgetItem *semester = new QTableWidgetItem;
        QTableWidgetItem *year = new QTableWidgetItem;


        courseName->setText(lectureCourses.value(0).toString());
        credits->setText(lectureCourses.value(1).toString());
        prerequisites->setText(lectureCourses.value(2).toString());
        semester->setText(lectureCourses.value(3).toString());
        year->setText(lectureCourses.value(4).toString());


        ui->lecturerCoursesListTableWidget->setItem(rowCount,0,courseName);
        ui->lecturerCoursesListTableWidget->setItem(rowCount,1,credits);
        ui->lecturerCoursesListTableWidget->setItem(rowCount,2,prerequisites);
        ui->lecturerCoursesListTableWidget->setItem(rowCount,3,semester);
        ui->lecturerCoursesListTableWidget->setItem(rowCount,4,year);

        rowCount++;
    }


}

void sgsApp::on_lecturerCoursesListTableWidget_cellClicked(int row, int column)
{
    QString courseName = ui->lecturerCoursesListTableWidget->item(row,0)->text();
    QString credits =  ui->lecturerCoursesListTableWidget->item(row,1)->text();
    QString semester = ui->lecturerCoursesListTableWidget->item(row,3)->text();
    QString year = ui->lecturerCoursesListTableWidget->item(row,4)->text();


    ui->updateCourseName->setText(courseName);
    ui->updatePrerequisites->setText(credits);
    ui->updateSemester->setText(semester);
    ui->updateYear->setText(year);
}

//View Lecturer Page
void sgsApp::on_AddLecturerCourse_Button_clicked()
{
    //Navigate to Lecturer Course Page
    ui->stackedWidgetPages->setCurrentIndex(3);

    //Function to display view course table
    viewLecturerCoursesTable();

}

void sgsApp::on_viewCoursesTableWidget_cellClicked(int row, int column)
{
    QString courseName = ui->viewCoursesTableWidget->item(row,1)->text();
    QString status =  ui->viewCoursesTableWidget->item(row,4)->text();
    ui->courseViewCourseTable->setText(courseName);
    ui->pendingViewCourseTable->setText(status);

        qDebug()<< ui->viewCoursesTableWidget->item(row,4)->text() ;
        qDebug()<<( ui->viewCoursesTableWidget->item(row,4)->text() != "Pending!");
    if(( ui->viewCoursesTableWidget->item(row,4)->text() != "Pending!"))
    {
        QStringList commentSec = connection->getComment(ui->viewCoursesTableWidget->item(row,0)->text());

        ui->commentTimeStapViewCourseTable->setText(commentSec[1]);
        ui->ratingViewCourseTable->setText(commentSec[2]);
        ui->userCommentViewCourseTable->setText(commentSec[0]);



    }
    else
    {
        ui->commentTimeStapViewCourseTable->setText(" ");
        ui->ratingViewCourseTable->setText(" ");
        ui->userCommentViewCourseTable->setText(" ");

     }



}


void sgsApp::on_programSequenceTableWidget_cellClicked(int row, int column)
{
    QString courseCode = ui->programSequenceTableWidget->item(row,0)->text();
    QString courseName =  ui->programSequenceTableWidget->item(row,1)->text();
    QString credits = ui->programSequenceTableWidget->item(row,2)->text();
    QString prerequisites = ui->programSequenceTableWidget->item(row,4)->text();
    QString semester = ui->programSequenceTableWidget->item(row,5)->text();
    QString year = ui->programSequenceTableWidget->item(row,6)->text();
    QSqlQuery lecture = connection->getLectureName(courseCode);

    ui->courseCode_CourseGradeLable->setText(courseCode);
    ui->courseName_courseGradeLable->setText(courseName);
    ui->credit_CourseGradeLable->setText(credits);
    ui->allPrerequisites_CourseGradeLable->setText(prerequisites);
    ui->semester_CourseGradeLable->setText(semester);
    ui->courseYear_CourseGradeLable->setText(year);

    ui->addLectureComboBox->clear();
    while (lecture.next())
    {
        QString lectureName = lecture.value(0).toString();
        lectureName.append(" ");
        lectureName = lectureName.append(lecture.value(1).toString());
        ui->addLectureComboBox->addItem(lectureName);
    }

}

void sgsApp::on_updateCourse_pushButton_clicked()
{

    QString courseCode =  ui->courseCode_CourseGradeLable->text();
    QString courseName =  ui->courseName_courseGradeLable->text();
    QString credits = ui->credit_CourseGradeLable->text();
    QString grade = ui->addCourseGradecomboBox->currentText();
    QString rating = ui->addCourseRatingcomboBox->currentText();
    QString prerequisites = ui->allPrerequisites_CourseGradeLable->text();
    QString semester = ui->semester_CourseGradeLable->text();
    QString year =  ui->courseYear_CourseGradeLable->text();
    QString comment =  ui->addCourseComment_plainTextEdit->toPlainText();

    QStringList list;
    list.append(courseCode);

     list.append(grade);

    list.append(rating);
    list.append(ui->addLectureComboBox->currentText());
    list.append(comment);






    bool checking = connection->setCourseGrade(list);

    if (checking)
          programSequenceList();


}


void sgsApp::on_disableUser_Button_2_clicked()
{

}

void sgsApp::on_disableUser_Button_clicked()
{
    //create a new instance of reg
    active_deactivate = new Activate_DeactivateUser(this);
    //Modal Approach
    active_deactivate->setModal(true);
    active_deactivate->show();
}





//View Comments Page
void sgsApp::on_viewComments_Button_clicked()
{
    //Navigate to View Course Page
    ui->stackedWidgetPages->setCurrentIndex(4);



}
void sgsApp::viewSearchCourseCommentTable()
{

    while (ui->searchResultCourseCommentTableWidget->rowCount() > 0)
    {
        ui->searchResultCourseCommentTableWidget->removeRow(0);
    }

    QString courseName = ui->commentsSearchCourseCodelineEdit->text();
    QSqlQuery courses = connection->getLecturesByCourse(courseName);







    ui->searchResultCourseCommentTableWidget->setColumnCount(3);
    ui->searchResultCourseCommentTableWidget->setStyleSheet("background:#f1f1f1;color:#333;");

    QStringList header;
    header <<"Code" <<  "Course Name"<< "Lecturer";
    ui->searchResultCourseCommentTableWidget->setHorizontalHeaderLabels(header);
    ui->searchResultCourseCommentTableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section {background:#333;height:30px; color:#fff;}");

    ui->searchResultCourseCommentTableWidget->verticalHeader()->setVisible(false);


    ui->searchResultCourseCommentTableWidget->setAlternatingRowColors(true);
    ui->searchResultCourseCommentTableWidget->setStyleSheet("alternate-background-color: #eee9e9; color:#333;");

    int rowCount = 0;

    for(; courses.next();)
    {
         ui->searchResultCourseCommentTableWidget->insertRow(rowCount);

         ui->searchResultCourseCommentTableWidget->setColumnWidth(0,75);
         ui->searchResultCourseCommentTableWidget->setColumnWidth(1,200);
         ui->searchResultCourseCommentTableWidget->setColumnWidth(0,150);



        QTableWidgetItem *courseCode = new QTableWidgetItem;
        QTableWidgetItem *courseName = new QTableWidgetItem;
        QTableWidgetItem *lecturer = new QTableWidgetItem;

        courseCode->setText(courses.value(0).toString());
        courseName->setText(courses.value(1).toString());
        lecturer->setText(courses.value(2).toString());

        ui->searchResultCourseCommentTableWidget->setItem(rowCount,0,courseCode);
        ui->searchResultCourseCommentTableWidget->setItem(rowCount,1,courseName);
        ui->searchResultCourseCommentTableWidget->setItem(rowCount,2,lecturer);



}
}

void sgsApp::on_filterSearchButton_clicked()
{
    QString courseCode = ui->CourseCodelineEdit->text();
    QSqlQuery info = connection->getLectureCourses(courseCode);


    while(info.next())
    {
        ui->courseResultInfoLabel->setText(info.value(0).toString());
    }



}

void sgsApp::on_addButton_clicked()
{
    if (ui->courseResultInfoLabel->text().isEmpty())
    {
        QMessageBox::warning(NULL,"We encounter an Error : ","Please add a course before proceeding to the next step");

    }
    else
    {
        QString courseCode = ui->CourseCodelineEdit->text();
        QSqlQuery info = connection->getLectureCourses(courseCode);
        QString credit;
        QString prerequisites;
        QString semester;

        while(info.next())
        {
            ui->updateCourseName->setText(info.value(0).toString());
            ui->updatePrerequisites->setText(prerequisites = info.value(2).toString());
        }

    }

}

void sgsApp::on_addCourseButton_clicked()
{
    if (ui->updateYear->text().isEmpty() || ui->updateSemester->text().isEmpty())
    {
        QMessageBox::warning(NULL,"We encounter an Error : ","Please add a the semester and year we process your data");

    }

    else
    {
        QString courseID = ui->CourseCodelineEdit->text();
        QString year = ui->updateYear->text();
        year.append("-");
        year.append(ui->updateSemester->text());
        connection->addLectureCourse(courseID,year);
    }
    viewLecturerCoursesTable();
}

void sgsApp::courseComments(int row)
{
                delete  layout;
 //  if (layout)
    int var = 0;
    while (ArrayDeleteLater[var] != NULL)
    {
        delete ArrayDeleteLater[var];
        ArrayDeleteLater[var] = NULL;

        var++;
    }




    QString courseCode = ui->searchResultCourseCommentTableWidget->item(row,0)->text();
    QString lectureName =  ui->searchResultCourseCommentTableWidget->item(row,2)->text();
    qDebug()<<courseCode <<"    "<<lectureName;
    //Creating a grid layout...
    layout=new QGridLayout(this);
    QSqlQuery comments = connection->getComments(courseCode,lectureName);

    int counter = 0 ;

    //running a loop to add the desired components to the scroll area...
    for(;comments.next();)
    {
         QString date= "Posted: " + comments.value(0).toString() + " ";
         QString commentText =comments.value(1).toString() ;
         QString rate= "Rating: "+ comments.value(2).toString() + " ";



        //Label for Comment Body
        QLabel  * comment = new QLabel(date+"\t\t\t\t\t\t\t" +rate+"\n\n" + commentText);
        comment->setStyleSheet("font-size:12px;line-height:24px;background:#fff; border-radius: 5px; padding:15px; margin-bottom:20px; color:#999;");


        layout->addWidget(comment);
        ArrayDeleteLater[counter] = comment;
        counter ++ ;
        //delete  comment;
    }


    //sets Layout to ScrollArea
    ui->scrollAreaWidgetContents->setLayout(layout);
    clickedCell = true;




}


void sgsApp::on_commentSearchCourseCODEButton_clicked()
{
    QString courseName = ui->commentsSearchCourseCodelineEdit->text();
    if (courseName.isEmpty())
    {
        QMessageBox::warning(NULL,"Error, No course Input", "We cannot Search the course without you entering a course Name:");

    }
    else {

        //Display search Table
        viewSearchCourseCommentTable();
    }
}


void sgsApp::on_searchResultCourseCommentTableWidget_cellClicked(int row, int column)
{    qDebug()<<"YOU click the cell";

     courseComments(row);

}
