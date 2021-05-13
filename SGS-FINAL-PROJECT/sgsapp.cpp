#include "sgsapp.h"
#include "ui_sgsapp.h"
#include "databaseconnection.h"
#include <QtSql>
#include <QTableWidget>
#include <QWidget>
#include <QPrinter>
#include <QPrintDialog>
#include <QFileDialog>
#include <QTranslator>

#include <QtCharts>
#include <QBarset>
#include <QGraphicsView>
#include<QPieSeries>
#include<QBarSeries>
#include<QChartView>
#include<QtCharts/QChartView>
#include<QtCharts/QPieSeries>
#include<QtCharts/QPieSlice>


using namespace QtCharts;

QT_CHARTS_USE_NAMESPACE
extern QApplication *a;
extern QTranslator *translator;

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

    //Default hide Add Course to admin page
    ui->addCourseSequenceframe->hide();
    ui->draftProgSequenceFrame->hide();

    buttonClick = true;  //sets buttonCLick to true
    for (int var = 0; var < arraySize; ++var)
    {
        ArrayDeleteLater[var] = NULL; //sets Qlabel Array pointer values to Null
    }
    holder = NULL;

    releasetView = NULL;
    PieReleasetView = NULL;
    qDebug()<<"about to connect";

}

//desctructor
sgsApp::~sgsApp()
{
    closeDatabase(*(connection));  //calls function closeDatabase to close the database
    delete connection;  //release connection from the heap
    delete ui;
}

//funtion disables all student Features
void sgsApp::disableStudentFeature()
{
    //hides everything linked with the student features
    ui->disableUser_Button->hide();
    ui->addUser_Button->hide();
    ui->AddLecturerCourse_Button->hide();
    ui->AddProgramSequence_Button->hide();
    ui->AddProgramSequenceFormTitle_2->hide();
    ui->studentSearchButton->hide();
    ui->studentSearchLineEdit->hide();
    ui->lecturePrintReport_pushButton->hide();

}

//function hide features
void sgsApp::hideFeature()
{
    ui->addCourseFrame->hide();   //hides the course update/frame
    ui->viewCourses_Button->hide();
    ui->AddProgramSequence_Button->hide();
    ui->disableUser_Button->hide();
}

void sgsApp::disableAdminFeature() //disableAdminFeature() function disbales the Admin features
{

    ui->AddLecturerCourse_Button->hide();
    ui->viewCourses_Button->hide();  //disbales button to view courses

}
void sgsApp::closeDatabase(databaseconnection &dbObj)  // function closes database
{
    dbObj.disconnect();  //calls function disconnect() from the databaseconnection class
}

//this function show the features that are disbaled
void sgsApp::showFeature()
{
    //show available features
    ui->AddProgramSequence_Button->show();
    ui->addCourseFrame->show();
    ui->AddProgramSequenceFormTitle_2->show();
    ui->studentSearchButton->show();
    ui->studentSearchLineEdit->show();
    ui->disableUser_Button->show();
    ui->addUser_Button->show();
    ui->AddLecturerCourse_Button->show();
    ui->viewCourses_Button->show();
    ui->lecturePrintReport_pushButton->show();
}

void sgsApp::logout()
{
    this->show();  //logouts from the sgsapp
}

//Register Button slot
void sgsApp::on_signUpButton_clicked()
{
    //create a new instance of reg
    reg = new Register(this);
    qDebug()<< !(queries.next());



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


    if(queries.size() > 0)
    {
        connect(this,SIGNAL(sendQuestion(QSqlQuery)), reg , SLOT(recieveQuestion(QSqlQuery)));  //create connection with signal sendQuestion(QSqlQuery) from this class and connect it to slot recieveQuestion(QSqlQuery) from register class
        emit sendQuestion(queries);
    }

    //Modal Approach
    reg->setModal(true);
    reg->show();  //displays register form
}

//Login Button slot
void sgsApp::on_signInButton_clicked()
{
    QString username = ui->usernameInput->text();  //QString username is assigned to the user's username input
    QString password = ui->passwordInput->text();

    // ///////////////////////////////////////
    //       Hardcode Login to test
    // /////////////////////////////////////////
    //        if (username == "admin" && password == "admin")
    //           {
    //               ui->stackedWidgetSGS->setCurrentIndex(1);
    //           }

    bool checking = connection->loginUser(username,password);  //checking is assigned to the returned value that loginUser(username, password) function returns(either true or flase since it's a bool)
    qDebug()<<connection->getRole();
    int role =  connection->getRole().toInt();  //role recieves the returned value that getRole() functions returns(integer)
    if (checking)
    {
        switch (role)
        {
        case 1:  //case 1 enters if role is 1
        {
            ui->stackedWidgetSGS->setCurrentIndex(1);  //sets the stackwidgetSGS widget to index 1
            on_dashboard_pushButton_clicked();
            //ui->stackedWidgetPages->setCurrentIndex(0);
            showFeature();   //calls function showFeatures() this functions will enable a list of features for the student
            disableStudentFeature();    //disables features that aren't accessible for the student
            ui->userRoleLable->setText(username);
        }
            break;
        case 2: //case 2 enters if role is 2
        {
            ui->stackedWidgetSGS->setCurrentIndex(1);
            on_dashboard_pushButton_clicked();
            //ui->stackedWidgetPages->setCurrentIndex(0); //widget stackedWidgetPages is set to index 0(first page)
            showFeature();  //show lecturer features
            hideFeature();  //hide features that aren't accessible for the lecturer
            ui->userRoleLable->setText(username);
        }
            break;
        case 3:     //case 3 enters if role is 3
        {
            ui->stackedWidgetSGS->setCurrentIndex(1);       //sets the stackwidgetSGS widget to index 1
            on_dashboard_pushButton_clicked();
            //ui->stackedWidgetPages->setCurrentIndex(0);
            showFeature();          //shows the features available for the admin
            disableAdminFeature();  //disbales the features that admin is not allowed to access
            ui->userRoleLable->setText(username);
        }
            break;
        default:   //reaches to default if role was not found in neither of the cases
            qDebug()<<"error! ! 404";
        }


    }
    //enters if !checking
    else {
        ui->loginErrorLabel->setText("~ Invalid Credentials! ~");       //displays a login  error message
        ui->loginErrorLabel->setStyleSheet("border:1px solid #b50009; color:#b50009;height:30px;border-radius:5px;");   //sets the style for the login error label
    }
}

