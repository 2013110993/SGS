/********************************************************************************
** Form generated from reading UI file 'sgsapp.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SGSAPP_H
#define UI_SGSAPP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sgsApp
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidgetSGS;
    QWidget *loginScreen;
    QFrame *loginBox;
    QLineEdit *usernameInput;
    QLineEdit *passwordInput;
    QPushButton *signInButton;
    QPushButton *signUpButton;
    QPushButton *forgotPasswordButton;
    QLabel *label_4;
    QFrame *usernameIcon;
    QFrame *passwordIcon;
    QLabel *loginErrorLabel;
    QPushButton *passwordShowButton;
    QFrame *footerLogo;
    QFrame *frame_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *englishTranslationRadioButton;
    QRadioButton *spanishTranslationRadioButton;
    QWidget *Dashboard;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QFrame *Sidebar;
    QFrame *frame;
    QGroupBox *groupBox;
    QPushButton *dashboard_pushButton;
    QGroupBox *groupBox_2;
    QPushButton *viewComments_Button;
    QGroupBox *settingGroupBox;
    QPushButton *addInstitution_Button;
    QPushButton *addCourse_Button;
    QPushButton *addUser_Button;
    QPushButton *disableUser_Button;
    QPushButton *changePassword_Button;
    QPushButton *AddProgramSequence_Button;
    QPushButton *viewStudentProgramSequence_Button;
    QPushButton *viewCourses_Button;
    QPushButton *AddLecturerCourse_Button;
    QFrame *headBar;
    QPushButton *logoutButton;
    QLabel *userRoleLable_2;
    QPushButton *userIconTopBar;
    QLabel *userRoleLable;
    QFrame *topBarLogo;
    QLabel *usernameLable;
    QStackedWidget *stackedWidgetPages;
    QWidget *DashboardPage;
    QFrame *pageTitleCourseListPage_3;
    QLabel *pageNameLabel_4;
    QLabel *TMPlabel_5;
    QLabel *TMPlabel_6;
    QFrame *frame_Widget1;
    QLabel *icon1Widget1;
    QLabel *widget1Title;
    QLabel *widget1courseComplete;
    QFrame *frame_Widget2;
    QLabel *icon1Widget2;
    QLabel *widget2Title;
    QLabel *widget2TitleCoursePending;
    QFrame *frame_Widget2_2;
    QLabel *icon1Widget2_2;
    QLabel *widget2Title_2;
    QLabel *widget2TitleCoursePending_2;
    QFrame *frame_Widget2_3;
    QLabel *icon1Widget2_5;
    QLabel *widget2Title_5;
    QLabel *widget2TitleCoursePending_5;
    QFrame *frame_Widget2_5;
    QLabel *icon1Widget2_6;
    QLabel *widget2Title_6;
    QLabel *widget2TitleCoursePending_6;
    QWidget *CoursesPage;
    QTableWidget *viewCoursesTableWidget;
    QFrame *titleCourseListPage;
    QLabel *courseTitleViewCourseLabel;
    QLabel *courseStatusViewCourseLabel;
    QLabel *courseViewCourseTable;
    QLabel *pendingViewCourseTable;
    QLabel *programSequenceFacultyName_2;
    QLabel *courseCommentViewCourseLabel;
    QFrame *courseCommentListPage;
    QLabel *commentPostedViewCourseLabel;
    QLabel *ratingStatusViewCourseLabel;
    QLabel *commentTimeStapViewCourseTable;
    QLabel *ratingViewCourseTable;
    QLabel *userCommentViewCourseTable;
    QFrame *pageTitleCourseListPage;
    QLabel *pageNameLabel;
    QWidget *ViewProgramSequence;
    QTableWidget *programSequenceTableWidget;
    QLabel *programSequenceFacultyName;
    QLabel *programSequenceProgramName;
    QFrame *addCourseFrame;
    QLabel *AddProgramSequenceFormTitle;
    QPushButton *updateCourse_pushButton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *courseNameCourseGradeTagLable;
    QLabel *courseName_courseGradeLable;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QLabel *gradeCourseGradeTagLable;
    QComboBox *addCourseGradecomboBox;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_3;
    QLabel *gradeCourseGradeTagLable_2;
    QLabel *credit_CourseGradeLable;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_5;
    QLabel *prerequisitesCourseGradeTagLable;
    QLabel *allPrerequisites_CourseGradeLable;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_6;
    QLabel *gradeCourseGradeTagLable_3;
    QLabel *semester_CourseGradeLable;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_7;
    QLabel *yearCourseGradeTagLable;
    QLabel *courseYear_CourseGradeLable;
    QWidget *layoutWidget7;
    QVBoxLayout *verticalLayout_8;
    QLabel *ratingCourseGradeTagLable;
    QComboBox *addCourseRatingcomboBox;
    QWidget *layoutWidget8;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_2;
    QPlainTextEdit *addCourseComment_plainTextEdit;
    QWidget *layoutWidget9;
    QVBoxLayout *verticalLayout_10;
    QLabel *codeCourseGradeTagLable;
    QLabel *courseCode_CourseGradeLable;
    QWidget *layoutWidget10;
    QVBoxLayout *verticalLayout_11;
    QLabel *lecturerCourseGradeTagLable;
    QComboBox *addLectureComboBox;
    QPushButton *printReport_pushButton;
    QFrame *pageTitleCourseListPage_2;
    QLabel *pageNameLabel_3;
    QLabel *AddProgramSequenceFormTitle_2;
    QPushButton *studentSearchButton;
    QLineEdit *studentSearchLineEdit;
    QPushButton *lecturePrintReport_pushButton;
    QWidget *AddCourse;
    QFrame *pageTitleCourseListPage_4;
    QLabel *pageNameLabel_5;
    QLabel *addUpdateCourseWidget;
    QLabel *programSequenceFacultyName_3;
    QTableWidget *lecturerCoursesListTableWidget;
    QFrame *titleCourseListPage_2;
    QLabel *courseCodeLabel;
    QLabel *courseResultLabel;
    QLabel *pendingViewCourseTable_2;
    QLineEdit *CourseCodelineEdit;
    QPushButton *filterSearchButton;
    QLabel *courseResultInfoLabel;
    QPushButton *addButton;
    QFrame *frame_3;
    QFrame *titleCourseListPage_3;
    QLabel *courseResultLabe_4;
    QPushButton *addCourseButton;
    QLabel *updateCourseName;
    QLabel *courseResultLabe_6;
    QLabel *courseCodeLabel_6;
    QLabel *courseResultLabe_5;
    QLineEdit *updatePrerequisites;
    QLineEdit *updateSemester;
    QLineEdit *updateYear;
    QPushButton *filterSearchButton_4;
    QLabel *addUpdateCourseWidget_2;
    QWidget *ViewComments;
    QLabel *courseCommentsName;
    QFrame *pageTitleCourseListPage_5;
    QLabel *pageNameLabel_6;
    QLabel *searcCourseCodeWidget;
    QFrame *titleCourseListPage_5;
    QLabel *pendingViewCourseTable_3;
    QTableWidget *searchResultCourseCommentTableWidget;
    QPushButton *commentSearchCourseCODEButton;
    QLineEdit *commentsSearchCourseCodelineEdit;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *AddProgramSequence;
    QFrame *pageTitleCourseListPage_6;
    QLabel *pageNameLabel_2;
    QLabel *courseCommentsName_3;
    QFrame *frame_4;
    QLabel *idTagLable;
    QLineEdit *idLineEdit;
    QLineEdit *seqNameLineEdit;
    QLabel *sequenceNameTagLable_2;
    QLineEdit *facultyLineEdit;
    QLabel *facultyTagLable;
    QLineEdit *yearLineEdit;
    QLabel *yearTagLable;
    QPushButton *addCourseSequencepushButton;
    QFrame *addCourseSequenceframe;
    QLabel *idTagLable_5;
    QLineEdit *addCodeLineEdit;
    QLineEdit *addNameLineEdit;
    QLabel *idTagLable_6;
    QLineEdit *addCreditLineEdit;
    QLabel *idTagLable_7;
    QLabel *idTagLable_8;
    QLineEdit *addPrerequisiteLineEdit;
    QLabel *courseCommentsName_4;
    QPushButton *updateCourse_pushButton_3;
    QLineEdit *addSemesterLineEdit;
    QLabel *SemesterTagLable;
    QFrame *draftProgSequenceFrame;
    QLineEdit *draftYearLineEdit;
    QLineEdit *draftSeqLineEdit;
    QLineEdit *draftFacultyLineEdit;
    QLineEdit *draftIDLineEdit;
    QLabel *courseCommentsName_2;
    QTableWidget *draftTableWidget;
    QPushButton *saveSequencepushButton;

    void setupUi(QMainWindow *sgsApp)
    {
        if (sgsApp->objectName().isEmpty())
            sgsApp->setObjectName(QString::fromUtf8("sgsApp"));
        sgsApp->resize(1440, 900);
        sgsApp->setMinimumSize(QSize(1440, 900));
        sgsApp->setMaximumSize(QSize(1440, 900));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/Icon for Taskbar.png"), QSize(), QIcon::Normal, QIcon::Off);
        sgsApp->setWindowIcon(icon);
        sgsApp->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(sgsApp);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidgetSGS = new QStackedWidget(centralwidget);
        stackedWidgetSGS->setObjectName(QString::fromUtf8("stackedWidgetSGS"));
        stackedWidgetSGS->setGeometry(QRect(-3, -3, 1451, 911));
        stackedWidgetSGS->setStyleSheet(QString::fromUtf8("color:#fff;"));
        loginScreen = new QWidget();
        loginScreen->setObjectName(QString::fromUtf8("loginScreen"));
        loginScreen->setStyleSheet(QString::fromUtf8("background:url(:/images/background.jpg);\n"
"background-position:center;\n"
"background-repeat: no-repeat;"));
        loginBox = new QFrame(loginScreen);
        loginBox->setObjectName(QString::fromUtf8("loginBox"));
        loginBox->setGeometry(QRect(940, 250, 291, 331));
        loginBox->setMouseTracking(true);
        loginBox->setStyleSheet(QString::fromUtf8("border: 1px solid #8a1738;\n"
"border-radius:10px;"));
        loginBox->setFrameShape(QFrame::StyledPanel);
        loginBox->setFrameShadow(QFrame::Raised);
        usernameInput = new QLineEdit(loginBox);
        usernameInput->setObjectName(QString::fromUtf8("usernameInput"));
        usernameInput->setGeometry(QRect(60, 90, 201, 31));
        usernameInput->setMouseTracking(false);
        usernameInput->setStyleSheet(QString::fromUtf8("background:#fff;\n"
"color: #333;\n"
"border:0px; \n"
"border-top-right-radius:5px;\n"
"border-bottom-right-radius:5px;\n"
"border-top-left-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        passwordInput = new QLineEdit(loginBox);
        passwordInput->setObjectName(QString::fromUtf8("passwordInput"));
        passwordInput->setGeometry(QRect(60, 140, 181, 31));
        passwordInput->setStyleSheet(QString::fromUtf8("background:#fff;\n"
"color: #333;\n"
"border:0px; \n"
"border-top-right-radius:0px;\n"
"border-bottom-right-radius:0px;\n"
"border-top-left-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        passwordInput->setEchoMode(QLineEdit::Password);
        signInButton = new QPushButton(loginBox);
        signInButton->setObjectName(QString::fromUtf8("signInButton"));
        signInButton->setGeometry(QRect(30, 190, 231, 32));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        signInButton->setFont(font);
        signInButton->setLayoutDirection(Qt::LeftToRight);
        signInButton->setStyleSheet(QString::fromUtf8("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons White/Icons/White/Single Arrow RIGHT.png"), QSize(), QIcon::Normal, QIcon::Off);
        signInButton->setIcon(icon1);
        signUpButton = new QPushButton(loginBox);
        signUpButton->setObjectName(QString::fromUtf8("signUpButton"));
        signUpButton->setGeometry(QRect(20, 280, 113, 32));
        signUpButton->setStyleSheet(QString::fromUtf8("border:0px; color:#fff;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons White/Icons/White/Add User.png"), QSize(), QIcon::Normal, QIcon::Off);
        signUpButton->setIcon(icon2);
        forgotPasswordButton = new QPushButton(loginBox);
        forgotPasswordButton->setObjectName(QString::fromUtf8("forgotPasswordButton"));
        forgotPasswordButton->setGeometry(QRect(150, 280, 113, 32));
        forgotPasswordButton->setStyleSheet(QString::fromUtf8("border:0px;\n"
"color:#fff;\n"
"text-decoration:underline;"));
        label_4 = new QLabel(loginBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 30, 271, 31));
        label_4->setStyleSheet(QString::fromUtf8("color: #fff; font-size:25px; border:0px;background: transparent;"));
        label_4->setAlignment(Qt::AlignCenter);
        usernameIcon = new QFrame(loginBox);
        usernameIcon->setObjectName(QString::fromUtf8("usernameIcon"));
        usernameIcon->setGeometry(QRect(30, 90, 31, 31));
        usernameIcon->setStyleSheet(QString::fromUtf8("background:#fff url(:/images/user.png);\n"
"border:0px;\n"
"border:0px;\n"
"border-top-left-radius:5px;\n"
"border-bottom-left-radius:5px;\n"
"border-top-right-radius:0px;\n"
"border-bottom-right-radius:0px; \n"
""));
        usernameIcon->setFrameShape(QFrame::StyledPanel);
        usernameIcon->setFrameShadow(QFrame::Raised);
        passwordIcon = new QFrame(loginBox);
        passwordIcon->setObjectName(QString::fromUtf8("passwordIcon"));
        passwordIcon->setGeometry(QRect(30, 140, 31, 31));
        passwordIcon->setStyleSheet(QString::fromUtf8("background:#fff url(:/images/lock.png);\n"
"border:0px;\n"
"border-radius:0px;\n"
"border-top-left-radius:5px;\n"
"border-bottom-left-radius:5px;\n"
"border-top-right-radius:0px;\n"
"border-bottom-right-radius:0px;"));
        passwordIcon->setFrameShape(QFrame::StyledPanel);
        passwordIcon->setFrameShadow(QFrame::Raised);
        loginErrorLabel = new QLabel(loginBox);
        loginErrorLabel->setObjectName(QString::fromUtf8("loginErrorLabel"));
        loginErrorLabel->setGeometry(QRect(40, 240, 211, 21));
        loginErrorLabel->setStyleSheet(QString::fromUtf8("border:0px;\n"
"color:#b50009;\n"
"text-align:center;\n"
"background: transparent;"));
        loginErrorLabel->setAlignment(Qt::AlignCenter);
        passwordShowButton = new QPushButton(loginBox);
        passwordShowButton->setObjectName(QString::fromUtf8("passwordShowButton"));
        passwordShowButton->setGeometry(QRect(240, 140, 21, 31));
        passwordShowButton->setMaximumSize(QSize(16777215, 31));
        passwordShowButton->setStyleSheet(QString::fromUtf8("background:#fff;\n"
"border:0px; \n"
"border-top-right-radius:5px;\n"
"border-bottom-right-radius:5px;\n"
"border-top-left-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/iconsGray/Icons/Gray/Eye ON.png"), QSize(), QIcon::Normal, QIcon::Off);
        passwordShowButton->setIcon(icon3);
        footerLogo = new QFrame(loginScreen);
        footerLogo->setObjectName(QString::fromUtf8("footerLogo"));
        footerLogo->setGeometry(QRect(990, 180, 191, 61));
        footerLogo->setMinimumSize(QSize(191, 61));
        footerLogo->setMaximumSize(QSize(191, 61));
        footerLogo->setStyleSheet(QString::fromUtf8("background:url(:/images/sideBarLogo.png);\n"
"background-position:center;\n"
"background-repeat: no-repeat;\n"
"border: 0px;"));
        footerLogo->setFrameShape(QFrame::StyledPanel);
        footerLogo->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(loginScreen);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(240, 260, 462, 281));
        frame_2->setMinimumSize(QSize(462, 0));
        frame_2->setStyleSheet(QString::fromUtf8("background-image: url(:/images/SGS LOGO.png);\n"
"border:0px;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        layoutWidget_2 = new QWidget(loginScreen);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(1000, 610, 161, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        englishTranslationRadioButton = new QRadioButton(layoutWidget_2);
        englishTranslationRadioButton->setObjectName(QString::fromUtf8("englishTranslationRadioButton"));
        englishTranslationRadioButton->setChecked(true);

        horizontalLayout_5->addWidget(englishTranslationRadioButton);

        spanishTranslationRadioButton = new QRadioButton(layoutWidget_2);
        spanishTranslationRadioButton->setObjectName(QString::fromUtf8("spanishTranslationRadioButton"));

        horizontalLayout_5->addWidget(spanishTranslationRadioButton);

        stackedWidgetSGS->addWidget(loginScreen);
        Dashboard = new QWidget();
        Dashboard->setObjectName(QString::fromUtf8("Dashboard"));
        Dashboard->setMinimumSize(QSize(1440, 900));
        Dashboard->setMaximumSize(QSize(1440, 900));
        layoutWidget = new QWidget(Dashboard);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(-20, -10, 2, 2));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        Sidebar = new QFrame(Dashboard);
        Sidebar->setObjectName(QString::fromUtf8("Sidebar"));
        Sidebar->setGeometry(QRect(0, 50, 260, 900));
        Sidebar->setMinimumSize(QSize(260, 900));
        Sidebar->setMaximumSize(QSize(260, 900));
        Sidebar->setStyleSheet(QString::fromUtf8("background-color:#292f38;\n"
"border: 0;"));
        Sidebar->setFrameShape(QFrame::StyledPanel);
        Sidebar->setFrameShadow(QFrame::Raised);
        frame = new QFrame(Sidebar);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(40, 730, 191, 61));
        frame->setStyleSheet(QString::fromUtf8("background:url(:/images/sideBarLogo.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(Sidebar);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 50, 191, 651));
        groupBox->setStyleSheet(QString::fromUtf8("color:#70808c;"));
        dashboard_pushButton = new QPushButton(groupBox);
        dashboard_pushButton->setObjectName(QString::fromUtf8("dashboard_pushButton"));
        dashboard_pushButton->setGeometry(QRect(20, 40, 86, 16));
        dashboard_pushButton->setLayoutDirection(Qt::LeftToRight);
        dashboard_pushButton->setStyleSheet(QString::fromUtf8("color:#fff;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons White/Icons/White/Dashboard.png"), QSize(), QIcon::Normal, QIcon::Off);
        dashboard_pushButton->setIcon(icon4);
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 230, 161, 81));
        viewComments_Button = new QPushButton(groupBox_2);
        viewComments_Button->setObjectName(QString::fromUtf8("viewComments_Button"));
        viewComments_Button->setGeometry(QRect(-80, 50, 281, 21));
        viewComments_Button->setLayoutDirection(Qt::LeftToRight);
        viewComments_Button->setStyleSheet(QString::fromUtf8("color:#fff;"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons White/Icons/White/commentWHITE.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewComments_Button->setIcon(icon5);
        settingGroupBox = new QGroupBox(groupBox);
        settingGroupBox->setObjectName(QString::fromUtf8("settingGroupBox"));
        settingGroupBox->setGeometry(QRect(0, 340, 160, 251));
        addInstitution_Button = new QPushButton(settingGroupBox);
        addInstitution_Button->setObjectName(QString::fromUtf8("addInstitution_Button"));
        addInstitution_Button->setGeometry(QRect(-60, 190, 231, 16));
        addInstitution_Button->setLayoutDirection(Qt::LeftToRight);
        addInstitution_Button->setStyleSheet(QString::fromUtf8("color:#fff;"));
        addCourse_Button = new QPushButton(settingGroupBox);
        addCourse_Button->setObjectName(QString::fromUtf8("addCourse_Button"));
        addCourse_Button->setGeometry(QRect(-50, 160, 191, 16));
        addCourse_Button->setLayoutDirection(Qt::LeftToRight);
        addCourse_Button->setStyleSheet(QString::fromUtf8("color:#fff;"));
        addUser_Button = new QPushButton(settingGroupBox);
        addUser_Button->setObjectName(QString::fromUtf8("addUser_Button"));
        addUser_Button->setGeometry(QRect(-90, 70, 291, 21));
        addUser_Button->setLayoutDirection(Qt::LeftToRight);
        addUser_Button->setStyleSheet(QString::fromUtf8("color:#fff;"));
        addUser_Button->setIcon(icon2);
        disableUser_Button = new QPushButton(settingGroupBox);
        disableUser_Button->setObjectName(QString::fromUtf8("disableUser_Button"));
        disableUser_Button->setGeometry(QRect(-60, 100, 271, 21));
        disableUser_Button->setLayoutDirection(Qt::LeftToRight);
        disableUser_Button->setStyleSheet(QString::fromUtf8("color:#fff;"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons White/Icons/White/Eye OFF.png"), QSize(), QIcon::Normal, QIcon::Off);
        disableUser_Button->setIcon(icon6);
        changePassword_Button = new QPushButton(settingGroupBox);
        changePassword_Button->setObjectName(QString::fromUtf8("changePassword_Button"));
        changePassword_Button->setGeometry(QRect(-70, 40, 281, 16));
        changePassword_Button->setLayoutDirection(Qt::LeftToRight);
        changePassword_Button->setStyleSheet(QString::fromUtf8("color:#fff;"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons White/Icons/White/Edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        changePassword_Button->setIcon(icon7);
        AddProgramSequence_Button = new QPushButton(settingGroupBox);
        AddProgramSequence_Button->setObjectName(QString::fromUtf8("AddProgramSequence_Button"));
        AddProgramSequence_Button->setGeometry(QRect(-50, 130, 241, 16));
        AddProgramSequence_Button->setLayoutDirection(Qt::LeftToRight);
        AddProgramSequence_Button->setStyleSheet(QString::fromUtf8("color:#fff;"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons White/Icons/White/Add.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddProgramSequence_Button->setIcon(icon8);
        viewStudentProgramSequence_Button = new QPushButton(groupBox);
        viewStudentProgramSequence_Button->setObjectName(QString::fromUtf8("viewStudentProgramSequence_Button"));
        viewStudentProgramSequence_Button->setGeometry(QRect(-60, 110, 261, 16));
        viewStudentProgramSequence_Button->setLayoutDirection(Qt::LeftToRight);
        viewStudentProgramSequence_Button->setStyleSheet(QString::fromUtf8("color:#fff;"));
        viewStudentProgramSequence_Button->setIcon(icon8);
        viewCourses_Button = new QPushButton(groupBox);
        viewCourses_Button->setObjectName(QString::fromUtf8("viewCourses_Button"));
        viewCourses_Button->setGeometry(QRect(-90, 150, 291, 16));
        viewCourses_Button->setLayoutDirection(Qt::LeftToRight);
        viewCourses_Button->setStyleSheet(QString::fromUtf8("color:#fff;"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons White/Icons/White/Student.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewCourses_Button->setIcon(icon9);
        AddLecturerCourse_Button = new QPushButton(groupBox);
        AddLecturerCourse_Button->setObjectName(QString::fromUtf8("AddLecturerCourse_Button"));
        AddLecturerCourse_Button->setGeometry(QRect(-100, 190, 301, 16));
        AddLecturerCourse_Button->setLayoutDirection(Qt::LeftToRight);
        AddLecturerCourse_Button->setStyleSheet(QString::fromUtf8("color:#fff;"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons White/Icons/White/Lecturer.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddLecturerCourse_Button->setIcon(icon10);
        headBar = new QFrame(Dashboard);
        headBar->setObjectName(QString::fromUtf8("headBar"));
        headBar->setGeometry(QRect(0, 0, 1440, 65));
        headBar->setMinimumSize(QSize(1440, 65));
        headBar->setMaximumSize(QSize(260, 50));
        headBar->setStyleSheet(QString::fromUtf8("background-image: url(:/images/background.jpg);\n"
"border:0;"));
        headBar->setFrameShape(QFrame::StyledPanel);
        headBar->setFrameShadow(QFrame::Raised);
        logoutButton = new QPushButton(headBar);
        logoutButton->setObjectName(QString::fromUtf8("logoutButton"));
        logoutButton->setGeometry(QRect(1330, 20, 71, 31));
        QFont font1;
        font1.setPointSize(9);
        font1.setUnderline(true);
        logoutButton->setFont(font1);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons White/Icons/White/Passsword.png"), QSize(), QIcon::Normal, QIcon::Off);
        logoutButton->setIcon(icon11);
        userRoleLable_2 = new QLabel(headBar);
        userRoleLable_2->setObjectName(QString::fromUtf8("userRoleLable_2"));
        userRoleLable_2->setGeometry(QRect(1310, 20, 16, 31));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setWeight(50);
        userRoleLable_2->setFont(font2);
        userRoleLable_2->setAlignment(Qt::AlignCenter);
        userIconTopBar = new QPushButton(headBar);
        userIconTopBar->setObjectName(QString::fromUtf8("userIconTopBar"));
        userIconTopBar->setGeometry(QRect(1130, 20, 41, 31));
        userIconTopBar->setFont(font);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons White/Icons/White/User.png"), QSize(), QIcon::Normal, QIcon::Off);
        userIconTopBar->setIcon(icon12);
        userRoleLable = new QLabel(headBar);
        userRoleLable->setObjectName(QString::fromUtf8("userRoleLable"));
        userRoleLable->setGeometry(QRect(1220, 28, 81, 16));
        userRoleLable->setFont(font2);
        topBarLogo = new QFrame(headBar);
        topBarLogo->setObjectName(QString::fromUtf8("topBarLogo"));
        topBarLogo->setGeometry(QRect(40, 10, 191, 51));
        topBarLogo->setStyleSheet(QString::fromUtf8("background-image: url(:/images/SGS Logo Dashboard.png);\n"
"background-repeat: no-repeat;"));
        topBarLogo->setFrameShape(QFrame::StyledPanel);
        topBarLogo->setFrameShadow(QFrame::Raised);
        usernameLable = new QLabel(headBar);
        usernameLable->setObjectName(QString::fromUtf8("usernameLable"));
        usernameLable->setGeometry(QRect(1160, 25, 61, 21));
        usernameLable->setFont(font2);
        usernameLable->setAlignment(Qt::AlignCenter);
        stackedWidgetPages = new QStackedWidget(Dashboard);
        stackedWidgetPages->setObjectName(QString::fromUtf8("stackedWidgetPages"));
        stackedWidgetPages->setGeometry(QRect(260, 70, 1171, 821));
        QFont font3;
        font3.setBold(false);
        font3.setWeight(50);
        stackedWidgetPages->setFont(font3);
        stackedWidgetPages->setStyleSheet(QString::fromUtf8("border: 1px"));
        DashboardPage = new QWidget();
        DashboardPage->setObjectName(QString::fromUtf8("DashboardPage"));
        pageTitleCourseListPage_3 = new QFrame(DashboardPage);
        pageTitleCourseListPage_3->setObjectName(QString::fromUtf8("pageTitleCourseListPage_3"));
        pageTitleCourseListPage_3->setGeometry(QRect(10, 0, 1151, 41));
        QFont font4;
        font4.setPointSize(11);
        pageTitleCourseListPage_3->setFont(font4);
        pageTitleCourseListPage_3->setStyleSheet(QString::fromUtf8("border-bottom:1px solid #999999;"));
        pageTitleCourseListPage_3->setFrameShape(QFrame::StyledPanel);
        pageTitleCourseListPage_3->setFrameShadow(QFrame::Raised);
        pageNameLabel_4 = new QLabel(pageTitleCourseListPage_3);
        pageNameLabel_4->setObjectName(QString::fromUtf8("pageNameLabel_4"));
        pageNameLabel_4->setGeometry(QRect(990, 0, 141, 31));
        QFont font5;
        font5.setPointSize(11);
        font5.setBold(true);
        font5.setWeight(75);
        pageNameLabel_4->setFont(font5);
        pageNameLabel_4->setLayoutDirection(Qt::LeftToRight);
        pageNameLabel_4->setStyleSheet(QString::fromUtf8("color:#999; border: 0px;"));
        pageNameLabel_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TMPlabel_5 = new QLabel(DashboardPage);
        TMPlabel_5->setObjectName(QString::fromUtf8("TMPlabel_5"));
        TMPlabel_5->setGeometry(QRect(40, 230, 531, 431));
        QFont font6;
        font6.setBold(true);
        font6.setWeight(75);
        TMPlabel_5->setFont(font6);
        TMPlabel_5->setStyleSheet(QString::fromUtf8("background:#fff;\n"
"color: #000;\n"
"border-radius: 5px;"));
        TMPlabel_5->setAlignment(Qt::AlignCenter);
        TMPlabel_6 = new QLabel(DashboardPage);
        TMPlabel_6->setObjectName(QString::fromUtf8("TMPlabel_6"));
        TMPlabel_6->setGeometry(QRect(610, 230, 531, 431));
        TMPlabel_6->setFont(font6);
        TMPlabel_6->setStyleSheet(QString::fromUtf8("background:#fff;\n"
"color: #000;\n"
"border-radius: 5px;"));
        TMPlabel_6->setAlignment(Qt::AlignCenter);
        frame_Widget1 = new QFrame(DashboardPage);
        frame_Widget1->setObjectName(QString::fromUtf8("frame_Widget1"));
        frame_Widget1->setGeometry(QRect(40, 80, 201, 121));
        frame_Widget1->setStyleSheet(QString::fromUtf8(""));
        frame_Widget1->setFrameShape(QFrame::StyledPanel);
        frame_Widget1->setFrameShadow(QFrame::Raised);
        icon1Widget1 = new QLabel(frame_Widget1);
        icon1Widget1->setObjectName(QString::fromUtf8("icon1Widget1"));
        icon1Widget1->setGeometry(QRect(10, 20, 41, 41));
        icon1Widget1->setFont(font6);
        icon1Widget1->setStyleSheet(QString::fromUtf8(""));
        icon1Widget1->setPixmap(QPixmap(QString::fromUtf8(":/iconsGray/Icons/Gray/Student.png")));
        icon1Widget1->setScaledContents(true);
        icon1Widget1->setAlignment(Qt::AlignCenter);
        widget1Title = new QLabel(frame_Widget1);
        widget1Title->setObjectName(QString::fromUtf8("widget1Title"));
        widget1Title->setGeometry(QRect(60, 20, 141, 41));
        widget1Title->setFont(font5);
        widget1Title->setStyleSheet(QString::fromUtf8("color:#999;\n"
"border-radius: 5px;"));
        widget1Title->setAlignment(Qt::AlignCenter);
        widget1courseComplete = new QLabel(frame_Widget1);
        widget1courseComplete->setObjectName(QString::fromUtf8("widget1courseComplete"));
        widget1courseComplete->setGeometry(QRect(0, 70, 201, 41));
        QFont font7;
        font7.setPointSize(27);
        font7.setBold(true);
        font7.setWeight(75);
        widget1courseComplete->setFont(font7);
        widget1courseComplete->setStyleSheet(QString::fromUtf8("color:#292f38;\n"
"border-radius: 5px;"));
        widget1courseComplete->setAlignment(Qt::AlignCenter);
        frame_Widget2 = new QFrame(DashboardPage);
        frame_Widget2->setObjectName(QString::fromUtf8("frame_Widget2"));
        frame_Widget2->setGeometry(QRect(490, 80, 201, 121));
        frame_Widget2->setStyleSheet(QString::fromUtf8(""));
        frame_Widget2->setFrameShape(QFrame::StyledPanel);
        frame_Widget2->setFrameShadow(QFrame::Raised);
        icon1Widget2 = new QLabel(frame_Widget2);
        icon1Widget2->setObjectName(QString::fromUtf8("icon1Widget2"));
        icon1Widget2->setGeometry(QRect(10, 20, 41, 41));
        icon1Widget2->setFont(font6);
        icon1Widget2->setStyleSheet(QString::fromUtf8(""));
        icon1Widget2->setPixmap(QPixmap(QString::fromUtf8(":/iconsGray/Icons/Gray/Student.png")));
        icon1Widget2->setScaledContents(true);
        icon1Widget2->setAlignment(Qt::AlignCenter);
        widget2Title = new QLabel(frame_Widget2);
        widget2Title->setObjectName(QString::fromUtf8("widget2Title"));
        widget2Title->setGeometry(QRect(60, 20, 141, 41));
        widget2Title->setFont(font5);
        widget2Title->setStyleSheet(QString::fromUtf8("color:#999;\n"
"border-radius: 5px;"));
        widget2Title->setAlignment(Qt::AlignCenter);
        widget2TitleCoursePending = new QLabel(frame_Widget2);
        widget2TitleCoursePending->setObjectName(QString::fromUtf8("widget2TitleCoursePending"));
        widget2TitleCoursePending->setGeometry(QRect(0, 70, 201, 41));
        widget2TitleCoursePending->setFont(font7);
        widget2TitleCoursePending->setStyleSheet(QString::fromUtf8("color:#292f38;\n"
"border-radius: 5px;"));
        widget2TitleCoursePending->setAlignment(Qt::AlignCenter);
        frame_Widget2_2 = new QFrame(frame_Widget2);
        frame_Widget2_2->setObjectName(QString::fromUtf8("frame_Widget2_2"));
        frame_Widget2_2->setGeometry(QRect(180, 110, 201, 121));
        frame_Widget2_2->setStyleSheet(QString::fromUtf8(""));
        frame_Widget2_2->setFrameShape(QFrame::StyledPanel);
        frame_Widget2_2->setFrameShadow(QFrame::Raised);
        icon1Widget2_2 = new QLabel(frame_Widget2_2);
        icon1Widget2_2->setObjectName(QString::fromUtf8("icon1Widget2_2"));
        icon1Widget2_2->setGeometry(QRect(10, 20, 41, 41));
        icon1Widget2_2->setFont(font6);
        icon1Widget2_2->setStyleSheet(QString::fromUtf8(""));
        icon1Widget2_2->setPixmap(QPixmap(QString::fromUtf8(":/iconsGray/Icons/Gray/Student.png")));
        icon1Widget2_2->setScaledContents(true);
        icon1Widget2_2->setAlignment(Qt::AlignCenter);
        widget2Title_2 = new QLabel(frame_Widget2_2);
        widget2Title_2->setObjectName(QString::fromUtf8("widget2Title_2"));
        widget2Title_2->setGeometry(QRect(60, 20, 141, 41));
        widget2Title_2->setFont(font5);
        widget2Title_2->setStyleSheet(QString::fromUtf8("color:#999;\n"
"border-radius: 5px;"));
        widget2Title_2->setAlignment(Qt::AlignCenter);
        widget2TitleCoursePending_2 = new QLabel(frame_Widget2_2);
        widget2TitleCoursePending_2->setObjectName(QString::fromUtf8("widget2TitleCoursePending_2"));
        widget2TitleCoursePending_2->setGeometry(QRect(0, 70, 201, 41));
        widget2TitleCoursePending_2->setFont(font7);
        widget2TitleCoursePending_2->setStyleSheet(QString::fromUtf8("color:#292f38;\n"
"border-radius: 5px;"));
        widget2TitleCoursePending_2->setAlignment(Qt::AlignCenter);
        frame_Widget2_3 = new QFrame(DashboardPage);
        frame_Widget2_3->setObjectName(QString::fromUtf8("frame_Widget2_3"));
        frame_Widget2_3->setGeometry(QRect(940, 80, 201, 121));
        frame_Widget2_3->setStyleSheet(QString::fromUtf8(""));
        frame_Widget2_3->setFrameShape(QFrame::StyledPanel);
        frame_Widget2_3->setFrameShadow(QFrame::Raised);
        icon1Widget2_5 = new QLabel(frame_Widget2_3);
        icon1Widget2_5->setObjectName(QString::fromUtf8("icon1Widget2_5"));
        icon1Widget2_5->setGeometry(QRect(10, 20, 41, 41));
        icon1Widget2_5->setFont(font6);
        icon1Widget2_5->setStyleSheet(QString::fromUtf8(""));
        icon1Widget2_5->setPixmap(QPixmap(QString::fromUtf8(":/iconsGray/Icons/Gray/Student.png")));
        icon1Widget2_5->setScaledContents(true);
        icon1Widget2_5->setAlignment(Qt::AlignCenter);
        widget2Title_5 = new QLabel(frame_Widget2_3);
        widget2Title_5->setObjectName(QString::fromUtf8("widget2Title_5"));
        widget2Title_5->setGeometry(QRect(60, 20, 141, 41));
        widget2Title_5->setFont(font5);
        widget2Title_5->setStyleSheet(QString::fromUtf8("color:#999;\n"
"border-radius: 5px;"));
        widget2Title_5->setAlignment(Qt::AlignCenter);
        widget2TitleCoursePending_5 = new QLabel(frame_Widget2_3);
        widget2TitleCoursePending_5->setObjectName(QString::fromUtf8("widget2TitleCoursePending_5"));
        widget2TitleCoursePending_5->setGeometry(QRect(0, 70, 201, 41));
        widget2TitleCoursePending_5->setFont(font7);
        widget2TitleCoursePending_5->setStyleSheet(QString::fromUtf8("color:#292f38;\n"
"border-radius: 5px;"));
        widget2TitleCoursePending_5->setAlignment(Qt::AlignCenter);
        frame_Widget2_5 = new QFrame(frame_Widget2_3);
        frame_Widget2_5->setObjectName(QString::fromUtf8("frame_Widget2_5"));
        frame_Widget2_5->setGeometry(QRect(180, 110, 201, 121));
        frame_Widget2_5->setStyleSheet(QString::fromUtf8(""));
        frame_Widget2_5->setFrameShape(QFrame::StyledPanel);
        frame_Widget2_5->setFrameShadow(QFrame::Raised);
        icon1Widget2_6 = new QLabel(frame_Widget2_5);
        icon1Widget2_6->setObjectName(QString::fromUtf8("icon1Widget2_6"));
        icon1Widget2_6->setGeometry(QRect(10, 20, 41, 41));
        icon1Widget2_6->setFont(font6);
        icon1Widget2_6->setStyleSheet(QString::fromUtf8(""));
        icon1Widget2_6->setPixmap(QPixmap(QString::fromUtf8(":/iconsGray/Icons/Gray/Student.png")));
        icon1Widget2_6->setScaledContents(true);
        icon1Widget2_6->setAlignment(Qt::AlignCenter);
        widget2Title_6 = new QLabel(frame_Widget2_5);
        widget2Title_6->setObjectName(QString::fromUtf8("widget2Title_6"));
        widget2Title_6->setGeometry(QRect(60, 20, 141, 41));
        widget2Title_6->setFont(font5);
        widget2Title_6->setStyleSheet(QString::fromUtf8("color:#999;\n"
"border-radius: 5px;"));
        widget2Title_6->setAlignment(Qt::AlignCenter);
        widget2TitleCoursePending_6 = new QLabel(frame_Widget2_5);
        widget2TitleCoursePending_6->setObjectName(QString::fromUtf8("widget2TitleCoursePending_6"));
        widget2TitleCoursePending_6->setGeometry(QRect(0, 70, 201, 41));
        widget2TitleCoursePending_6->setFont(font7);
        widget2TitleCoursePending_6->setStyleSheet(QString::fromUtf8("color:#292f38;\n"
"border-radius: 5px;"));
        widget2TitleCoursePending_6->setAlignment(Qt::AlignCenter);
        stackedWidgetPages->addWidget(DashboardPage);
        CoursesPage = new QWidget();
        CoursesPage->setObjectName(QString::fromUtf8("CoursesPage"));
        viewCoursesTableWidget = new QTableWidget(CoursesPage);
        viewCoursesTableWidget->setObjectName(QString::fromUtf8("viewCoursesTableWidget"));
        viewCoursesTableWidget->setGeometry(QRect(20, 110, 661, 711));
        titleCourseListPage = new QFrame(CoursesPage);
        titleCourseListPage->setObjectName(QString::fromUtf8("titleCourseListPage"));
        titleCourseListPage->setGeometry(QRect(700, 60, 471, 161));
        titleCourseListPage->setStyleSheet(QString::fromUtf8("background:#fff; border-radius:5px;"));
        titleCourseListPage->setFrameShape(QFrame::StyledPanel);
        titleCourseListPage->setFrameShadow(QFrame::Raised);
        courseTitleViewCourseLabel = new QLabel(titleCourseListPage);
        courseTitleViewCourseLabel->setObjectName(QString::fromUtf8("courseTitleViewCourseLabel"));
        courseTitleViewCourseLabel->setGeometry(QRect(30, 20, 51, 16));
        QFont font8;
        font8.setPointSize(9);
        courseTitleViewCourseLabel->setFont(font8);
        courseTitleViewCourseLabel->setStyleSheet(QString::fromUtf8("color:#666"));
        courseStatusViewCourseLabel = new QLabel(titleCourseListPage);
        courseStatusViewCourseLabel->setObjectName(QString::fromUtf8("courseStatusViewCourseLabel"));
        courseStatusViewCourseLabel->setGeometry(QRect(30, 80, 51, 16));
        courseStatusViewCourseLabel->setFont(font8);
        courseStatusViewCourseLabel->setStyleSheet(QString::fromUtf8("color:#666"));
        courseViewCourseTable = new QLabel(titleCourseListPage);
        courseViewCourseTable->setObjectName(QString::fromUtf8("courseViewCourseTable"));
        courseViewCourseTable->setGeometry(QRect(40, 50, 411, 20));
        QFont font9;
        font9.setPointSize(10);
        font9.setBold(true);
        font9.setWeight(75);
        courseViewCourseTable->setFont(font9);
        courseViewCourseTable->setStyleSheet(QString::fromUtf8("color:#333"));
        pendingViewCourseTable = new QLabel(titleCourseListPage);
        pendingViewCourseTable->setObjectName(QString::fromUtf8("pendingViewCourseTable"));
        pendingViewCourseTable->setGeometry(QRect(40, 110, 411, 21));
        pendingViewCourseTable->setFont(font6);
        pendingViewCourseTable->setStyleSheet(QString::fromUtf8("color:red;"));
        programSequenceFacultyName_2 = new QLabel(CoursesPage);
        programSequenceFacultyName_2->setObjectName(QString::fromUtf8("programSequenceFacultyName_2"));
        programSequenceFacultyName_2->setGeometry(QRect(20, 60, 661, 51));
        programSequenceFacultyName_2->setFont(font9);
        programSequenceFacultyName_2->setStyleSheet(QString::fromUtf8("padding-left:5px;\n"
"background:#70808c;\n"
"color:#fff;\n"
"border-top-left-radius:5px;\n"
"border-top-right-radius:5px;\n"
"border-bottom-left-radius:0px;\n"
"border-bottom-right-radius:0px;"));
        programSequenceFacultyName_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        courseCommentViewCourseLabel = new QLabel(CoursesPage);
        courseCommentViewCourseLabel->setObjectName(QString::fromUtf8("courseCommentViewCourseLabel"));
        courseCommentViewCourseLabel->setGeometry(QRect(710, 250, 201, 16));
        courseCommentViewCourseLabel->setFont(font8);
        courseCommentViewCourseLabel->setStyleSheet(QString::fromUtf8("color:#666"));
        courseCommentListPage = new QFrame(CoursesPage);
        courseCommentListPage->setObjectName(QString::fromUtf8("courseCommentListPage"));
        courseCommentListPage->setGeometry(QRect(700, 280, 471, 151));
        courseCommentListPage->setStyleSheet(QString::fromUtf8("background:#fff; border-radius:5px;"));
        courseCommentListPage->setFrameShape(QFrame::StyledPanel);
        courseCommentListPage->setFrameShadow(QFrame::Raised);
        commentPostedViewCourseLabel = new QLabel(courseCommentListPage);
        commentPostedViewCourseLabel->setObjectName(QString::fromUtf8("commentPostedViewCourseLabel"));
        commentPostedViewCourseLabel->setGeometry(QRect(30, 20, 51, 16));
        commentPostedViewCourseLabel->setFont(font8);
        commentPostedViewCourseLabel->setStyleSheet(QString::fromUtf8("color:#666"));
        ratingStatusViewCourseLabel = new QLabel(courseCommentListPage);
        ratingStatusViewCourseLabel->setObjectName(QString::fromUtf8("ratingStatusViewCourseLabel"));
        ratingStatusViewCourseLabel->setGeometry(QRect(280, 20, 51, 16));
        ratingStatusViewCourseLabel->setFont(font8);
        ratingStatusViewCourseLabel->setStyleSheet(QString::fromUtf8("color:#666"));
        commentTimeStapViewCourseTable = new QLabel(courseCommentListPage);
        commentTimeStapViewCourseTable->setObjectName(QString::fromUtf8("commentTimeStapViewCourseTable"));
        commentTimeStapViewCourseTable->setGeometry(QRect(80, 20, 141, 20));
        commentTimeStapViewCourseTable->setFont(font9);
        commentTimeStapViewCourseTable->setStyleSheet(QString::fromUtf8("color:#333"));
        ratingViewCourseTable = new QLabel(courseCommentListPage);
        ratingViewCourseTable->setObjectName(QString::fromUtf8("ratingViewCourseTable"));
        ratingViewCourseTable->setGeometry(QRect(340, 20, 121, 21));
        ratingViewCourseTable->setFont(font6);
        ratingViewCourseTable->setStyleSheet(QString::fromUtf8("color:#333;"));
        userCommentViewCourseTable = new QLabel(courseCommentListPage);
        userCommentViewCourseTable->setObjectName(QString::fromUtf8("userCommentViewCourseTable"));
        userCommentViewCourseTable->setGeometry(QRect(10, 70, 451, 71));
        QFont font10;
        font10.setPointSize(8);
        font10.setBold(false);
        font10.setWeight(50);
        userCommentViewCourseTable->setFont(font10);
        userCommentViewCourseTable->setStyleSheet(QString::fromUtf8("color:#333"));
        pageTitleCourseListPage = new QFrame(CoursesPage);
        pageTitleCourseListPage->setObjectName(QString::fromUtf8("pageTitleCourseListPage"));
        pageTitleCourseListPage->setGeometry(QRect(20, 0, 1151, 41));
        pageTitleCourseListPage->setFont(font4);
        pageTitleCourseListPage->setStyleSheet(QString::fromUtf8("border-bottom:1px solid #999999;"));
        pageTitleCourseListPage->setFrameShape(QFrame::StyledPanel);
        pageTitleCourseListPage->setFrameShadow(QFrame::Raised);
        pageNameLabel = new QLabel(pageTitleCourseListPage);
        pageNameLabel->setObjectName(QString::fromUtf8("pageNameLabel"));
        pageNameLabel->setGeometry(QRect(990, 0, 141, 31));
        pageNameLabel->setFont(font5);
        pageNameLabel->setLayoutDirection(Qt::LeftToRight);
        pageNameLabel->setStyleSheet(QString::fromUtf8("color:#999; border: 0px;"));
        pageNameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        stackedWidgetPages->addWidget(CoursesPage);
        ViewProgramSequence = new QWidget();
        ViewProgramSequence->setObjectName(QString::fromUtf8("ViewProgramSequence"));
        programSequenceTableWidget = new QTableWidget(ViewProgramSequence);
        programSequenceTableWidget->setObjectName(QString::fromUtf8("programSequenceTableWidget"));
        programSequenceTableWidget->setGeometry(QRect(10, 130, 1151, 371));
        programSequenceTableWidget->setStyleSheet(QString::fromUtf8("background:#fff"));
        programSequenceTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        programSequenceFacultyName = new QLabel(ViewProgramSequence);
        programSequenceFacultyName->setObjectName(QString::fromUtf8("programSequenceFacultyName"));
        programSequenceFacultyName->setGeometry(QRect(10, 60, 1151, 41));
        QFont font11;
        font11.setPointSize(14);
        font11.setBold(true);
        font11.setWeight(75);
        programSequenceFacultyName->setFont(font11);
        programSequenceFacultyName->setStyleSheet(QString::fromUtf8("background:#70808c;\n"
"color:#fff;\n"
"border-top-left-radius:5px;\n"
"border-top-right-radius:5px;\n"
"border-bottom-left-radius:0px;\n"
"border-bottom-right-radius:0px;"));
        programSequenceFacultyName->setAlignment(Qt::AlignCenter);
        programSequenceProgramName = new QLabel(ViewProgramSequence);
        programSequenceProgramName->setObjectName(QString::fromUtf8("programSequenceProgramName"));
        programSequenceProgramName->setGeometry(QRect(10, 100, 1151, 31));
        QFont font12;
        font12.setPointSize(14);
        font12.setBold(false);
        font12.setWeight(50);
        programSequenceProgramName->setFont(font12);
        programSequenceProgramName->setStyleSheet(QString::fromUtf8("color:#333;border:1px solid #999;background:#fff;"));
        programSequenceProgramName->setAlignment(Qt::AlignCenter);
        addCourseFrame = new QFrame(ViewProgramSequence);
        addCourseFrame->setObjectName(QString::fromUtf8("addCourseFrame"));
        addCourseFrame->setGeometry(QRect(10, 570, 1151, 261));
        addCourseFrame->setStyleSheet(QString::fromUtf8(" border:1px solid #e1e1e1;\n"
"background:#f1f1f1; color:#333; border-radius:5px;"));
        addCourseFrame->setFrameShape(QFrame::StyledPanel);
        addCourseFrame->setFrameShadow(QFrame::Raised);
        AddProgramSequenceFormTitle = new QLabel(addCourseFrame);
        AddProgramSequenceFormTitle->setObjectName(QString::fromUtf8("AddProgramSequenceFormTitle"));
        AddProgramSequenceFormTitle->setGeometry(QRect(0, 0, 1151, 41));
        AddProgramSequenceFormTitle->setFont(font11);
        AddProgramSequenceFormTitle->setStyleSheet(QString::fromUtf8("background:#70808c;\n"
"color:#fff;\n"
"border-bottom-left-radius:0px;\n"
"border-bottom-right-radius:0px;"));
        AddProgramSequenceFormTitle->setAlignment(Qt::AlignCenter);
        updateCourse_pushButton = new QPushButton(addCourseFrame);
        updateCourse_pushButton->setObjectName(QString::fromUtf8("updateCourse_pushButton"));
        updateCourse_pushButton->setGeometry(QRect(1020, 150, 91, 32));
        updateCourse_pushButton->setStyleSheet(QString::fromUtf8("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        updateCourse_pushButton->setIcon(icon7);
        layoutWidget1 = new QWidget(addCourseFrame);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 100, 271, 61));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        courseNameCourseGradeTagLable = new QLabel(layoutWidget1);
        courseNameCourseGradeTagLable->setObjectName(QString::fromUtf8("courseNameCourseGradeTagLable"));
        courseNameCourseGradeTagLable->setStyleSheet(QString::fromUtf8("color:#666;\n"
"border:0px;"));

        verticalLayout->addWidget(courseNameCourseGradeTagLable);

        courseName_courseGradeLable = new QLabel(layoutWidget1);
        courseName_courseGradeLable->setObjectName(QString::fromUtf8("courseName_courseGradeLable"));
        courseName_courseGradeLable->setStyleSheet(QString::fromUtf8("color:#000;\n"
"border:0px;\n"
"border-bottom:1px dotted #999;"));

        verticalLayout->addWidget(courseName_courseGradeLable);

        layoutWidget2 = new QWidget(addCourseFrame);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 170, 121, 61));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gradeCourseGradeTagLable = new QLabel(layoutWidget2);
        gradeCourseGradeTagLable->setObjectName(QString::fromUtf8("gradeCourseGradeTagLable"));
        gradeCourseGradeTagLable->setStyleSheet(QString::fromUtf8("color:#666;\n"
"border:0px;"));

        verticalLayout_2->addWidget(gradeCourseGradeTagLable);

        addCourseGradecomboBox = new QComboBox(layoutWidget2);
        addCourseGradecomboBox->addItem(QString());
        addCourseGradecomboBox->addItem(QString());
        addCourseGradecomboBox->addItem(QString());
        addCourseGradecomboBox->addItem(QString());
        addCourseGradecomboBox->addItem(QString());
        addCourseGradecomboBox->addItem(QString());
        addCourseGradecomboBox->addItem(QString());
        addCourseGradecomboBox->addItem(QString());
        addCourseGradecomboBox->setObjectName(QString::fromUtf8("addCourseGradecomboBox"));
        addCourseGradecomboBox->setStyleSheet(QString::fromUtf8("background:#fff;"));

        verticalLayout_2->addWidget(addCourseGradecomboBox);

        layoutWidget3 = new QWidget(addCourseFrame);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(170, 170, 121, 61));
        verticalLayout_3 = new QVBoxLayout(layoutWidget3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        gradeCourseGradeTagLable_2 = new QLabel(layoutWidget3);
        gradeCourseGradeTagLable_2->setObjectName(QString::fromUtf8("gradeCourseGradeTagLable_2"));
        gradeCourseGradeTagLable_2->setStyleSheet(QString::fromUtf8("color:#666;\n"
"border:0px;"));

        verticalLayout_3->addWidget(gradeCourseGradeTagLable_2);

        credit_CourseGradeLable = new QLabel(layoutWidget3);
        credit_CourseGradeLable->setObjectName(QString::fromUtf8("credit_CourseGradeLable"));
        credit_CourseGradeLable->setStyleSheet(QString::fromUtf8("color:#000;\n"
"border:0px;\n"
"border-bottom:1px dotted #999;"));

        verticalLayout_3->addWidget(credit_CourseGradeLable);

        layoutWidget4 = new QWidget(addCourseFrame);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(310, 50, 351, 91));
        verticalLayout_5 = new QVBoxLayout(layoutWidget4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        prerequisitesCourseGradeTagLable = new QLabel(layoutWidget4);
        prerequisitesCourseGradeTagLable->setObjectName(QString::fromUtf8("prerequisitesCourseGradeTagLable"));
        prerequisitesCourseGradeTagLable->setStyleSheet(QString::fromUtf8("color:#666;\n"
"border:0px;"));

        verticalLayout_5->addWidget(prerequisitesCourseGradeTagLable);

        allPrerequisites_CourseGradeLable = new QLabel(layoutWidget4);
        allPrerequisites_CourseGradeLable->setObjectName(QString::fromUtf8("allPrerequisites_CourseGradeLable"));
        allPrerequisites_CourseGradeLable->setStyleSheet(QString::fromUtf8("color:#000;\n"
"border:0px;\n"
"border-bottom:1px dotted #999;"));

        verticalLayout_5->addWidget(allPrerequisites_CourseGradeLable);

        layoutWidget5 = new QWidget(addCourseFrame);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(310, 170, 151, 61));
        verticalLayout_6 = new QVBoxLayout(layoutWidget5);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        gradeCourseGradeTagLable_3 = new QLabel(layoutWidget5);
        gradeCourseGradeTagLable_3->setObjectName(QString::fromUtf8("gradeCourseGradeTagLable_3"));
        gradeCourseGradeTagLable_3->setStyleSheet(QString::fromUtf8("color:#666;\n"
"border:0px;"));

        verticalLayout_6->addWidget(gradeCourseGradeTagLable_3);

        semester_CourseGradeLable = new QLabel(layoutWidget5);
        semester_CourseGradeLable->setObjectName(QString::fromUtf8("semester_CourseGradeLable"));
        semester_CourseGradeLable->setStyleSheet(QString::fromUtf8("color:#000;\n"
"border:0px;\n"
"border-bottom:1px dotted #999;"));

        verticalLayout_6->addWidget(semester_CourseGradeLable);

        layoutWidget6 = new QWidget(addCourseFrame);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(500, 170, 151, 61));
        verticalLayout_7 = new QVBoxLayout(layoutWidget6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        yearCourseGradeTagLable = new QLabel(layoutWidget6);
        yearCourseGradeTagLable->setObjectName(QString::fromUtf8("yearCourseGradeTagLable"));
        yearCourseGradeTagLable->setStyleSheet(QString::fromUtf8("color:#666;\n"
"border:0px;"));

        verticalLayout_7->addWidget(yearCourseGradeTagLable);

        courseYear_CourseGradeLable = new QLabel(layoutWidget6);
        courseYear_CourseGradeLable->setObjectName(QString::fromUtf8("courseYear_CourseGradeLable"));
        courseYear_CourseGradeLable->setStyleSheet(QString::fromUtf8("color:#000;\n"
"border:0px;\n"
"border-bottom:1px dotted #999;"));

        verticalLayout_7->addWidget(courseYear_CourseGradeLable);

        layoutWidget7 = new QWidget(addCourseFrame);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(880, 50, 161, 45));
        verticalLayout_8 = new QVBoxLayout(layoutWidget7);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        ratingCourseGradeTagLable = new QLabel(layoutWidget7);
        ratingCourseGradeTagLable->setObjectName(QString::fromUtf8("ratingCourseGradeTagLable"));
        ratingCourseGradeTagLable->setStyleSheet(QString::fromUtf8("color:#666;\n"
"border:0px;"));

        verticalLayout_8->addWidget(ratingCourseGradeTagLable);

        addCourseRatingcomboBox = new QComboBox(layoutWidget7);
        addCourseRatingcomboBox->addItem(QString());
        addCourseRatingcomboBox->addItem(QString());
        addCourseRatingcomboBox->addItem(QString());
        addCourseRatingcomboBox->addItem(QString());
        addCourseRatingcomboBox->addItem(QString());
        addCourseRatingcomboBox->addItem(QString());
        addCourseRatingcomboBox->setObjectName(QString::fromUtf8("addCourseRatingcomboBox"));
        addCourseRatingcomboBox->setStyleSheet(QString::fromUtf8("background:#fff;"));

        verticalLayout_8->addWidget(addCourseRatingcomboBox);

        layoutWidget8 = new QWidget(addCourseFrame);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(710, 100, 281, 141));
        verticalLayout_9 = new QVBoxLayout(layoutWidget8);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget8);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color:#666;\n"
"border:0px;"));

        verticalLayout_9->addWidget(label_2);

        addCourseComment_plainTextEdit = new QPlainTextEdit(layoutWidget8);
        addCourseComment_plainTextEdit->setObjectName(QString::fromUtf8("addCourseComment_plainTextEdit"));
        addCourseComment_plainTextEdit->setStyleSheet(QString::fromUtf8("Background:#fff; color:#333;"));

        verticalLayout_9->addWidget(addCourseComment_plainTextEdit);

        layoutWidget9 = new QWidget(addCourseFrame);
        layoutWidget9->setObjectName(QString::fromUtf8("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(20, 50, 271, 43));
        verticalLayout_10 = new QVBoxLayout(layoutWidget9);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        codeCourseGradeTagLable = new QLabel(layoutWidget9);
        codeCourseGradeTagLable->setObjectName(QString::fromUtf8("codeCourseGradeTagLable"));
        codeCourseGradeTagLable->setStyleSheet(QString::fromUtf8("color:#666;\n"
"border:0px;"));

        verticalLayout_10->addWidget(codeCourseGradeTagLable);

        courseCode_CourseGradeLable = new QLabel(layoutWidget9);
        courseCode_CourseGradeLable->setObjectName(QString::fromUtf8("courseCode_CourseGradeLable"));
        courseCode_CourseGradeLable->setStyleSheet(QString::fromUtf8("color:#000;\n"
"border:0px;\n"
"border-bottom:1px dotted #999;"));

        verticalLayout_10->addWidget(courseCode_CourseGradeLable);

        layoutWidget10 = new QWidget(addCourseFrame);
        layoutWidget10->setObjectName(QString::fromUtf8("layoutWidget10"));
        layoutWidget10->setGeometry(QRect(710, 50, 161, 45));
        verticalLayout_11 = new QVBoxLayout(layoutWidget10);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        lecturerCourseGradeTagLable = new QLabel(layoutWidget10);
        lecturerCourseGradeTagLable->setObjectName(QString::fromUtf8("lecturerCourseGradeTagLable"));
        lecturerCourseGradeTagLable->setStyleSheet(QString::fromUtf8("color:#666;\n"
"border:0px;"));

        verticalLayout_11->addWidget(lecturerCourseGradeTagLable);

        addLectureComboBox = new QComboBox(layoutWidget10);
        addLectureComboBox->addItem(QString());
        addLectureComboBox->setObjectName(QString::fromUtf8("addLectureComboBox"));
        addLectureComboBox->setStyleSheet(QString::fromUtf8("background:#fff;"));

        verticalLayout_11->addWidget(addLectureComboBox);

        printReport_pushButton = new QPushButton(addCourseFrame);
        printReport_pushButton->setObjectName(QString::fromUtf8("printReport_pushButton"));
        printReport_pushButton->setGeometry(QRect(1000, 210, 141, 32));
        printReport_pushButton->setStyleSheet(QString::fromUtf8("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons White/Icons/White/Download.png"), QSize(), QIcon::Normal, QIcon::Off);
        printReport_pushButton->setIcon(icon13);
        pageTitleCourseListPage_2 = new QFrame(ViewProgramSequence);
        pageTitleCourseListPage_2->setObjectName(QString::fromUtf8("pageTitleCourseListPage_2"));
        pageTitleCourseListPage_2->setGeometry(QRect(10, 0, 1151, 41));
        pageTitleCourseListPage_2->setFont(font4);
        pageTitleCourseListPage_2->setStyleSheet(QString::fromUtf8("border-bottom:1px solid #999999;"));
        pageTitleCourseListPage_2->setFrameShape(QFrame::StyledPanel);
        pageTitleCourseListPage_2->setFrameShadow(QFrame::Raised);
        pageNameLabel_3 = new QLabel(pageTitleCourseListPage_2);
        pageNameLabel_3->setObjectName(QString::fromUtf8("pageNameLabel_3"));
        pageNameLabel_3->setGeometry(QRect(700, 0, 431, 31));
        pageNameLabel_3->setFont(font5);
        pageNameLabel_3->setLayoutDirection(Qt::LeftToRight);
        pageNameLabel_3->setStyleSheet(QString::fromUtf8("color:#999; border: 0px;"));
        pageNameLabel_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        AddProgramSequenceFormTitle_2 = new QLabel(ViewProgramSequence);
        AddProgramSequenceFormTitle_2->setObjectName(QString::fromUtf8("AddProgramSequenceFormTitle_2"));
        AddProgramSequenceFormTitle_2->setGeometry(QRect(10, 510, 1151, 51));
        AddProgramSequenceFormTitle_2->setFont(font11);
        AddProgramSequenceFormTitle_2->setStyleSheet(QString::fromUtf8("background:#70808c;\n"
"color:#fff;\n"
"border-bottom-left-radius:0px;\n"
"border-bottom-right-radius:0px;"));
        AddProgramSequenceFormTitle_2->setAlignment(Qt::AlignCenter);
        studentSearchButton = new QPushButton(ViewProgramSequence);
        studentSearchButton->setObjectName(QString::fromUtf8("studentSearchButton"));
        studentSearchButton->setGeometry(QRect(1030, 520, 111, 31));
        studentSearchButton->setStyleSheet(QString::fromUtf8("background:#292f38;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-top-left-radius:0px;\n"
"border-top-right-radius:5px;\n"
"border-bottom-left-radius:0px;\n"
"border-bottom-right-radius:5px;"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons White/Icons/White/Search.png"), QSize(), QIcon::Normal, QIcon::Off);
        studentSearchButton->setIcon(icon14);
        studentSearchButton->setAutoDefault(false);
        studentSearchLineEdit = new QLineEdit(ViewProgramSequence);
        studentSearchLineEdit->setObjectName(QString::fromUtf8("studentSearchLineEdit"));
        studentSearchLineEdit->setGeometry(QRect(730, 520, 301, 31));
        studentSearchLineEdit->setStyleSheet(QString::fromUtf8("color:#000;\n"
"padding: 5px;"));
        lecturePrintReport_pushButton = new QPushButton(ViewProgramSequence);
        lecturePrintReport_pushButton->setObjectName(QString::fromUtf8("lecturePrintReport_pushButton"));
        lecturePrintReport_pushButton->setGeometry(QRect(300, 520, 141, 32));
        lecturePrintReport_pushButton->setStyleSheet(QString::fromUtf8("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        lecturePrintReport_pushButton->setIcon(icon13);
        stackedWidgetPages->addWidget(ViewProgramSequence);
        AddCourse = new QWidget();
        AddCourse->setObjectName(QString::fromUtf8("AddCourse"));
        pageTitleCourseListPage_4 = new QFrame(AddCourse);
        pageTitleCourseListPage_4->setObjectName(QString::fromUtf8("pageTitleCourseListPage_4"));
        pageTitleCourseListPage_4->setGeometry(QRect(10, 0, 1151, 41));
        pageTitleCourseListPage_4->setFont(font4);
        pageTitleCourseListPage_4->setStyleSheet(QString::fromUtf8("border-bottom:1px solid #999999;"));
        pageTitleCourseListPage_4->setFrameShape(QFrame::StyledPanel);
        pageTitleCourseListPage_4->setFrameShadow(QFrame::Raised);
        pageNameLabel_5 = new QLabel(pageTitleCourseListPage_4);
        pageNameLabel_5->setObjectName(QString::fromUtf8("pageNameLabel_5"));
        pageNameLabel_5->setGeometry(QRect(920, 0, 211, 31));
        pageNameLabel_5->setFont(font5);
        pageNameLabel_5->setLayoutDirection(Qt::LeftToRight);
        pageNameLabel_5->setStyleSheet(QString::fromUtf8("color:#999; border: 0px;"));
        pageNameLabel_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        addUpdateCourseWidget = new QLabel(AddCourse);
        addUpdateCourseWidget->setObjectName(QString::fromUtf8("addUpdateCourseWidget"));
        addUpdateCourseWidget->setGeometry(QRect(70, 610, 471, 41));
        addUpdateCourseWidget->setFont(font9);
        addUpdateCourseWidget->setStyleSheet(QString::fromUtf8("padding-left:5px;\n"
"background:#70808c;\n"
"color:#fff;\n"
"border-top-left-radius:5px;\n"
"border-top-right-radius:5px;\n"
"border-bottom-left-radius:0px;\n"
"border-bottom-right-radius:0px;"));
        addUpdateCourseWidget->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        programSequenceFacultyName_3 = new QLabel(AddCourse);
        programSequenceFacultyName_3->setObjectName(QString::fromUtf8("programSequenceFacultyName_3"));
        programSequenceFacultyName_3->setGeometry(QRect(10, 60, 1151, 41));
        programSequenceFacultyName_3->setFont(font9);
        programSequenceFacultyName_3->setStyleSheet(QString::fromUtf8("padding-left:5px;\n"
"background:#70808c;\n"
"color:#fff;\n"
"border-top-left-radius:5px;\n"
"border-top-right-radius:5px;\n"
"border-bottom-left-radius:0px;\n"
"border-bottom-right-radius:0px;"));
        programSequenceFacultyName_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lecturerCoursesListTableWidget = new QTableWidget(AddCourse);
        lecturerCoursesListTableWidget->setObjectName(QString::fromUtf8("lecturerCoursesListTableWidget"));
        lecturerCoursesListTableWidget->setGeometry(QRect(10, 100, 1151, 491));
        lecturerCoursesListTableWidget->setStyleSheet(QString::fromUtf8(""));
        lecturerCoursesListTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        titleCourseListPage_2 = new QFrame(AddCourse);
        titleCourseListPage_2->setObjectName(QString::fromUtf8("titleCourseListPage_2"));
        titleCourseListPage_2->setGeometry(QRect(70, 650, 471, 161));
        titleCourseListPage_2->setStyleSheet(QString::fromUtf8("background:#fff;\n"
"border-top-left-radius:0;\n"
"border-top-right-radius:0;"));
        titleCourseListPage_2->setFrameShape(QFrame::StyledPanel);
        titleCourseListPage_2->setFrameShadow(QFrame::Raised);
        courseCodeLabel = new QLabel(titleCourseListPage_2);
        courseCodeLabel->setObjectName(QString::fromUtf8("courseCodeLabel"));
        courseCodeLabel->setGeometry(QRect(30, 20, 41, 16));
        courseCodeLabel->setFont(font8);
        courseCodeLabel->setStyleSheet(QString::fromUtf8("color:#666"));
        courseResultLabel = new QLabel(titleCourseListPage_2);
        courseResultLabel->setObjectName(QString::fromUtf8("courseResultLabel"));
        courseResultLabel->setGeometry(QRect(30, 80, 51, 16));
        courseResultLabel->setFont(font8);
        courseResultLabel->setStyleSheet(QString::fromUtf8("color:#666"));
        pendingViewCourseTable_2 = new QLabel(titleCourseListPage_2);
        pendingViewCourseTable_2->setObjectName(QString::fromUtf8("pendingViewCourseTable_2"));
        pendingViewCourseTable_2->setGeometry(QRect(40, 110, 411, 21));
        pendingViewCourseTable_2->setFont(font6);
        pendingViewCourseTable_2->setStyleSheet(QString::fromUtf8("color:red;"));
        CourseCodelineEdit = new QLineEdit(titleCourseListPage_2);
        CourseCodelineEdit->setObjectName(QString::fromUtf8("CourseCodelineEdit"));
        CourseCodelineEdit->setGeometry(QRect(80, 20, 113, 20));
        CourseCodelineEdit->setStyleSheet(QString::fromUtf8("color:#000;\n"
"border-bottom:1px dotted #999;"));
        filterSearchButton = new QPushButton(titleCourseListPage_2);
        filterSearchButton->setObjectName(QString::fromUtf8("filterSearchButton"));
        filterSearchButton->setGeometry(QRect(220, 20, 121, 26));
        filterSearchButton->setStyleSheet(QString::fromUtf8("background:#292f38;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        filterSearchButton->setIcon(icon14);
        filterSearchButton->setAutoDefault(false);
        courseResultInfoLabel = new QLabel(titleCourseListPage_2);
        courseResultInfoLabel->setObjectName(QString::fromUtf8("courseResultInfoLabel"));
        courseResultInfoLabel->setGeometry(QRect(90, 80, 231, 16));
        courseResultInfoLabel->setFont(font8);
        courseResultInfoLabel->setStyleSheet(QString::fromUtf8("color:#000;\n"
"border-bottom:1px dotted #999;"));
        addButton = new QPushButton(titleCourseListPage_2);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(330, 120, 121, 26));
        addButton->setStyleSheet(QString::fromUtf8("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        addButton->setIcon(icon8);
        addButton->setAutoDefault(false);
        frame_3 = new QFrame(AddCourse);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(170, 500, 120, 80));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        titleCourseListPage_3 = new QFrame(AddCourse);
        titleCourseListPage_3->setObjectName(QString::fromUtf8("titleCourseListPage_3"));
        titleCourseListPage_3->setGeometry(QRect(590, 650, 501, 161));
        titleCourseListPage_3->setStyleSheet(QString::fromUtf8("background:#fff;\n"
"border-top-left-radius:0;\n"
"border-top-right-radius:0;"));
        titleCourseListPage_3->setFrameShape(QFrame::StyledPanel);
        titleCourseListPage_3->setFrameShadow(QFrame::Raised);
        courseResultLabe_4 = new QLabel(titleCourseListPage_3);
        courseResultLabe_4->setObjectName(QString::fromUtf8("courseResultLabe_4"));
        courseResultLabe_4->setGeometry(QRect(30, 20, 91, 16));
        courseResultLabe_4->setFont(font8);
        courseResultLabe_4->setStyleSheet(QString::fromUtf8("color:#666"));
        addCourseButton = new QPushButton(titleCourseListPage_3);
        addCourseButton->setObjectName(QString::fromUtf8("addCourseButton"));
        addCourseButton->setGeometry(QRect(370, 120, 121, 26));
        addCourseButton->setStyleSheet(QString::fromUtf8("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        addCourseButton->setIcon(icon7);
        addCourseButton->setAutoDefault(false);
        updateCourseName = new QLabel(titleCourseListPage_3);
        updateCourseName->setObjectName(QString::fromUtf8("updateCourseName"));
        updateCourseName->setGeometry(QRect(130, 20, 231, 16));
        updateCourseName->setFont(font8);
        updateCourseName->setStyleSheet(QString::fromUtf8("color:#000;\n"
"border-bottom:1px dotted #999;"));
        courseResultLabe_6 = new QLabel(titleCourseListPage_3);
        courseResultLabe_6->setObjectName(QString::fromUtf8("courseResultLabe_6"));
        courseResultLabe_6->setGeometry(QRect(30, 110, 61, 16));
        courseResultLabe_6->setFont(font8);
        courseResultLabe_6->setStyleSheet(QString::fromUtf8("color:#666"));
        courseCodeLabel_6 = new QLabel(titleCourseListPage_3);
        courseCodeLabel_6->setObjectName(QString::fromUtf8("courseCodeLabel_6"));
        courseCodeLabel_6->setGeometry(QRect(150, 110, 41, 16));
        courseCodeLabel_6->setFont(font8);
        courseCodeLabel_6->setStyleSheet(QString::fromUtf8("color:#666"));
        courseResultLabe_5 = new QLabel(titleCourseListPage_3);
        courseResultLabe_5->setObjectName(QString::fromUtf8("courseResultLabe_5"));
        courseResultLabe_5->setGeometry(QRect(30, 60, 81, 16));
        courseResultLabe_5->setFont(font8);
        courseResultLabe_5->setStyleSheet(QString::fromUtf8("color:#666"));
        updatePrerequisites = new QLineEdit(titleCourseListPage_3);
        updatePrerequisites->setObjectName(QString::fromUtf8("updatePrerequisites"));
        updatePrerequisites->setGeometry(QRect(130, 60, 211, 20));
        updatePrerequisites->setStyleSheet(QString::fromUtf8("color:#000;\n"
"border-bottom:1px dotted #999;"));
        updateSemester = new QLineEdit(titleCourseListPage_3);
        updateSemester->setObjectName(QString::fromUtf8("updateSemester"));
        updateSemester->setGeometry(QRect(100, 110, 41, 20));
        updateSemester->setStyleSheet(QString::fromUtf8("color:#000;\n"
"border-bottom:1px dotted #999;"));
        updateYear = new QLineEdit(titleCourseListPage_3);
        updateYear->setObjectName(QString::fromUtf8("updateYear"));
        updateYear->setGeometry(QRect(200, 110, 41, 20));
        updateYear->setStyleSheet(QString::fromUtf8("color:#000;\n"
"border-bottom:1px dotted #999;"));
        filterSearchButton_4 = new QPushButton(titleCourseListPage_3);
        filterSearchButton_4->setObjectName(QString::fromUtf8("filterSearchButton_4"));
        filterSearchButton_4->setGeometry(QRect(380, 50, 101, 26));
        filterSearchButton_4->setStyleSheet(QString::fromUtf8("background:#292f38;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icons White/Icons/White/Double Arrow LEFT.png"), QSize(), QIcon::Normal, QIcon::Off);
        filterSearchButton_4->setIcon(icon15);
        filterSearchButton_4->setAutoDefault(false);
        addUpdateCourseWidget_2 = new QLabel(AddCourse);
        addUpdateCourseWidget_2->setObjectName(QString::fromUtf8("addUpdateCourseWidget_2"));
        addUpdateCourseWidget_2->setGeometry(QRect(590, 610, 501, 41));
        addUpdateCourseWidget_2->setFont(font9);
        addUpdateCourseWidget_2->setStyleSheet(QString::fromUtf8("padding-left:5px;\n"
"background:#70808c;\n"
"color:#fff;\n"
"border-top-left-radius:5px;\n"
"border-top-right-radius:5px;\n"
"border-bottom-left-radius:0px;\n"
"border-bottom-right-radius:0px;"));
        addUpdateCourseWidget_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        stackedWidgetPages->addWidget(AddCourse);
        ViewComments = new QWidget();
        ViewComments->setObjectName(QString::fromUtf8("ViewComments"));
        courseCommentsName = new QLabel(ViewComments);
        courseCommentsName->setObjectName(QString::fromUtf8("courseCommentsName"));
        courseCommentsName->setGeometry(QRect(500, 60, 661, 41));
        courseCommentsName->setFont(font9);
        courseCommentsName->setStyleSheet(QString::fromUtf8("padding-left:5px;\n"
"background:#70808c;\n"
"color:#fff;\n"
"border-top-left-radius:5px;\n"
"border-top-right-radius:5px;\n"
"border-bottom-left-radius:0px;\n"
"border-bottom-right-radius:0px;"));
        courseCommentsName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pageTitleCourseListPage_5 = new QFrame(ViewComments);
        pageTitleCourseListPage_5->setObjectName(QString::fromUtf8("pageTitleCourseListPage_5"));
        pageTitleCourseListPage_5->setGeometry(QRect(10, 0, 1151, 41));
        pageTitleCourseListPage_5->setFont(font4);
        pageTitleCourseListPage_5->setStyleSheet(QString::fromUtf8("border-bottom:1px solid #999999;"));
        pageTitleCourseListPage_5->setFrameShape(QFrame::StyledPanel);
        pageTitleCourseListPage_5->setFrameShadow(QFrame::Raised);
        pageNameLabel_6 = new QLabel(pageTitleCourseListPage_5);
        pageNameLabel_6->setObjectName(QString::fromUtf8("pageNameLabel_6"));
        pageNameLabel_6->setGeometry(QRect(920, 0, 211, 31));
        pageNameLabel_6->setFont(font5);
        pageNameLabel_6->setLayoutDirection(Qt::LeftToRight);
        pageNameLabel_6->setStyleSheet(QString::fromUtf8("color:#999; border: 0px;"));
        pageNameLabel_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        searcCourseCodeWidget = new QLabel(ViewComments);
        searcCourseCodeWidget->setObjectName(QString::fromUtf8("searcCourseCodeWidget"));
        searcCourseCodeWidget->setGeometry(QRect(10, 60, 471, 51));
        searcCourseCodeWidget->setFont(font9);
        searcCourseCodeWidget->setStyleSheet(QString::fromUtf8("padding-left:5px;\n"
"background:#70808c;\n"
"color:#fff;\n"
"border-top-left-radius:5px;\n"
"border-top-right-radius:5px;\n"
"border-bottom-left-radius:0px;\n"
"border-bottom-right-radius:0px;"));
        searcCourseCodeWidget->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        titleCourseListPage_5 = new QFrame(ViewComments);
        titleCourseListPage_5->setObjectName(QString::fromUtf8("titleCourseListPage_5"));
        titleCourseListPage_5->setGeometry(QRect(10, 110, 471, 701));
        titleCourseListPage_5->setStyleSheet(QString::fromUtf8("background:#fff;\n"
"border-top-left-radius:0;\n"
"border-top-right-radius:0;"));
        titleCourseListPage_5->setFrameShape(QFrame::StyledPanel);
        titleCourseListPage_5->setFrameShadow(QFrame::Raised);
        pendingViewCourseTable_3 = new QLabel(titleCourseListPage_5);
        pendingViewCourseTable_3->setObjectName(QString::fromUtf8("pendingViewCourseTable_3"));
        pendingViewCourseTable_3->setGeometry(QRect(40, 110, 411, 21));
        pendingViewCourseTable_3->setFont(font6);
        pendingViewCourseTable_3->setStyleSheet(QString::fromUtf8("color:red;"));
        searchResultCourseCommentTableWidget = new QTableWidget(titleCourseListPage_5);
        searchResultCourseCommentTableWidget->setObjectName(QString::fromUtf8("searchResultCourseCommentTableWidget"));
        searchResultCourseCommentTableWidget->setGeometry(QRect(10, 10, 451, 641));
        searchResultCourseCommentTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        searchResultCourseCommentTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        commentSearchCourseCODEButton = new QPushButton(ViewComments);
        commentSearchCourseCODEButton->setObjectName(QString::fromUtf8("commentSearchCourseCODEButton"));
        commentSearchCourseCODEButton->setGeometry(QRect(340, 70, 111, 31));
        commentSearchCourseCODEButton->setStyleSheet(QString::fromUtf8("background:#292f38;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-top-left-radius:0px;\n"
"border-top-right-radius:5px;\n"
"border-bottom-left-radius:0px;\n"
"border-bottom-right-radius:5px;"));
        commentSearchCourseCODEButton->setIcon(icon14);
        commentSearchCourseCODEButton->setAutoDefault(false);
        commentsSearchCourseCodelineEdit = new QLineEdit(ViewComments);
        commentsSearchCourseCodelineEdit->setObjectName(QString::fromUtf8("commentsSearchCourseCodelineEdit"));
        commentsSearchCourseCodelineEdit->setGeometry(QRect(40, 70, 301, 31));
        commentsSearchCourseCodelineEdit->setStyleSheet(QString::fromUtf8("color:#000;\n"
"padding: 5px;"));
        scrollArea = new QScrollArea(ViewComments);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(500, 100, 661, 711));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 661, 711));
        scrollArea->setWidget(scrollAreaWidgetContents);
        stackedWidgetPages->addWidget(ViewComments);
        AddProgramSequence = new QWidget();
        AddProgramSequence->setObjectName(QString::fromUtf8("AddProgramSequence"));
        pageTitleCourseListPage_6 = new QFrame(AddProgramSequence);
        pageTitleCourseListPage_6->setObjectName(QString::fromUtf8("pageTitleCourseListPage_6"));
        pageTitleCourseListPage_6->setGeometry(QRect(10, 0, 1151, 41));
        pageTitleCourseListPage_6->setFont(font4);
        pageTitleCourseListPage_6->setStyleSheet(QString::fromUtf8("border-bottom:1px solid #999999;"));
        pageTitleCourseListPage_6->setFrameShape(QFrame::StyledPanel);
        pageTitleCourseListPage_6->setFrameShadow(QFrame::Raised);
        pageNameLabel_2 = new QLabel(pageTitleCourseListPage_6);
        pageNameLabel_2->setObjectName(QString::fromUtf8("pageNameLabel_2"));
        pageNameLabel_2->setGeometry(QRect(830, 0, 321, 31));
        pageNameLabel_2->setFont(font5);
        pageNameLabel_2->setLayoutDirection(Qt::LeftToRight);
        pageNameLabel_2->setStyleSheet(QString::fromUtf8("color:#999; border: 0px;"));
        pageNameLabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        courseCommentsName_3 = new QLabel(AddProgramSequence);
        courseCommentsName_3->setObjectName(QString::fromUtf8("courseCommentsName_3"));
        courseCommentsName_3->setGeometry(QRect(10, 50, 581, 41));
        courseCommentsName_3->setFont(font9);
        courseCommentsName_3->setStyleSheet(QString::fromUtf8("padding-left:5px;\n"
"background:#70808c;\n"
"color:#fff;\n"
"border-top-left-radius:5px;\n"
"border-top-right-radius:5px;\n"
"border-bottom-left-radius:0px;\n"
"border-bottom-right-radius:0px;"));
        courseCommentsName_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        frame_4 = new QFrame(AddProgramSequence);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(10, 90, 581, 151));
        frame_4->setStyleSheet(QString::fromUtf8("color:#999;background:#fff;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        idTagLable = new QLabel(frame_4);
        idTagLable->setObjectName(QString::fromUtf8("idTagLable"));
        idTagLable->setGeometry(QRect(20, 20, 161, 18));
        idTagLable->setStyleSheet(QString::fromUtf8("color:#666;\n"
"border:0px;"));
        idLineEdit = new QLineEdit(frame_4);
        idLineEdit->setObjectName(QString::fromUtf8("idLineEdit"));
        idLineEdit->setEnabled(true);
        idLineEdit->setGeometry(QRect(20, 40, 41, 30));
        idLineEdit->setMinimumSize(QSize(0, 30));
        idLineEdit->setMaximumSize(QSize(16777215, 30));
        idLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;\n"
"border:0px;\n"
"border-bottom:1px dotted #999;"));
        seqNameLineEdit = new QLineEdit(frame_4);
        seqNameLineEdit->setObjectName(QString::fromUtf8("seqNameLineEdit"));
        seqNameLineEdit->setEnabled(true);
        seqNameLineEdit->setGeometry(QRect(90, 40, 151, 30));
        seqNameLineEdit->setMinimumSize(QSize(0, 30));
        seqNameLineEdit->setMaximumSize(QSize(16777215, 30));
        seqNameLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;\n"
"border:0px;\n"
"border-bottom:1px dotted #999;"));
        sequenceNameTagLable_2 = new QLabel(frame_4);
        sequenceNameTagLable_2->setObjectName(QString::fromUtf8("sequenceNameTagLable_2"));
        sequenceNameTagLable_2->setGeometry(QRect(90, 20, 161, 18));
        sequenceNameTagLable_2->setStyleSheet(QString::fromUtf8("color:#666;\n"
"border:0px;"));
        facultyLineEdit = new QLineEdit(frame_4);
        facultyLineEdit->setObjectName(QString::fromUtf8("facultyLineEdit"));
        facultyLineEdit->setEnabled(true);
        facultyLineEdit->setGeometry(QRect(260, 40, 201, 30));
        facultyLineEdit->setMinimumSize(QSize(0, 30));
        facultyLineEdit->setMaximumSize(QSize(16777215, 30));
        facultyLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;\n"
"border:0px;\n"
"border-bottom:1px dotted #999;"));
        facultyTagLable = new QLabel(frame_4);
        facultyTagLable->setObjectName(QString::fromUtf8("facultyTagLable"));
        facultyTagLable->setGeometry(QRect(260, 20, 161, 18));
        facultyTagLable->setStyleSheet(QString::fromUtf8("color:#666;\n"
"border:0px;"));
        yearLineEdit = new QLineEdit(frame_4);
        yearLineEdit->setObjectName(QString::fromUtf8("yearLineEdit"));
        yearLineEdit->setEnabled(true);
        yearLineEdit->setGeometry(QRect(490, 40, 81, 30));
        yearLineEdit->setMinimumSize(QSize(0, 30));
        yearLineEdit->setMaximumSize(QSize(16777215, 30));
        yearLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;\n"
"border:0px;\n"
"border-bottom:1px dotted #999;"));
        yearTagLable = new QLabel(frame_4);
        yearTagLable->setObjectName(QString::fromUtf8("yearTagLable"));
        yearTagLable->setGeometry(QRect(490, 20, 71, 18));
        yearTagLable->setStyleSheet(QString::fromUtf8("color:#666;\n"
"border:0px;"));
        addCourseSequencepushButton = new QPushButton(frame_4);
        addCourseSequencepushButton->setObjectName(QString::fromUtf8("addCourseSequencepushButton"));
        addCourseSequencepushButton->setGeometry(QRect(470, 100, 101, 32));
        addCourseSequencepushButton->setStyleSheet(QString::fromUtf8("background:#292f38;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/icons White/Icons/White/Double Arrow RIGHT.png"), QSize(), QIcon::Normal, QIcon::Off);
        addCourseSequencepushButton->setIcon(icon16);
        addCourseSequenceframe = new QFrame(AddProgramSequence);
        addCourseSequenceframe->setObjectName(QString::fromUtf8("addCourseSequenceframe"));
        addCourseSequenceframe->setGeometry(QRect(10, 270, 581, 341));
        addCourseSequenceframe->setStyleSheet(QString::fromUtf8("color:#999;background:#fff;"));
        addCourseSequenceframe->setFrameShape(QFrame::StyledPanel);
        addCourseSequenceframe->setFrameShadow(QFrame::Raised);
        idTagLable_5 = new QLabel(addCourseSequenceframe);
        idTagLable_5->setObjectName(QString::fromUtf8("idTagLable_5"));
        idTagLable_5->setGeometry(QRect(20, 70, 161, 18));
        idTagLable_5->setStyleSheet(QString::fromUtf8("color:#666;\n"
"border:0px;"));
        addCodeLineEdit = new QLineEdit(addCourseSequenceframe);
        addCodeLineEdit->setObjectName(QString::fromUtf8("addCodeLineEdit"));
        addCodeLineEdit->setEnabled(true);
        addCodeLineEdit->setGeometry(QRect(20, 90, 61, 30));
        addCodeLineEdit->setMinimumSize(QSize(0, 30));
        addCodeLineEdit->setMaximumSize(QSize(16777215, 30));
        addCodeLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;\n"
"border:0px;\n"
"border-bottom:1px dotted #999;"));
        addNameLineEdit = new QLineEdit(addCourseSequenceframe);
        addNameLineEdit->setObjectName(QString::fromUtf8("addNameLineEdit"));
        addNameLineEdit->setEnabled(true);
        addNameLineEdit->setGeometry(QRect(120, 90, 161, 30));
        addNameLineEdit->setMinimumSize(QSize(0, 30));
        addNameLineEdit->setMaximumSize(QSize(16777215, 30));
        addNameLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;\n"
"border:0px;\n"
"border-bottom:1px dotted #999;"));
        idTagLable_6 = new QLabel(addCourseSequenceframe);
        idTagLable_6->setObjectName(QString::fromUtf8("idTagLable_6"));
        idTagLable_6->setGeometry(QRect(120, 70, 141, 18));
        idTagLable_6->setStyleSheet(QString::fromUtf8("color:#666;\n"
"border:0px;"));
        addCreditLineEdit = new QLineEdit(addCourseSequenceframe);
        addCreditLineEdit->setObjectName(QString::fromUtf8("addCreditLineEdit"));
        addCreditLineEdit->setEnabled(true);
        addCreditLineEdit->setGeometry(QRect(20, 170, 41, 30));
        addCreditLineEdit->setMinimumSize(QSize(0, 30));
        addCreditLineEdit->setMaximumSize(QSize(16777215, 30));
        addCreditLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;\n"
"border:0px;\n"
"border-bottom:1px dotted #999;"));
        idTagLable_7 = new QLabel(addCourseSequenceframe);
        idTagLable_7->setObjectName(QString::fromUtf8("idTagLable_7"));
        idTagLable_7->setGeometry(QRect(20, 150, 41, 18));
        idTagLable_7->setStyleSheet(QString::fromUtf8("color:#666;\n"
"border:0px;"));
        idTagLable_8 = new QLabel(addCourseSequenceframe);
        idTagLable_8->setObjectName(QString::fromUtf8("idTagLable_8"));
        idTagLable_8->setGeometry(QRect(100, 150, 141, 18));
        idTagLable_8->setStyleSheet(QString::fromUtf8("color:#666;\n"
"border:0px;"));
        addPrerequisiteLineEdit = new QLineEdit(addCourseSequenceframe);
        addPrerequisiteLineEdit->setObjectName(QString::fromUtf8("addPrerequisiteLineEdit"));
        addPrerequisiteLineEdit->setEnabled(true);
        addPrerequisiteLineEdit->setGeometry(QRect(100, 170, 181, 30));
        addPrerequisiteLineEdit->setMinimumSize(QSize(0, 30));
        addPrerequisiteLineEdit->setMaximumSize(QSize(16777215, 30));
        addPrerequisiteLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;\n"
"border:0px;\n"
"border-bottom:1px dotted #999;"));
        courseCommentsName_4 = new QLabel(addCourseSequenceframe);
        courseCommentsName_4->setObjectName(QString::fromUtf8("courseCommentsName_4"));
        courseCommentsName_4->setGeometry(QRect(0, 0, 581, 51));
        courseCommentsName_4->setFont(font9);
        courseCommentsName_4->setStyleSheet(QString::fromUtf8("padding-left:5px;\n"
"background:#70808c;\n"
"color:#fff;\n"
"border-top-left-radius:5px;\n"
"border-top-right-radius:5px;\n"
"border-bottom-left-radius:0px;\n"
"border-bottom-right-radius:0px;"));
        courseCommentsName_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        updateCourse_pushButton_3 = new QPushButton(addCourseSequenceframe);
        updateCourse_pushButton_3->setObjectName(QString::fromUtf8("updateCourse_pushButton_3"));
        updateCourse_pushButton_3->setGeometry(QRect(460, 10, 111, 32));
        updateCourse_pushButton_3->setStyleSheet(QString::fromUtf8("background:#292f38;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        updateCourse_pushButton_3->setIcon(icon8);
        addSemesterLineEdit = new QLineEdit(addCourseSequenceframe);
        addSemesterLineEdit->setObjectName(QString::fromUtf8("addSemesterLineEdit"));
        addSemesterLineEdit->setEnabled(true);
        addSemesterLineEdit->setGeometry(QRect(20, 260, 91, 30));
        addSemesterLineEdit->setMinimumSize(QSize(0, 30));
        addSemesterLineEdit->setMaximumSize(QSize(16777215, 30));
        addSemesterLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;\n"
"border:0px;\n"
"border-bottom:1px dotted #999;"));
        SemesterTagLable = new QLabel(addCourseSequenceframe);
        SemesterTagLable->setObjectName(QString::fromUtf8("SemesterTagLable"));
        SemesterTagLable->setGeometry(QRect(20, 240, 81, 18));
        SemesterTagLable->setStyleSheet(QString::fromUtf8("color:#666;\n"
"border:0px;"));
        draftProgSequenceFrame = new QFrame(AddProgramSequence);
        draftProgSequenceFrame->setObjectName(QString::fromUtf8("draftProgSequenceFrame"));
        draftProgSequenceFrame->setGeometry(QRect(620, 50, 541, 771));
        draftProgSequenceFrame->setStyleSheet(QString::fromUtf8("background:#fff;"));
        draftProgSequenceFrame->setFrameShape(QFrame::StyledPanel);
        draftProgSequenceFrame->setFrameShadow(QFrame::Raised);
        draftYearLineEdit = new QLineEdit(draftProgSequenceFrame);
        draftYearLineEdit->setObjectName(QString::fromUtf8("draftYearLineEdit"));
        draftYearLineEdit->setEnabled(true);
        draftYearLineEdit->setGeometry(QRect(450, 50, 81, 30));
        draftYearLineEdit->setMinimumSize(QSize(0, 30));
        draftYearLineEdit->setMaximumSize(QSize(16777215, 30));
        draftYearLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;\n"
"border:0px;\n"
"border-bottom:1px dotted #999;"));
        draftSeqLineEdit = new QLineEdit(draftProgSequenceFrame);
        draftSeqLineEdit->setObjectName(QString::fromUtf8("draftSeqLineEdit"));
        draftSeqLineEdit->setEnabled(true);
        draftSeqLineEdit->setGeometry(QRect(80, 80, 181, 30));
        draftSeqLineEdit->setMinimumSize(QSize(0, 30));
        draftSeqLineEdit->setMaximumSize(QSize(16777215, 30));
        draftSeqLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;\n"
"border:0px;\n"
"border-bottom:1px dotted #999;"));
        draftFacultyLineEdit = new QLineEdit(draftProgSequenceFrame);
        draftFacultyLineEdit->setObjectName(QString::fromUtf8("draftFacultyLineEdit"));
        draftFacultyLineEdit->setEnabled(true);
        draftFacultyLineEdit->setGeometry(QRect(300, 80, 111, 30));
        draftFacultyLineEdit->setMinimumSize(QSize(0, 30));
        draftFacultyLineEdit->setMaximumSize(QSize(16777215, 30));
        draftFacultyLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;\n"
"border:0px;\n"
"border-bottom:1px dotted #999;"));
        draftIDLineEdit = new QLineEdit(draftProgSequenceFrame);
        draftIDLineEdit->setObjectName(QString::fromUtf8("draftIDLineEdit"));
        draftIDLineEdit->setEnabled(true);
        draftIDLineEdit->setGeometry(QRect(10, 50, 41, 30));
        draftIDLineEdit->setMinimumSize(QSize(0, 30));
        draftIDLineEdit->setMaximumSize(QSize(16777215, 30));
        draftIDLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;\n"
"border:0px;\n"
"border-bottom:1px dotted #999;"));
        courseCommentsName_2 = new QLabel(draftProgSequenceFrame);
        courseCommentsName_2->setObjectName(QString::fromUtf8("courseCommentsName_2"));
        courseCommentsName_2->setGeometry(QRect(0, 0, 541, 51));
        QFont font13;
        font13.setPointSize(12);
        font13.setBold(true);
        font13.setWeight(75);
        courseCommentsName_2->setFont(font13);
        courseCommentsName_2->setStyleSheet(QString::fromUtf8("padding-left:5px;\n"
"background:#70808c;\n"
"color:#fff;\n"
"border-top-left-radius:5px;\n"
"border-top-right-radius:5px;\n"
"border-bottom-left-radius:0px;\n"
"border-bottom-right-radius:0px;"));
        courseCommentsName_2->setAlignment(Qt::AlignCenter);
        draftTableWidget = new QTableWidget(draftProgSequenceFrame);
        draftTableWidget->setObjectName(QString::fromUtf8("draftTableWidget"));
        draftTableWidget->setGeometry(QRect(0, 130, 541, 631));
        saveSequencepushButton = new QPushButton(draftProgSequenceFrame);
        saveSequencepushButton->setObjectName(QString::fromUtf8("saveSequencepushButton"));
        saveSequencepushButton->setGeometry(QRect(430, 10, 101, 32));
        saveSequencepushButton->setStyleSheet(QString::fromUtf8("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/icons White/Icons/White/Upload.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveSequencepushButton->setIcon(icon17);
        stackedWidgetPages->addWidget(AddProgramSequence);
        stackedWidgetSGS->addWidget(Dashboard);
        sgsApp->setCentralWidget(centralwidget);

        retranslateUi(sgsApp);

        stackedWidgetSGS->setCurrentIndex(1);
        stackedWidgetPages->setCurrentIndex(3);
        studentSearchButton->setDefault(false);
        filterSearchButton->setDefault(false);
        addButton->setDefault(false);
        addCourseButton->setDefault(false);
        filterSearchButton_4->setDefault(false);
        commentSearchCourseCODEButton->setDefault(false);


        QMetaObject::connectSlotsByName(sgsApp);
    } // setupUi

    void retranslateUi(QMainWindow *sgsApp)
    {
        sgsApp->setWindowTitle(QCoreApplication::translate("sgsApp", "Student Grading System", nullptr));
        usernameInput->setPlaceholderText(QCoreApplication::translate("sgsApp", "Username", nullptr));
        passwordInput->setPlaceholderText(QCoreApplication::translate("sgsApp", "Password", nullptr));
        signInButton->setText(QCoreApplication::translate("sgsApp", "SIGN IN", nullptr));
        signUpButton->setText(QCoreApplication::translate("sgsApp", "SIGN UP", nullptr));
        forgotPasswordButton->setText(QCoreApplication::translate("sgsApp", "Forgot Password?", nullptr));
        label_4->setText(QCoreApplication::translate("sgsApp", "LOGIN", nullptr));
        loginErrorLabel->setText(QString());
        passwordShowButton->setText(QString());
        englishTranslationRadioButton->setText(QCoreApplication::translate("sgsApp", "English", nullptr));
        spanishTranslationRadioButton->setText(QCoreApplication::translate("sgsApp", "Espa\303\261ol", nullptr));
#if QT_CONFIG(tooltip)
        Sidebar->setToolTip(QCoreApplication::translate("sgsApp", "Add", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("sgsApp", "General Menu", nullptr));
        dashboard_pushButton->setText(QCoreApplication::translate("sgsApp", "Dashboard", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("sgsApp", "Student", nullptr));
#if QT_CONFIG(tooltip)
        viewComments_Button->setToolTip(QCoreApplication::translate("sgsApp", "Add Institution", nullptr));
#endif // QT_CONFIG(tooltip)
        viewComments_Button->setText(QCoreApplication::translate("sgsApp", "View Comments", nullptr));
        settingGroupBox->setTitle(QCoreApplication::translate("sgsApp", "Administration", nullptr));
#if QT_CONFIG(tooltip)
        addInstitution_Button->setToolTip(QCoreApplication::translate("sgsApp", "Add Institution", nullptr));
#endif // QT_CONFIG(tooltip)
        addInstitution_Button->setText(QCoreApplication::translate("sgsApp", "Institution", nullptr));
#if QT_CONFIG(tooltip)
        addCourse_Button->setToolTip(QCoreApplication::translate("sgsApp", "Add Cours", nullptr));
#endif // QT_CONFIG(tooltip)
        addCourse_Button->setText(QCoreApplication::translate("sgsApp", "Course", nullptr));
#if QT_CONFIG(tooltip)
        addUser_Button->setToolTip(QCoreApplication::translate("sgsApp", "Add Institution", nullptr));
#endif // QT_CONFIG(tooltip)
        addUser_Button->setText(QCoreApplication::translate("sgsApp", "User Account", nullptr));
#if QT_CONFIG(tooltip)
        disableUser_Button->setToolTip(QCoreApplication::translate("sgsApp", "Add Institution", nullptr));
#endif // QT_CONFIG(tooltip)
        disableUser_Button->setText(QCoreApplication::translate("sgsApp", "Disable/Activate User", nullptr));
#if QT_CONFIG(tooltip)
        changePassword_Button->setToolTip(QCoreApplication::translate("sgsApp", "Add Institution", nullptr));
#endif // QT_CONFIG(tooltip)
        changePassword_Button->setText(QCoreApplication::translate("sgsApp", "Change Password", nullptr));
        AddProgramSequence_Button->setText(QCoreApplication::translate("sgsApp", "Program Sequence", nullptr));
#if QT_CONFIG(tooltip)
        viewStudentProgramSequence_Button->setToolTip(QCoreApplication::translate("sgsApp", "Add Institution", nullptr));
#endif // QT_CONFIG(tooltip)
        viewStudentProgramSequence_Button->setText(QCoreApplication::translate("sgsApp", "Program Sequence", nullptr));
#if QT_CONFIG(tooltip)
        viewCourses_Button->setToolTip(QCoreApplication::translate("sgsApp", "Add Institution", nullptr));
#endif // QT_CONFIG(tooltip)
        viewCourses_Button->setText(QCoreApplication::translate("sgsApp", "View Courses", nullptr));
        AddLecturerCourse_Button->setText(QCoreApplication::translate("sgsApp", "Add Course", nullptr));
        logoutButton->setText(QCoreApplication::translate("sgsApp", " Logout", nullptr));
        userRoleLable_2->setText(QCoreApplication::translate("sgsApp", "|", nullptr));
        userIconTopBar->setText(QString());
        userRoleLable->setText(QCoreApplication::translate("sgsApp", ", STUDENT", nullptr));
        usernameLable->setText(QCoreApplication::translate("sgsApp", "USER:", nullptr));
        pageNameLabel_4->setText(QCoreApplication::translate("sgsApp", "/ Dashboard", nullptr));
        TMPlabel_5->setText(QCoreApplication::translate("sgsApp", "Widget 4", nullptr));
        TMPlabel_6->setText(QCoreApplication::translate("sgsApp", "Widget 5", nullptr));
        icon1Widget1->setText(QString());
        widget1Title->setText(QCoreApplication::translate("sgsApp", "Course Completed", nullptr));
        widget1courseComplete->setText(QCoreApplication::translate("sgsApp", "7", nullptr));
        icon1Widget2->setText(QString());
        widget2Title->setText(QCoreApplication::translate("sgsApp", "Pending Course ", nullptr));
        widget2TitleCoursePending->setText(QCoreApplication::translate("sgsApp", "7", nullptr));
        icon1Widget2_2->setText(QString());
        widget2Title_2->setText(QCoreApplication::translate("sgsApp", "Pending Course ", nullptr));
        widget2TitleCoursePending_2->setText(QCoreApplication::translate("sgsApp", "7", nullptr));
        icon1Widget2_5->setText(QString());
        widget2Title_5->setText(QCoreApplication::translate("sgsApp", "Total Comments", nullptr));
        widget2TitleCoursePending_5->setText(QCoreApplication::translate("sgsApp", "7", nullptr));
        icon1Widget2_6->setText(QString());
        widget2Title_6->setText(QCoreApplication::translate("sgsApp", "Pending Course ", nullptr));
        widget2TitleCoursePending_6->setText(QCoreApplication::translate("sgsApp", "7", nullptr));
        courseTitleViewCourseLabel->setText(QCoreApplication::translate("sgsApp", "Course:", nullptr));
        courseStatusViewCourseLabel->setText(QCoreApplication::translate("sgsApp", "Status:", nullptr));
        courseViewCourseTable->setText(QString());
        pendingViewCourseTable->setText(QString());
        programSequenceFacultyName_2->setText(QCoreApplication::translate("sgsApp", "All My Courses", nullptr));
        courseCommentViewCourseLabel->setText(QCoreApplication::translate("sgsApp", "Lastest Course Comments:", nullptr));
        commentPostedViewCourseLabel->setText(QCoreApplication::translate("sgsApp", "Posted:", nullptr));
        ratingStatusViewCourseLabel->setText(QCoreApplication::translate("sgsApp", "Rating:", nullptr));
        commentTimeStapViewCourseTable->setText(QCoreApplication::translate("sgsApp", "30/04/2021", nullptr));
        ratingViewCourseTable->setText(QCoreApplication::translate("sgsApp", "Bad", nullptr));
        userCommentViewCourseTable->setText(QString());
        pageNameLabel->setText(QCoreApplication::translate("sgsApp", "/ View Courses ", nullptr));
        programSequenceFacultyName->setText(QCoreApplication::translate("sgsApp", "Faculty of Science & Technology Math, Physics and IT Department", nullptr));
        programSequenceProgramName->setText(QCoreApplication::translate("sgsApp", "Bachelor Degree (Information Technology)", nullptr));
        AddProgramSequenceFormTitle->setText(QCoreApplication::translate("sgsApp", "Course Update", nullptr));
        updateCourse_pushButton->setText(QCoreApplication::translate("sgsApp", "Update", nullptr));
        courseNameCourseGradeTagLable->setText(QCoreApplication::translate("sgsApp", "Course Name:", nullptr));
        courseName_courseGradeLable->setText(QCoreApplication::translate("sgsApp", "Course Name", nullptr));
        gradeCourseGradeTagLable->setText(QCoreApplication::translate("sgsApp", "Grade:", nullptr));
        addCourseGradecomboBox->setItemText(0, QCoreApplication::translate("sgsApp", "Grade", nullptr));
        addCourseGradecomboBox->setItemText(1, QCoreApplication::translate("sgsApp", "A", nullptr));
        addCourseGradecomboBox->setItemText(2, QCoreApplication::translate("sgsApp", "A-", nullptr));
        addCourseGradecomboBox->setItemText(3, QCoreApplication::translate("sgsApp", "B", nullptr));
        addCourseGradecomboBox->setItemText(4, QCoreApplication::translate("sgsApp", "C", nullptr));
        addCourseGradecomboBox->setItemText(5, QCoreApplication::translate("sgsApp", "D", nullptr));
        addCourseGradecomboBox->setItemText(6, QCoreApplication::translate("sgsApp", "F", nullptr));
        addCourseGradecomboBox->setItemText(7, QCoreApplication::translate("sgsApp", "TR", nullptr));

        gradeCourseGradeTagLable_2->setText(QCoreApplication::translate("sgsApp", "Credit:", nullptr));
        credit_CourseGradeLable->setText(QCoreApplication::translate("sgsApp", "Credit", nullptr));
        prerequisitesCourseGradeTagLable->setText(QCoreApplication::translate("sgsApp", "Pre-requisites:", nullptr));
        allPrerequisites_CourseGradeLable->setText(QCoreApplication::translate("sgsApp", "All Pre-requisites", nullptr));
        gradeCourseGradeTagLable_3->setText(QCoreApplication::translate("sgsApp", "Semester:", nullptr));
        semester_CourseGradeLable->setText(QCoreApplication::translate("sgsApp", "Semester", nullptr));
        yearCourseGradeTagLable->setText(QCoreApplication::translate("sgsApp", "Year:", nullptr));
        courseYear_CourseGradeLable->setText(QCoreApplication::translate("sgsApp", "Year", nullptr));
        ratingCourseGradeTagLable->setText(QCoreApplication::translate("sgsApp", "Rating:", nullptr));
        addCourseRatingcomboBox->setItemText(0, QCoreApplication::translate("sgsApp", "Select Rating", nullptr));
        addCourseRatingcomboBox->setItemText(1, QCoreApplication::translate("sgsApp", "Ugly", nullptr));
        addCourseRatingcomboBox->setItemText(2, QCoreApplication::translate("sgsApp", "Bad", nullptr));
        addCourseRatingcomboBox->setItemText(3, QCoreApplication::translate("sgsApp", "Fair", nullptr));
        addCourseRatingcomboBox->setItemText(4, QCoreApplication::translate("sgsApp", "Good", nullptr));
        addCourseRatingcomboBox->setItemText(5, QCoreApplication::translate("sgsApp", "Excellent", nullptr));

        label_2->setText(QCoreApplication::translate("sgsApp", "CourseComments:", nullptr));
        addCourseComment_plainTextEdit->setPlainText(QString());
        codeCourseGradeTagLable->setText(QCoreApplication::translate("sgsApp", "Code:", nullptr));
        courseCode_CourseGradeLable->setText(QCoreApplication::translate("sgsApp", "Code", nullptr));
        lecturerCourseGradeTagLable->setText(QCoreApplication::translate("sgsApp", "Lecturer:", nullptr));
        addLectureComboBox->setItemText(0, QCoreApplication::translate("sgsApp", "Select Lecture", nullptr));

        printReport_pushButton->setText(QCoreApplication::translate("sgsApp", "Print Report", nullptr));
        pageNameLabel_3->setText(QCoreApplication::translate("sgsApp", "/ Program Sequence", nullptr));
        AddProgramSequenceFormTitle_2->setText(QCoreApplication::translate("sgsApp", "Search Student: ", nullptr));
        studentSearchButton->setText(QCoreApplication::translate("sgsApp", "Search", nullptr));
        studentSearchLineEdit->setText(QString());
        studentSearchLineEdit->setPlaceholderText(QCoreApplication::translate("sgsApp", "Search Student to view Program Sequence", nullptr));
        lecturePrintReport_pushButton->setText(QCoreApplication::translate("sgsApp", "Print Report", nullptr));
        pageNameLabel_5->setText(QCoreApplication::translate("sgsApp", "/ Add Course", nullptr));
        addUpdateCourseWidget->setText(QCoreApplication::translate("sgsApp", "Add Course", nullptr));
        programSequenceFacultyName_3->setText(QCoreApplication::translate("sgsApp", "Lecturer Course List", nullptr));
        courseCodeLabel->setText(QCoreApplication::translate("sgsApp", "Code :", nullptr));
        courseResultLabel->setText(QCoreApplication::translate("sgsApp", "Results :", nullptr));
        pendingViewCourseTable_2->setText(QString());
        CourseCodelineEdit->setPlaceholderText(QCoreApplication::translate("sgsApp", "Course Code", nullptr));
        filterSearchButton->setText(QCoreApplication::translate("sgsApp", "Search", nullptr));
        courseResultInfoLabel->setText(QString());
        addButton->setText(QCoreApplication::translate("sgsApp", "Add", nullptr));
        courseResultLabe_4->setText(QCoreApplication::translate("sgsApp", "Course Name :", nullptr));
        addCourseButton->setText(QCoreApplication::translate("sgsApp", "Update", nullptr));
        updateCourseName->setText(QString());
        courseResultLabe_6->setText(QCoreApplication::translate("sgsApp", "Semester :", nullptr));
        courseCodeLabel_6->setText(QCoreApplication::translate("sgsApp", "Year :", nullptr));
        courseResultLabe_5->setText(QCoreApplication::translate("sgsApp", "Pre-requisites :", nullptr));
        updatePrerequisites->setPlaceholderText(QCoreApplication::translate("sgsApp", "Course Code", nullptr));
        updateSemester->setPlaceholderText(QCoreApplication::translate("sgsApp", "#", nullptr));
        updateYear->setText(QString());
        updateYear->setPlaceholderText(QCoreApplication::translate("sgsApp", "0000", nullptr));
        filterSearchButton_4->setText(QCoreApplication::translate("sgsApp", "Add More", nullptr));
        addUpdateCourseWidget_2->setText(QCoreApplication::translate("sgsApp", "Update Course", nullptr));
        courseCommentsName->setText(QCoreApplication::translate("sgsApp", "Course Comments :", nullptr));
        pageNameLabel_6->setText(QCoreApplication::translate("sgsApp", "/ View Comments", nullptr));
        searcCourseCodeWidget->setText(QString());
        pendingViewCourseTable_3->setText(QString());
        commentSearchCourseCODEButton->setText(QCoreApplication::translate("sgsApp", "Search", nullptr));
        commentsSearchCourseCodelineEdit->setPlaceholderText(QCoreApplication::translate("sgsApp", "Search Course by Phrase of Full Name of Course", nullptr));
        pageNameLabel_2->setText(QCoreApplication::translate("sgsApp", "/ Add Program Sequence", nullptr));
        courseCommentsName_3->setText(QCoreApplication::translate("sgsApp", "Create New", nullptr));
        idTagLable->setText(QCoreApplication::translate("sgsApp", "ID:", nullptr));
        idLineEdit->setText(QString());
        idLineEdit->setPlaceholderText(QCoreApplication::translate("sgsApp", "ID", nullptr));
        seqNameLineEdit->setText(QString());
        seqNameLineEdit->setPlaceholderText(QCoreApplication::translate("sgsApp", "Sequence Name", nullptr));
        sequenceNameTagLable_2->setText(QCoreApplication::translate("sgsApp", "Program Sequence Name:", nullptr));
        facultyLineEdit->setText(QString());
        facultyLineEdit->setPlaceholderText(QCoreApplication::translate("sgsApp", "Faculty Name", nullptr));
        facultyTagLable->setText(QCoreApplication::translate("sgsApp", "Faculty:", nullptr));
        yearLineEdit->setText(QString());
        yearLineEdit->setPlaceholderText(QCoreApplication::translate("sgsApp", "Effective Year", nullptr));
        yearTagLable->setText(QCoreApplication::translate("sgsApp", "Year:", nullptr));
        addCourseSequencepushButton->setText(QCoreApplication::translate("sgsApp", "Add Courses", nullptr));
        idTagLable_5->setText(QCoreApplication::translate("sgsApp", "Course Code:", nullptr));
        addCodeLineEdit->setText(QString());
        addCodeLineEdit->setPlaceholderText(QCoreApplication::translate("sgsApp", "CODE", nullptr));
        addNameLineEdit->setText(QString());
        addNameLineEdit->setPlaceholderText(QCoreApplication::translate("sgsApp", "Course Name", nullptr));
        idTagLable_6->setText(QCoreApplication::translate("sgsApp", "Course Name:", nullptr));
        addCreditLineEdit->setText(QString());
        addCreditLineEdit->setPlaceholderText(QCoreApplication::translate("sgsApp", "Credits", nullptr));
        idTagLable_7->setText(QCoreApplication::translate("sgsApp", "Credits:", nullptr));
        idTagLable_8->setText(QCoreApplication::translate("sgsApp", "Pre-requisites", nullptr));
        addPrerequisiteLineEdit->setText(QString());
        addPrerequisiteLineEdit->setPlaceholderText(QCoreApplication::translate("sgsApp", "Pre-requisites", nullptr));
        courseCommentsName_4->setText(QCoreApplication::translate("sgsApp", "Add Course to Sequence", nullptr));
        updateCourse_pushButton_3->setText(QCoreApplication::translate("sgsApp", "Add to Sequence", nullptr));
        addSemesterLineEdit->setText(QString());
        addSemesterLineEdit->setPlaceholderText(QCoreApplication::translate("sgsApp", "Semester", nullptr));
        SemesterTagLable->setText(QCoreApplication::translate("sgsApp", "Semester", nullptr));
        draftYearLineEdit->setText(QString());
        draftYearLineEdit->setPlaceholderText(QString());
        draftSeqLineEdit->setText(QString());
        draftSeqLineEdit->setPlaceholderText(QString());
        draftFacultyLineEdit->setText(QString());
        draftFacultyLineEdit->setPlaceholderText(QString());
        draftIDLineEdit->setText(QString());
        draftIDLineEdit->setPlaceholderText(QString());
        courseCommentsName_2->setText(QCoreApplication::translate("sgsApp", "Draft:", nullptr));
        saveSequencepushButton->setText(QCoreApplication::translate("sgsApp", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sgsApp: public Ui_sgsApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SGSAPP_H