void sgsApp::on_forgotPasswordButton_clicked()
{

    forgot = new forgotPassword(this); //create a new instance of forgotpassword
    //Modal Approach
    forgot->setModal(true);
    forgot->show();     //shows the dialog of forgotPassord class

}

//Login Form to Change echo mode for Password
void sgsApp::on_passwordShowButton_clicked()
{
    //Checks which echo mode and switch it
    if(ui->passwordInput->echoMode() == QLineEdit::Password )
    {
        ui->passwordInput->setEchoMode(QLineEdit::Normal);  //sets password echo Mode to normal
        ui->passwordShowButton->setIcon(QIcon(":/iconsGray/Icons/Gray/Eye OFF.png"));  // sets icon to represents password echomode is turned off
    }else{
        ui->passwordInput->setEchoMode(QLineEdit::Password);        //encrypts the password text of the user
        ui->passwordShowButton->setIcon(QIcon(":/iconsGray/Icons/Gray/Eye ON.png"));        //sets icon to represents password echomode is turned on
    }

}

//
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
    ui->stackedWidgetSGS->setCurrentIndex(0);  //moves stacked widget back to index 0
}

void sgsApp::on_changePassword_Button_clicked()
{

    forgot = new forgotPassword(this); //create a new instance of forgotPassword
    //Modal Approach
    forgot->setModal(true);
    forgot->show();     //shows the forgot passowrd form
}

//add user button slot
void sgsApp::on_addUser_Button_clicked()
{
    //reg = new Register(this);
    Register * registerNewStudent = new Register(this);
    //Modal approach
    if(!(queries.next())) //if query is empty
    {
        queries = connection->updateQuestion();
        qDebug()<<"here1";

    }
    else {
        qDebug()<<"debug queries.next";;
        qDebug()<<queries.lastError();
    }

    if (queries.size() > 0)     //checks if the size of query is greater than 0
    {
        //this connection connects SIGNAL sendQuestion(QSqlQuery)) from  this class to SLOT recieveQuestion(QSqlQuery) from the Register class
        connect(this,SIGNAL(sendQuestion(QSqlQuery)), registerNewStudent , SLOT(recieveQuestion(QSqlQuery)));
        emit sendQuestion(queries);
    }

    registerNewStudent->show(); //shows Register form

}

//DASHBOARD PAGES
void sgsApp::on_dashboard_pushButton_clicked()
{

    switch (connection->getRole().toInt())
    {
    case 1:
    {
        ui->widget1Title->setText("Course Completed");
        ui->widget2Title->setText("Pending Course");
        ui->widget2Title_5->setText("Total Comments");

        ui->frame_Widget1->show();
        ui->frame_Widget2->show();
        ui->frame_Widget2_3->show();


        int commentedvar[4]= {0};
        int commentCourse = 0;

        if(releasetView != NULL)
            delete releasetView;

        if(PieReleasetView != NULL)
            delete PieReleasetView;
        QString January= "January", February= "February", March = "March", April = "April", May="May", June = "June";
        QString July = "July", August = "August", September = "September", October = "October", November = "November", December = "December";

        QStringList Months;
        Months.append(January);
        Months.append(February);
        Months.append(March);
        Months.append(April);
        Months.append(May);
        Months.append(June);
        Months.append(July);
        Months.append(August);
        Months.append(September);
        Months.append(October);
        Months.append(November);
        Months.append(December);

        time_t t = time(NULL);
        tm* timePtr = localtime(&t);

        int MonthOfTheYear = timePtr->tm_mon;

        int counter = 0;
        switch (MonthOfTheYear)
        {
        case 0:
            counter = 9;
            break;
        case 1:
            counter = 10;
            break;
        case 2:
            counter = 11;
            break;

        default:
            counter = MonthOfTheYear - 3;
        }

        QStringList categories;
        QStringList Commentss = connection->commented_Course();
        for(int var = 0;var < 4; var++)
        {
            if(counter > 11)
                counter = 0;
            for(int i = 0; i < Commentss.size(); i++)
            {
                if(counter == (Commentss[i].toInt()-1))
                {
                    commentedvar[var]++;
                    commentCourse++;
                }

            } //end nested for loop
            categories<<Months[counter];
            counter++;
        }

        //step 1 create our barset objects or pointers
        QBarSet *set0 = new QBarSet("Comments");

        *set0 << commentedvar[0] << commentedvar[1]<< commentedvar[2]<< commentedvar[3];
        //*set1 << 3 << 4;

        //step 2
        QBarSeries *series = new QBarSeries();
        series->append(set0);

        //step 3 create Qchart object
        QChart *Barchart = new QChart();
        Barchart->addSeries(series);
        Barchart->setTitle("Comment Graph");
        Barchart->setAnimationOptions(QChart::SeriesAnimations);

        //step4
        QBarCategoryAxis *axis = new QBarCategoryAxis();
        axis->append(categories);
        Barchart->createDefaultAxes();
        Barchart->setAxisX(axis, series);

        //step5: Add a legend to our chart
        Barchart->legend()->setVisible(true);
        Barchart->legend()->setAlignment(Qt::AlignBottom);

        //step6: view our chart and we will turn on antialiasing for the chartView

        QChartView *BarchartView = new QChartView(Barchart);
        BarchartView->setRenderHint(QPainter::Antialiasing);

        releasetView = BarchartView;

        //show charts for comment
        ui->commentGraph_GridLayout->addWidget(BarchartView);


        QStringList allCourses = connection->pending_completed();

        ui->widget1courseComplete->setText(allCourses[1]);
        ui->widget2TitleCoursePending->setText(allCourses[0]);
        ui->widget2TitleCourseCommented->setText(QString::number(commentCourse));

        //PieChart
        QPieSeries *Pieseries = new QPieSeries();
        Pieseries->append("Pending Courses", allCourses[0].toInt());
        Pieseries->append("Complete", allCourses[1].toInt());

        QPieSlice *PieSlice2 = Pieseries->slices().at(0);
        PieSlice2->setExploded();
        PieSlice2->setLabelVisible();
        PieSlice2->setPen(QPen(Qt::darkBlue, 2));
        QPieSlice *PieSlice = Pieseries->slices().at(1);
        PieSlice->setExploded();
        PieSlice->setLabelVisible();
        PieSlice->setPen(QPen(Qt::darkGreen, 2));
        PieSlice->setPen(QPen(Qt::darkGreen, 1));
        PieSlice->setBrush(Qt::green);

        QChart *PieChart = new QChart();
        PieChart->addSeries(Pieseries);
        PieChart->setTitle("Completed Course Vs Pending Course");
        PieChart->legend()->hide();
        QChartView *PieChartView = new QChartView(PieChart);
        PieChartView->setRenderHint(QPainter::Antialiasing);

        PieReleasetView = PieChartView;
        //show Pie chart
        ui->pending_complete_Graph_GridLayout->addWidget(PieChartView);
        break;
    }
    case 2:
    {
        ui->frame_Widget1->hide();
        ui->frame_Widget2->hide();
        ui->frame_Widget2_3->hide();

        if(PieReleasetView != NULL)
        {
            delete PieReleasetView;
            PieReleasetView = NULL;
        }

        //ui->pending_complete_Graph_GridLayout->hide();
        if( releasetView != NULL)
        {
            delete releasetView;
            releasetView = NULL;
        }

        QStringList nameCourse;
        QStringList ratings;
        ratings.append("Ugly");
        ratings.append("Bad");
        ratings.append("Fair");
        ratings.append("Good");
        ratings.append("Excellent");

        QStringList *categories;
        QBarCategoryAxis *axisX = new QBarCategoryAxis();

        QSqlQuery test = connection->getRatingComment();
        QBarSeries *series = new QBarSeries();
        for(int a = 0; a < nameCourse.size(); a++)
        {
            nameCourse[a] = "";
        }
        if (test.size() > 0)
        {
            while(test.next())
            {
                QBarSet *set0 = new QBarSet(test.value(0).toString());
                categories = new QStringList;
                int countCourses[15] = {0};
                int counterLec = 0;

                for (int var = 0; var < ratings.size(); ++var)
                {
                    categories->append(ratings[var]);
                    QSqlQuery data = connection->getRatingComment(test.value(0).toString(), ratings[var]);
                    if(data.size() > 0)
                    {
                        while(data.next())
                        {
                            countCourses[var] = data.value(0).toInt();
                            qDebug()<<countCourses[var]<<" aki";
                            counterLec++;
                        }
                    }
                    else
                    {
                        countCourses[var] = 0;
                    }
                }
                qDebug()<<test.value(0).toString();
                qDebug()<<test.value(1).toString();
                *set0 << countCourses[0] << countCourses[1] << countCourses[2] << countCourses[3] << countCourses[4];
                series->append(set0);
                axisX->append(*(categories));
            }

        }

        QChart *chart = new QChart();
        chart->addSeries(series);
        chart->setTitle("Rating Graph");
        chart->setAnimationOptions(QChart::SeriesAnimations);


        chart->addAxis(axisX, Qt::AlignBottom);
        series->attachAxis(axisX);

        QValueAxis *axisY = new QValueAxis();
        axisY->setRange(0,15);
        chart->addAxis(axisY, Qt::AlignLeft);
        series->attachAxis(axisY);
        chart->legend()->setVisible(true);
        chart->legend()->setAlignment(Qt::AlignBottom);

        QChartView *chartView = new QChartView(chart);
        chartView->setRenderHint(QPainter::Antialiasing);


        releasetView = chartView;

        //show charts for comment
         ui->pending_complete_Graph_GridLayout->addWidget(chartView);
         break;


    }
    case 3:
    {

        if(PieReleasetView != NULL)
        {
            delete PieReleasetView;
            PieReleasetView = NULL;
        }
        if( releasetView != NULL)
        {
            delete releasetView;
            releasetView = NULL;
        }

        QStringList totalUser = connection->getTotalUsersPieChart();
        QPieSeries *Pieseries = new QPieSeries();
        Pieseries->append("Students", totalUser[0].toInt());
        Pieseries->append("Lecturers", totalUser[1].toInt());

        QPieSlice *PieSlice2 = Pieseries->slices().at(0);
        PieSlice2->setExploded();
        PieSlice2->setLabelVisible();
        PieSlice2->setPen(QPen(Qt::darkBlue, 2));
        QPieSlice *PieSlice = Pieseries->slices().at(1);
        PieSlice->setExploded();
        PieSlice->setLabelVisible();
        PieSlice->setPen(QPen(Qt::darkGreen, 2));
        PieSlice->setPen(QPen(Qt::darkGreen, 1));
        PieSlice->setBrush(Qt::green);

        QChart *PieChart = new QChart();
        PieChart->addSeries(Pieseries);
        PieChart->setTitle("Total Student Vs Total Lecturer");
        PieChart->legend()->hide();
        QChartView *PieChartView = new QChartView(PieChart);
        PieChartView->setRenderHint(QPainter::Antialiasing);

        PieReleasetView = PieChartView;
        //show Pie chart
        ui->pending_complete_Graph_GridLayout->addWidget(PieChartView);

        ui->widget1Title->setText("Total Students");
        ui->widget2Title->setText("Total Lecturers");
        ui->widget2Title_5->setText("Total Users");

        ui->widget1courseComplete->setText(totalUser[0]);
        ui->widget2TitleCoursePending->setText(totalUser[1]);

        int totalUserss = totalUser[0].toInt();
        totalUserss += totalUser[1].toInt();

        ui->widget2TitleCourseCommented->setText(QString::number(totalUserss));

        ui->frame_Widget1->show();
        ui->frame_Widget2->show();
        ui->frame_Widget2_3->show();
        break;


    }

    }


    //Navigate tho Dashboard Page
    ui->stackedWidgetPages->setCurrentIndex(0);
}

//slot for the Program Sequence Button
void sgsApp::on_viewStudentProgramSequence_Button_clicked()
{

    programSequenceList();  //calls function  programSequenceList()
    ui->stackedWidgetPages->setCurrentIndex(2);     //stacked widget is moved to page 3
}

//Generating the Program Sequence QTableWidget
void sgsApp::programSequenceList()
{
    qDebug()<<connection->getRole();

    while (ui->programSequenceTableWidget->rowCount() > 0)  //checks if tableWidget of Porgram sequence is no 0 or less
    {
        ui->programSequenceTableWidget->removeRow(0);       //removes row
    }


    QSqlQuery programCourses ;
    QStringList programSeqInfo;

    bool role = (connection->getRole() == "2" || connection->getRole() == "3");     //role is assigned to true if User's UserRole is equal to 2 or 3

    //administration_LineIsnotEmpty is iassigned to true if role is true and student search is not empty or if user's UserRole is not equal to 2 or 3
    bool administration_LineIsnotEmpty = ((role && !(ui->studentSearchLineEdit->text().isEmpty())) || !(connection->getRole() == "2" || connection->getRole() == "3" ) );


    //  bool role = (connection->getRole() == "2" || connection->getRole() == "3");
    if (role)   //checks if role is true
    {
        //hides and shows specific features for the admin and lecturer
        ui->addCourseFrame->hide();
        ui->AddProgramSequenceFormTitle_2->show();
        ui->studentSearchButton->show();
        ui->studentSearchLineEdit->show();
    }

    else
    {
        //hides and shows features for the student
        ui->addCourseFrame->show();
        ui->AddProgramSequenceFormTitle_2->hide();
        ui->studentSearchButton->hide();
        ui->studentSearchLineEdit->hide();

    }

    if ( role && !(ui->studentSearchLineEdit->text().isEmpty()))  //checks if role is true and student search line edit is not empty
    {

        QString studentID = ui->studentSearchLineEdit->text();      //studentId Qstring is assigned to the user's search line edit
        //QString studentID = ui->studentSearchLineEdit->text();

        qDebug()<<"ENTERDD TRUE"<<studentID;
        programCourses =  connection->getStudentsCourses(studentID);
        if(programCourses.size() > 0 )
            programSeqInfo = connection->getSequenceName();     //QstringList programSeqInfo is assigned to the returned value of the function getSequenceName() from the databaseconnection class
        else
        {
            QMessageBox::critical(NULL,"NO STUDENT FOUND ON DATABASE","NO SUCH STUDENT WAS FOUND ON THE DATABASE, PLEASE CHECK THAT THE STUDENT ID IS A VALID ONE!");

        }
    }

    else if (!(connection->getRole() == "2" || connection->getRole() == "3" ))
    {
        programCourses   = connection->getStudentsCourses();
        programSeqInfo = connection->getSequenceName(); //programSeqInfo is assigned to the returned value which is a QstringList that includes programseuquence name and faculty name
    }

    if(programSeqInfo.size() > 0 )
        if (administration_LineIsnotEmpty) //checks if administration_LineIsnotEmpty is true
        {
            ui->programSequenceProgramName->setText(programSeqInfo[0]); //programSequenceProgramName's text is assigned to the first value fo the QStringList programSeqInfo

            ui->programSequenceFacultyName->setText(programSeqInfo[1]); // programSequenceFacultyName's text is assigned to the second value of the QStringList programSeqInfo

            ui->programSequenceTableWidget->setColumnCount(7);
            ui->programSequenceTableWidget->setStyleSheet("background:#f1f1f1;color:#333;"); //sets the style for the program sequence table widget

            QStringList header;
            header << "Code"<< "Course Name" <<"Credits" << "Grade" <<"Pre-requisites" << "Semester" << "Year";     //Qstring List header recieves the header format for the table

            ui->programSequenceTableWidget->setHorizontalHeaderLabels(header);  //programSequenceTableWidget header format implemented
            //sets the style for header of the table
            ui->programSequenceTableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section {background:#333;height:30px; color:#fff;}");

            ui->programSequenceTableWidget->setAlternatingRowColors(true);
            ui->programSequenceTableWidget->setStyleSheet("alternate-background-color: #eee9e9; color:#333;");

            int rowCount = 0;

            for(; programCourses.next();)
            {
                //sets the columns for the table widget
                ui->programSequenceTableWidget->insertRow(rowCount);        //insert row for the table
                ui->programSequenceTableWidget->setColumnWidth(0,90);
                ui->programSequenceTableWidget->setColumnWidth(1,270);      //sets the second column for the table
                ui->programSequenceTableWidget->setColumnWidth(2,60);
                ui->programSequenceTableWidget->setColumnWidth(3,90);
                ui->programSequenceTableWidget->setColumnWidth(4,480);
                ui->programSequenceTableWidget->setColumnWidth(5,70);
                ui->programSequenceTableWidget->setColumnWidth(6,68);

                //a List of QTableWidgetItems created on the heap
                QTableWidgetItem *courseCode = new QTableWidgetItem;        //course code item implemented inside the heap
                QTableWidgetItem *courseName = new QTableWidgetItem;
                QTableWidgetItem *credits = new QTableWidgetItem;
                QTableWidgetItem *grade = new QTableWidgetItem;
                QTableWidgetItem *prerequisites = new QTableWidgetItem;
                QTableWidgetItem *semester = new QTableWidgetItem;
                QTableWidgetItem *year = new QTableWidgetItem;      //new year table widget item created inside the heap

                courseCode->setText(programCourses.value(0).toString());        //course code recieves the value of the QStringList programCourses first value
                courseName->setText(programCourses.value(1).toString());
                credits->setText(programCourses.value(2).toString());
                if (programCourses.value(3).toString().isEmpty())       //checks if value 3 of the programCourses is empty
                    grade->setText("Pending");
                else
                    grade->setText(programCourses.value(3).toString());     //grade's text is assigned to the value 3 of programCourses


                prerequisites->setText(programCourses.value(4).toString());     //prerequisites's text is assigned to programCourses first value
                semester->setText(programCourses.value(5).toString());
                year->setText(programCourses.value(6).toString());

                ui->programSequenceTableWidget->setItem(rowCount,0,courseCode); //set first item to the table Widget which is the course code
                ui->programSequenceTableWidget->setItem(rowCount,1,courseName);
                ui->programSequenceTableWidget->setItem(rowCount,2,credits);
                ui->programSequenceTableWidget->setItem(rowCount,3,grade);
                ui->programSequenceTableWidget->setItem(rowCount,4,prerequisites); //set fourth item to the table Widget which is the prerequisites
                ui->programSequenceTableWidget->setItem(rowCount,5,semester);
                ui->programSequenceTableWidget->setItem(rowCount,6,year);

                rowCount++;
                qDebug()<<"ROWSSS: "<<rowCount<< " HERE";
            }

        }
}

//slot for view courses button
void sgsApp::on_viewCourses_Button_clicked()
{

    //Navigate to View Course Page
    ui->stackedWidgetPages->setCurrentIndex(1);     //stacked widget page moves to second page

    //Function to display view course table
    viewCoursesTable();     //call function viewcoursetable
}

//function viewcoursetable
void sgsApp::viewCoursesTable()
{

    while (ui->viewCoursesTableWidget->rowCount() > 0) //checks if viewCoursesTableWidget is greater than 0
    {
        ui->viewCoursesTableWidget->removeRow(0);
    }

    QSqlQuery courses = connection->getStudentsCourses();  //courses is assigned to the returned value of getStudentsCourses() function



    ui->viewCoursesTableWidget->setColumnCount(6);
    ui->viewCoursesTableWidget->setStyleSheet("background:#f1f1f1;color:#333;");

    QStringList header;
    header << "Code"<< "Course Name" <<"Credits" << "Semester" << "Status" << "Comments";   //header recieves the column name for the table

    ui->viewCoursesTableWidget->setHorizontalHeaderLabels(header);  //header is placed horizontal
    ui->viewCoursesTableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section {background:#333;height:30px; color:#fff;}");

    ui->viewCoursesTableWidget->setAlternatingRowColors(true);
    ui->viewCoursesTableWidget->setStyleSheet("alternate-background-color: #eee9e9; color:#333;");

    int rowCount = 0;

    for(;courses.next() ; ){

        //inserts row and column for the viewTableWdiget table
        ui->viewCoursesTableWidget->insertRow(rowCount);
        ui->viewCoursesTableWidget->setColumnWidth(0,85);
        ui->viewCoursesTableWidget->setColumnWidth(1,195);
        ui->viewCoursesTableWidget->setColumnWidth(2,70);
        ui->viewCoursesTableWidget->setColumnWidth(3,80);
        ui->viewCoursesTableWidget->setColumnWidth(4,100);
        ui->viewCoursesTableWidget->setColumnWidth(5,108);


        //create QTableWidgetItems for the table
        QTableWidgetItem *courseCode = new QTableWidgetItem;
        QTableWidgetItem *courseName = new QTableWidgetItem;
        QTableWidgetItem *credits = new QTableWidgetItem;
        QTableWidgetItem *semester = new QTableWidgetItem;
        QTableWidgetItem *status = new QTableWidgetItem;
        //QTableWidgetItem *comments = new QTableWidgetItem;

        courseCode->setText(courses.value(0).toString()); //course code is assigned to the first value of Courses
        courseName->setText(courses.value(1).toString());
        credits->setText(courses.value(2).toString());
        semester->setText(courses.value(5).toString()); //semester is assigned to the sixth value of Courses


        if (courses.value(3).toString().isEmpty())      //checks if courses' third value is empty
            status->setText("Pending!");
        else
            status->setText("Complete: "+ courses.value(3).toString());     //status's text is assigned to "complete" along with the fourth value of the query Courses

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
    while (ui->lecturerCoursesListTableWidget->rowCount() > 0)      //runs while lecturerCoursesListTableWidget is greater than 0
    {
        ui->lecturerCoursesListTableWidget->removeRow(0);
    }
    ui->lecturerCoursesListTableWidget->setColumnCount(5);      //sets 5 columns
    ui->lecturerCoursesListTableWidget->setStyleSheet("background:#f1f1f1;color:#333;");

    QStringList header;
    header << "Course Name"<< "Credit" << "Pre-requisites" <<"Semester" << "Year";  //header recieves the heading of all columns
    ui->lecturerCoursesListTableWidget->setHorizontalHeaderLabels(header); //sets the header horizontal
    ui->lecturerCoursesListTableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section {background:#333;height:30px; color:#fff;}");

    ui->lecturerCoursesListTableWidget->verticalHeader()->setVisible(false);


    ui->lecturerCoursesListTableWidget->setAlternatingRowColors(true);
    ui->lecturerCoursesListTableWidget->setStyleSheet("alternate-background-color: #eee9e9; color:#333;");

    int rowCount = 0;
    QSqlQuery lectureCourses = lecture->getLecturerCourses(*(connection));       //lectureCourses is assigned to the returned value of the function getLecturerCourses(*(connection))

    for(; lectureCourses.next();)
    {
        ui->lecturerCoursesListTableWidget->insertRow(rowCount); //creates row

        // sets the column for the lecturerCoursesListTableWidget table
        ui->lecturerCoursesListTableWidget->setColumnWidth(0,250);
        ui->lecturerCoursesListTableWidget->setColumnWidth(1,110);
        ui->lecturerCoursesListTableWidget->setColumnWidth(2,375);
        ui->lecturerCoursesListTableWidget->setColumnWidth(3,100); //sets the fourth column for the table widget
        ui->lecturerCoursesListTableWidget->setColumnWidth(4,180);

        //List of all the QTableWidgetItem for the table widget
        QTableWidgetItem *courseName = new QTableWidgetItem;
        QTableWidgetItem *credits = new QTableWidgetItem;
        QTableWidgetItem *prerequisites = new QTableWidgetItem;
        QTableWidgetItem *semester = new QTableWidgetItem;
        QTableWidgetItem *year = new QTableWidgetItem;      //year is created inside the heap


        courseName->setText(lectureCourses.value(0).toString());        //courseName's text is assigned to the first value of lectureCourses
        credits->setText(lectureCourses.value(1).toString());
        prerequisites->setText(lectureCourses.value(2).toString());
        semester->setText(lectureCourses.value(3).toString());
        year->setText(lectureCourses.value(4).toString());          //year's text is assigned to the fifth value of lectureCourses


        //insert the each item to the lecturerCoursesListTableWidget table widget
        ui->lecturerCoursesListTableWidget->setItem(rowCount,0,courseName);
        ui->lecturerCoursesListTableWidget->setItem(rowCount,1,credits);
        ui->lecturerCoursesListTableWidget->setItem(rowCount,2,prerequisites);
        ui->lecturerCoursesListTableWidget->setItem(rowCount,3,semester);
        ui->lecturerCoursesListTableWidget->setItem(rowCount,4,year);       //last item passed to the table is year

        rowCount++;
    }


}

void sgsApp::on_lecturerCoursesListTableWidget_cellClicked(int row, int column)
{
    QString courseName = ui->lecturerCoursesListTableWidget->item(row,0)->text();       //courseName recieves the lecturerCoursesListTableWidget first item
    QString credits =  ui->lecturerCoursesListTableWidget->item(row,1)->text();
    QString semester = ui->lecturerCoursesListTableWidget->item(row,3)->text();
    QString year = ui->lecturerCoursesListTableWidget->item(row,4)->text();     //year recieves the lecturerCoursesListTableWidget fourth item

    //QLine Edit List
    ui->updateCourseName->setText(courseName);      //Line Edit updateCourseName's text is assigned coursename's value
    ui->updatePrerequisites->setText(credits);
    ui->updateSemester->setText(semester);
    ui->updateYear->setText(year);          //Line Edit updateYear's text is assigned year's value
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
    QString courseName = ui->viewCoursesTableWidget->item(row,1)->text();  //courseName is assigned to the first item of viewCoursesTableWidget
    QString status =  ui->viewCoursesTableWidget->item(row,4)->text();
    ui->courseViewCourseTable->setText(courseName);
    ui->pendingViewCourseTable->setText(status);            // pendingViewCourseTable's text recieves value status

    qDebug()<< ui->viewCoursesTableWidget->item(row,4)->text() ;
    qDebug()<<( ui->viewCoursesTableWidget->item(row,4)->text() != "Pending!");
    if(( ui->viewCoursesTableWidget->item(row,4)->text() != "Pending!"))        //checks viewCoursesTableWidget item is not equal to "Pending"
    {
        QStringList commentSec = connection->getComment(ui->viewCoursesTableWidget->item(row,0)->text()); //commentSec is assigned to the returned value of function getComment(ui->viewCoursesTableWidget->item(row,0)->text())

        ui->commentTimeStapViewCourseTable->setText(commentSec[1]);
        ui->ratingViewCourseTable->setText(commentSec[2]);
        ui->userCommentViewCourseTable->setText(commentSec[0]);     //userCommentViewCourseTable receieves the first value of commentSec QstringList



    }
    else
    {
        ui->commentTimeStapViewCourseTable->setText(" ");       //commentTimeStapViewCourseTable's text is cleared
        ui->ratingViewCourseTable->setText(" ");
        ui->userCommentViewCourseTable->setText(" ");

    }



}


void sgsApp::on_programSequenceTableWidget_cellClicked(int row, int column)
{
    QString courseCode = ui->programSequenceTableWidget->item(row,0)->text();       //courseCode recieves programSequenceTableWidget item
    QString courseName =  ui->programSequenceTableWidget->item(row,1)->text();
    QString credits = ui->programSequenceTableWidget->item(row,2)->text();
    QString prerequisites = ui->programSequenceTableWidget->item(row,4)->text();
    QString semester = ui->programSequenceTableWidget->item(row,5)->text();
    QString year = ui->programSequenceTableWidget->item(row,6)->text();
    QSqlQuery lecture = connection->getLectureName(courseCode);     //lecture is assigned to the returned value of function getLectureName(courseCode);

    ui->courseCode_CourseGradeLable->setText(courseCode);
    ui->courseName_courseGradeLable->setText(courseName);
    ui->credit_CourseGradeLable->setText(credits);
    ui->allPrerequisites_CourseGradeLable->setText(prerequisites);  //sets allPrerequisites_CourseGradeLable's text from prerequisites's value
    ui->semester_CourseGradeLable->setText(semester);
    ui->courseYear_CourseGradeLable->setText(year);

    ui->addLectureComboBox->clear();        //clear addLectureComboBox combo box
    while (lecture.next())
    {
        QString lectureName = lecture.value(0).toString();      //lectureName is assigned to the first value of sqlquery lecture
        lectureName.append(" ");
        lectureName = lectureName.append(lecture.value(1).toString());
        ui->addLectureComboBox->addItem(lectureName);       //adds item to addLectureComboBox
    }

}

void sgsApp::on_updateCourse_pushButton_clicked()
{

    QString courseCode =  ui->courseCode_CourseGradeLable->text();      //courseCode is assigned to courseCode_CourseGradeLable's text
    QString courseName =  ui->courseName_courseGradeLable->text();
    QString credits = ui->credit_CourseGradeLable->text();
    QString grade = ui->addCourseGradecomboBox->currentText();
    QString rating = ui->addCourseRatingcomboBox->currentText();            //rating is assigned addCourseRatingcomboBox current text
    QString prerequisites = ui->allPrerequisites_CourseGradeLable->text();
    QString semester = ui->semester_CourseGradeLable->text();
    QString year =  ui->courseYear_CourseGradeLable->text();
    QString comment =  ui->addCourseComment_plainTextEdit->toPlainText();

    QStringList list;
    list.append(courseCode);            //appends coursCode

    list.append(grade);         //appends grade to list QstringList

    list.append(rating);
    list.append(ui->addLectureComboBox->currentText());
    list.append(comment);






    bool checking = connection->setCourseGrade(list);       //checking is assigned to the returned value of function setCourseGrade(list)

    if (checking)               //checks if checking is true
        programSequenceList();  //calls programSequenceList() function


}


void sgsApp::on_disableUser_Button_2_clicked()
{

}

void sgsApp::on_disableUser_Button_clicked()
{
    //create a new instance of reg
    active_deactivate = new Activate_DeactivateUser(this);
    active_deactivate->ActivateDeactivateUserAccount(connection);

    //Modal Approach
    active_deactivate->setModal(true);
    active_deactivate->show();
}

//View Comments Page
void sgsApp::on_viewComments_Button_clicked()
{  
    ui->stackedWidgetPages->setCurrentIndex(4);  //Navigate to View Course Page
}

void sgsApp::viewSearchCourseCommentTable()
{

    while (ui->searchResultCourseCommentTableWidget->rowCount() > 0)  //runs while searchResultCourseCommentTableWidget is greater than 0
    {
        ui->searchResultCourseCommentTableWidget->removeRow(0);
    }

    QString courseName = ui->commentsSearchCourseCodelineEdit->text();
    QSqlQuery courses = connection->getLecturesByCourse(courseName);        //courses is assigned to the returned value of function getLecturesByCourse(courseName)


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
        ui->searchResultCourseCommentTableWidget->insertRow(rowCount);          //inserts row to table widget

        //set columns for table widget
        ui->searchResultCourseCommentTableWidget->setColumnWidth(0,75);
        ui->searchResultCourseCommentTableWidget->setColumnWidth(1,200);
        ui->searchResultCourseCommentTableWidget->setColumnWidth(0,150);


        //List of QTableWidgetItem created inside the heap for the table
        QTableWidgetItem *courseCode = new QTableWidgetItem;
        QTableWidgetItem *courseName = new QTableWidgetItem;
        QTableWidgetItem *lecturer = new QTableWidgetItem;

        courseCode->setText(courses.value(0).toString());
        courseName->setText(courses.value(1).toString());        //courseName is assigned to the second vlue of the sqlquery courses
        lecturer->setText(courses.value(2).toString());

        //sets the items to searchResultCourseCommentTableWidget table widget
        ui->searchResultCourseCommentTableWidget->setItem(rowCount,0,courseCode);
        ui->searchResultCourseCommentTableWidget->setItem(rowCount,1,courseName);
        ui->searchResultCourseCommentTableWidget->setItem(rowCount,2,lecturer);
    }
}

void sgsApp::on_filterSearchButton_clicked()
{
    QString courseCode = ui->CourseCodelineEdit->text();        //courseCode is assigned to the CourseCodelineEdit's text
    QSqlQuery info = connection->getLectureCourses(courseCode);

    while(info.next())
    {
        ui->courseResultInfoLabel->setText(info.value(0).toString());   //courseResultInfoLabel receives the first value of sqlquery info
    }
}

void sgsApp::on_addButton_clicked()
{
    if (ui->courseResultInfoLabel->text().isEmpty())        //checks if courseResultInfoLabel is empty
    {
        QMessageBox::warning(NULL,"We encounter an Error : ","Please add a course before proceeding to the next step");

    }
    else
    {
        QString courseCode = ui->CourseCodelineEdit->text();
        QSqlQuery info = connection->getLectureCourses(courseCode);     //info is asigned to the returned value of function getLectureCourses(courseCode);
        QString credit;
        QString prerequisites;
        QString semester;

        while(info.next())
        {
            ui->updateCourseName->setText(info.value(0).toString());
            ui->updatePrerequisites->setText(prerequisites = info.value(2).toString()); //updatePrerequisites recieves the value of prerequisites
        }

    }

}

//slot for the add course button
void sgsApp::on_addCourseButton_clicked()
{
    if (ui->updateYear->text().isEmpty() || ui->updateSemester->text().isEmpty())
    {
        QMessageBox::warning(NULL,"We encounter an Error : ","Please add a the semester and year we process your data");

    }

    else
    {
        QString courseID = ui->CourseCodelineEdit->text();      //courseID is assigned to CourseCodelineEdit's value
        QString year = ui->updateYear->text();
        year.append("-");
        year.append(ui->updateSemester->text());
        connection->addLectureCourse(courseID,year);     //calls function addLectureCourse(courseID,year) from the databaseconnection class
    }
    viewLecturerCoursesTable();     //calls viewLecturerCoursesTable() function
}

//function for course comment
void sgsApp::courseComments(int row)
{

    if((holder!=NULL))
        delete holder; //release layout from heap

    int var = 0;
    while (ArrayDeleteLater[var] != NULL)
    {
        delete ArrayDeleteLater[var];
        ArrayDeleteLater[var] = NULL;       //ArrayDeleteLater Array is assigned to Null

        var++;
    }

    QString courseCode = ui->searchResultCourseCommentTableWidget->item(row,0)->text();
    QString lectureName =  ui->searchResultCourseCommentTableWidget->item(row,2)->text();
    qDebug()<<courseCode <<"    "<<lectureName;
    //Creating a grid layout...
    layout=new QGridLayout(this);

    QSqlQuery comments = connection->getComments(courseCode,lectureName);       //comments is assigned to the returned value of function getComments(courseCode,lectureName)
    holder = layout;


    int counter = 0 ;

    //running a loop to add the desired components to the scroll area...
    for(;comments.next();)
    {
        QString date= "Posted: " + comments.value(0).toString() + " ";
        QString commentText =comments.value(1).toString() ;
        QString rate= "Rating: "+ comments.value(2).toString() + " ";           //rate is assigned to string "Rating" and third value of comments



        //Label for Comment Body
        QLabel  * comment = new QLabel(date+"\t\t\t\t\t\t\t" +rate+"\n\n" + commentText);
        comment->setStyleSheet("font-size:12px;line-height:24px;background:#fff; border-radius: 5px; padding:15px; margin-bottom:20px; color:#999;");


        layout->addWidget(comment);
        ArrayDeleteLater[counter] = comment;
        counter ++ ;
    }


    //sets Layout to ScrollArea
    ui->scrollAreaWidgetContents->setLayout(layout);
    clickedCell = true;         //clickedCell sets to true




}


void sgsApp::on_commentSearchCourseCODEButton_clicked()
{
    QString courseName = ui->commentsSearchCourseCodelineEdit->text();      //courseName is assigned to the value of commentsSearchCourseCodelineEdit
    if (courseName.isEmpty())
    {
        QMessageBox::warning(NULL,"Error, No course Input", "We cannot Search the course without you entering a course Name:");

    }
    else {

        //Display search Table
        viewSearchCourseCommentTable();     //calls function  viewSearchCourseCommentTable() if courseName is not empty
    }
}


void sgsApp::on_searchResultCourseCommentTableWidget_cellClicked(int row, int column)
{    qDebug()<<"YOU click the cell";

     courseComments(row);

}

//Add program Sequence Page
void sgsApp::on_AddProgramSequence_Button_clicked()
{
    ui->stackedWidgetPages->setCurrentIndex(5);
    ui->addCourseSequenceframe->hide();
    ui->draftTableWidget->hide();
    //enable LineEdit for Program Sequence ID,Name,faculty and year
    ui->idLineEdit->setEnabled(true);
    ui->seqNameLineEdit->setEnabled(true);
    ui->facultyLineEdit->setEnabled(true);
    ui->yearLineEdit->setEnabled(true);

    while (ui->draftTableWidget->rowCount() > 0)
    {
        ui->draftTableWidget->removeRow(0);
    }

    rowCount = 0;
}

//  Enabel add course form fillout sequence prog and faculty
void sgsApp::on_addCourseSequencepushButton_clicked()
{

    ui->draftTableWidget->show();
    //moving data from LindeEdit to Draft Form
    QString id = ui->idLineEdit->text();
    QString sequence = ui->seqNameLineEdit->text();
    QString faculty = ui->facultyLineEdit->text();
    QString year = ui->yearLineEdit->text();

    if ( !(id.isEmpty() || sequence.isEmpty() || faculty.isEmpty() || year.isEmpty()))
    {
        ui->addCourseSequenceframe->show();
        ui->draftProgSequenceFrame->show();

        //disable LineEdit for Program Sequence ID,Name,faculty and year
        ui->idLineEdit->setEnabled(false);
        ui->seqNameLineEdit->setEnabled(false);
        ui->facultyLineEdit->setEnabled(false);
        ui->yearLineEdit->setEnabled(false);

        ui->draftIDLineEdit->setText(id);
        ui->draftSeqLineEdit->setText(sequence);
        ui->draftFacultyLineEdit->setText(faculty);
        ui->draftYearLineEdit->setText(year);

        //Create Table
        draftTable();

    }
    else
    {
        QMessageBox::critical(this,"ERROR","Please fill in the Missing data for the Program Sequence being added ");
    }

}

//Adding Course to Sequence Table
void sgsApp::on_updateCourse_pushButton_3_clicked()
{
    //    //Create Table
    //    draftTable();

    QString code = ui->addCodeLineEdit->text();
    QString courseName = ui->addNameLineEdit->text();
    QString credits = ui->addCreditLineEdit->text();
    QString prerequisites = ui->addPrerequisiteLineEdit->text();
    QString semester = ui->addSemesterLineEdit->text();
    if ( !(code.isEmpty() || courseName.isEmpty() || credits.isEmpty() || semester.isEmpty()))
    {

        QString code = ui->addCodeLineEdit->text();
        QString courseName = ui->addNameLineEdit->text();       //courseName recieves the user's addNameLineEdit text
        QString credits = ui->addCreditLineEdit->text();
        QString prerequisites = ui->addPrerequisiteLineEdit->text();


        for(int i=0; i<1;i++)
        {


            QTableWidgetItem *Code = new QTableWidgetItem;  //Credit created inside heap
            QTableWidgetItem *CourseName = new QTableWidgetItem;
            QTableWidgetItem *Credits = new QTableWidgetItem;
            QTableWidgetItem *Prerequisites = new QTableWidgetItem;
            QTableWidgetItem *Semester = new QTableWidgetItem;

            Code->setText(code);
            CourseName->setText(courseName);
            Credits->setText(credits);
            if(prerequisites.isEmpty())
                Prerequisites->setText("NONE");
            else
                Prerequisites->setText(prerequisites);
            Semester->setText(semester);



            ui->draftTableWidget->insertRow(rowCount);
            ui->draftTableWidget->setItem(rowCount,0,Code);
            ui->draftTableWidget->setItem(rowCount,1,CourseName);       //sets the QTableWidgetItem courseName to draftTableWidget
            ui->draftTableWidget->setItem(rowCount,2,Credits);
            ui->draftTableWidget->setItem(rowCount,3,Prerequisites);
            ui->draftTableWidget->setItem(rowCount,4,Semester);

            rowCount++;

            //clear lineEdit after submit
            ui->addCodeLineEdit->clear();
            ui->addNameLineEdit->clear();
            ui->addCreditLineEdit->clear();
            ui->addPrerequisiteLineEdit->clear();
        }
    }
    else
    {
        QMessageBox::critical(this,"ERROR","Please fill in the Missing for the Course being added ");
    }
}

//Generate draft Table
void sgsApp::draftTable()
{

    ui->draftTableWidget->setColumnCount(5);
    QStringList header;


    header <<"Code" <<  "Course Name"<< "Credits" << "Pre-requisites" << "Semester"; //list of column names


    ui->draftTableWidget->setHorizontalHeaderLabels(header);
    ui->draftTableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section {background:#333;height:30px; color:#fff;}");

    ui->draftTableWidget->verticalHeader()->setVisible(false);


    ui->draftTableWidget->setAlternatingRowColors(true);
    ui->draftTableWidget->setStyleSheet("alternate-background-color: #eee9e9; color:#333;");        //sets the style for draftTableWidget

    ui->draftTableWidget->setColumnWidth(1,200);

}

//slot for student search button
void sgsApp::on_studentSearchButton_clicked()
{
    programSequenceList();      //calls function programsequenceList()
    ui->stackedWidgetPages->setCurrentIndex(2);         //stackedWidgetPages moves to thrid page
}

void sgsApp::on_saveSequencepushButton_clicked()
{
    bool success = false;
    if(!(ui->draftTableWidget->rowCount() > 0))
    {
        QMessageBox::critical(this,"ERROR","Please add more course to this program Sequences, It can't go empty");
    }
    else
    {
        QString programSeqId = ui->draftIDLineEdit->text();
        QString programName = ui->draftSeqLineEdit->text();
        QString faculty = ui->draftFacultyLineEdit->text();
        QString Year = ui->draftYearLineEdit->text();

        QStringList courseCodes;
        QStringList courseName;
        QStringList credits;
        QStringList prerequisites;
        QStringList semester;

        qDebug()<<programSeqId<<"   "<<programName<< "   "<<faculty<<"   "<<Year;
        int size = ui->draftTableWidget->rowCount();

        int counter = 0;
        while (counter < size)
        {
            courseCodes.append(ui->draftTableWidget->item(counter,0)->text());
            courseName.append(ui->draftTableWidget->item(counter,1)->text());
            credits.append(ui->draftTableWidget->item(counter,2)->text());
            prerequisites.append(ui->draftTableWidget->item(counter,3)->text());
            semester.append(ui->draftTableWidget->item(counter,4)->text());
            counter++;
        }

       success =  connection->addProgramSequence(programSeqId,programName,faculty,Year,courseCodes,courseName,credits,prerequisites,semester);
    }


    if(success)
        QMessageBox::information(NULL,"SUCCESS","THE PROGRAM HAS SUCCESSFULLY BEING ADDED");
    else
    {
        QMessageBox::critical(NULL,"FAILED","Failed to add the program sequences you entered");
    }

}

void sgsApp::on_printReport_pushButton_clicked()        //print program sequenece for student
{
    //including library from QT
#if defined(QT_PRINTSUPPORT_LIB) && QT_CONFIG (printer)
    QPrinter printDev;
#if QT_CONFIG (printdialog)
    //Creating dialog for printing
    QPrintDialog dialog(&printDev, this);
    if (dialog.exec() == QDialog::Rejected)
        return;
#endif
#endif
}

void sgsApp::on_lecturePrintReport_pushButton_clicked() //print program sequence for lecturer
{
    //including library from QT
#if defined(QT_PRINTSUPPORT_LIB) && QT_CONFIG (printer)
    QPrinter printDev;
#if QT_CONFIG (printdialog)
    //Creating dialog for printing
    QPrintDialog dialog(&printDev, this);
    if (dialog.exec() == QDialog::Rejected)
        return;
#endif
#endif
}

void sgsApp::on_englishTranslationRadioButton_clicked() //radio button for english translation
{


    a->removeTranslator(translator); qDebug()<<"UNCLICKed";  //removes spanish  translation

}

void sgsApp::on_spanishTranslationRadioButton_clicked()     //radio button for spanish translaation
{

    a->installTranslator(translator); qDebug()<<"CLICKed";      //adds spansih translation
}
