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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
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
    QWidget *Dashboard;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QFrame *Sidebar;
    QFrame *frame;
    QGroupBox *groupBox;
    QPushButton *dashboard_pushButton;
    QGroupBox *groupBox_2;
    QPushButton *viewCoursesPending_Button;
    QPushButton *viewStudentProgramSequence_Button;
    QPushButton *viewCourses_Button;
    QPushButton *viewComments_Button;
    QGroupBox *settingGroupBox;
    QPushButton *addInstitution_Button;
    QPushButton *addCourse_Button;
    QPushButton *AddProgramSequence_Button;
    QPushButton *addUser_Button;
    QPushButton *disableUser_Button;
    QPushButton *changePassword_Button;
    QFrame *headBar;
    QPushButton *logoutButton;
    QLabel *userRoleLable_2;
    QPushButton *userIconTopBar;
    QLabel *userRoleLable;
    QFrame *topBarLogo;
    QLabel *usernameLable;
    QStackedWidget *stackedWidgetPages;
    QWidget *DashboardPage;
    QLabel *TMPlabel_2;
    QWidget *CoursesPage;
    QTableWidget *tableWidget;
    QWidget *ViewProgramSequence;
    QTableWidget *programSequenceTableWidget;
    QLabel *programSequenceFacultyName;
    QLabel *programSequenceProgramName;
    QFrame *addCourseFrame;
    QLabel *AddProgramSequenceFormTitle;
    QPlainTextEdit *addCourseComment_plainTextEdit;
    QLabel *label_2;
    QLineEdit *addCourseLecturer_RegFormLineEdit;
    QPushButton *addCourse_pushButton;
    QComboBox *addCourseRatingcomboBox;
    QLabel *courseCode_CourseGradeLable;
    QLabel *courseName_courseGradeLable;
    QLabel *courseCode_CourseGradeLable_2;
    QLabel *courseCode_CourseGradeLable_3;
    QLabel *courseCode_CourseGradeLable_4;
    QComboBox *addCourseRatingcomboBox_2;
    QLabel *courseYear_CourseGradeLable;
    QWidget *AddProgramSequence;
    QFrame *addCourseGrade;
    QLabel *label;

    void setupUi(QMainWindow *sgsApp)
    {
        if (sgsApp->objectName().isEmpty())
            sgsApp->setObjectName(QString::fromUtf8("sgsApp"));
        sgsApp->resize(1440, 900);
        sgsApp->setMinimumSize(QSize(1440, 900));
        sgsApp->setMaximumSize(QSize(1440, 900));
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
        signInButton->setStyleSheet(QString::fromUtf8("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        signUpButton = new QPushButton(loginBox);
        signUpButton->setObjectName(QString::fromUtf8("signUpButton"));
        signUpButton->setGeometry(QRect(20, 280, 113, 32));
        signUpButton->setStyleSheet(QString::fromUtf8("border:0px; color:#fff;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons White/Icons/White/Add User.png"), QSize(), QIcon::Normal, QIcon::Off);
        signUpButton->setIcon(icon);
        forgotPasswordButton = new QPushButton(loginBox);
        forgotPasswordButton->setObjectName(QString::fromUtf8("forgotPasswordButton"));
        forgotPasswordButton->setGeometry(QRect(150, 280, 113, 32));
        forgotPasswordButton->setStyleSheet(QString::fromUtf8("border:0px;\n"
"color:#fff;\n"
"text-decoration:underline;"));
        label_4 = new QLabel(loginBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(110, 30, 81, 31));
        label_4->setStyleSheet(QString::fromUtf8("color: #fff; font-size:28px; border:0px;"));
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
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/iconsGray/Icons/Gray/Eye ON.png"), QSize(), QIcon::Normal, QIcon::Off);
        passwordShowButton->setIcon(icon1);
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
        groupBox->setGeometry(QRect(40, 50, 191, 641));
        groupBox->setStyleSheet(QString::fromUtf8("color:#70808c;"));
        dashboard_pushButton = new QPushButton(groupBox);
        dashboard_pushButton->setObjectName(QString::fromUtf8("dashboard_pushButton"));
        dashboard_pushButton->setGeometry(QRect(20, 40, 86, 16));
        dashboard_pushButton->setLayoutDirection(Qt::LeftToRight);
        dashboard_pushButton->setStyleSheet(QString::fromUtf8("color:#fff;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons White/Icons/White/Dashboard.png"), QSize(), QIcon::Normal, QIcon::Off);
        dashboard_pushButton->setIcon(icon2);
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 110, 161, 151));
        viewCoursesPending_Button = new QPushButton(groupBox_2);
        viewCoursesPending_Button->setObjectName(QString::fromUtf8("viewCoursesPending_Button"));
        viewCoursesPending_Button->setGeometry(QRect(11, 71, 118, 16));
        viewCoursesPending_Button->setLayoutDirection(Qt::LeftToRight);
        viewCoursesPending_Button->setStyleSheet(QString::fromUtf8("color:#fff;"));
        viewStudentProgramSequence_Button = new QPushButton(groupBox_2);
        viewStudentProgramSequence_Button->setObjectName(QString::fromUtf8("viewStudentProgramSequence_Button"));
        viewStudentProgramSequence_Button->setGeometry(QRect(10, 130, 141, 16));
        viewStudentProgramSequence_Button->setLayoutDirection(Qt::LeftToRight);
        viewStudentProgramSequence_Button->setStyleSheet(QString::fromUtf8("color:#fff;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons White/Icons/White/Add.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewStudentProgramSequence_Button->setIcon(icon3);
        viewCourses_Button = new QPushButton(groupBox_2);
        viewCourses_Button->setObjectName(QString::fromUtf8("viewCourses_Button"));
        viewCourses_Button->setGeometry(QRect(10, 30, 71, 16));
        viewCourses_Button->setLayoutDirection(Qt::LeftToRight);
        viewCourses_Button->setStyleSheet(QString::fromUtf8("color:#fff;"));
        viewComments_Button = new QPushButton(groupBox_2);
        viewComments_Button->setObjectName(QString::fromUtf8("viewComments_Button"));
        viewComments_Button->setGeometry(QRect(10, 50, 86, 16));
        viewComments_Button->setLayoutDirection(Qt::LeftToRight);
        viewComments_Button->setStyleSheet(QString::fromUtf8("color:#fff;"));
        settingGroupBox = new QGroupBox(groupBox);
        settingGroupBox->setObjectName(QString::fromUtf8("settingGroupBox"));
        settingGroupBox->setGeometry(QRect(0, 340, 160, 231));
        addInstitution_Button = new QPushButton(settingGroupBox);
        addInstitution_Button->setObjectName(QString::fromUtf8("addInstitution_Button"));
        addInstitution_Button->setGeometry(QRect(10, 70, 81, 16));
        addInstitution_Button->setLayoutDirection(Qt::LeftToRight);
        addInstitution_Button->setStyleSheet(QString::fromUtf8("color:#fff;"));
        addCourse_Button = new QPushButton(settingGroupBox);
        addCourse_Button->setObjectName(QString::fromUtf8("addCourse_Button"));
        addCourse_Button->setGeometry(QRect(10, 100, 64, 16));
        addCourse_Button->setLayoutDirection(Qt::LeftToRight);
        addCourse_Button->setStyleSheet(QString::fromUtf8("color:#fff;"));
        AddProgramSequence_Button = new QPushButton(settingGroupBox);
        AddProgramSequence_Button->setObjectName(QString::fromUtf8("AddProgramSequence_Button"));
        AddProgramSequence_Button->setGeometry(QRect(10, 130, 136, 16));
        AddProgramSequence_Button->setLayoutDirection(Qt::LeftToRight);
        AddProgramSequence_Button->setStyleSheet(QString::fromUtf8("color:#fff;"));
        addUser_Button = new QPushButton(settingGroupBox);
        addUser_Button->setObjectName(QString::fromUtf8("addUser_Button"));
        addUser_Button->setGeometry(QRect(11, 161, 102, 16));
        addUser_Button->setLayoutDirection(Qt::LeftToRight);
        addUser_Button->setStyleSheet(QString::fromUtf8("color:#fff;"));
        disableUser_Button = new QPushButton(settingGroupBox);
        disableUser_Button->setObjectName(QString::fromUtf8("disableUser_Button"));
        disableUser_Button->setGeometry(QRect(11, 191, 102, 16));
        disableUser_Button->setLayoutDirection(Qt::LeftToRight);
        disableUser_Button->setStyleSheet(QString::fromUtf8("color:#fff;"));
        changePassword_Button = new QPushButton(settingGroupBox);
        changePassword_Button->setObjectName(QString::fromUtf8("changePassword_Button"));
        changePassword_Button->setGeometry(QRect(10, 40, 130, 16));
        changePassword_Button->setLayoutDirection(Qt::LeftToRight);
        changePassword_Button->setStyleSheet(QString::fromUtf8("color:#fff;"));
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
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons White/Icons/White/Passsword.png"), QSize(), QIcon::Normal, QIcon::Off);
        logoutButton->setIcon(icon4);
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
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons White/Icons/White/User.png"), QSize(), QIcon::Normal, QIcon::Off);
        userIconTopBar->setIcon(icon5);
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
        DashboardPage = new QWidget();
        DashboardPage->setObjectName(QString::fromUtf8("DashboardPage"));
        TMPlabel_2 = new QLabel(DashboardPage);
        TMPlabel_2->setObjectName(QString::fromUtf8("TMPlabel_2"));
        TMPlabel_2->setGeometry(QRect(470, 260, 181, 151));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        TMPlabel_2->setFont(font3);
        TMPlabel_2->setStyleSheet(QString::fromUtf8("color: #000;"));
        stackedWidgetPages->addWidget(DashboardPage);
        CoursesPage = new QWidget();
        CoursesPage->setObjectName(QString::fromUtf8("CoursesPage"));
        tableWidget = new QTableWidget(CoursesPage);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 60, 631, 651));
        stackedWidgetPages->addWidget(CoursesPage);
        ViewProgramSequence = new QWidget();
        ViewProgramSequence->setObjectName(QString::fromUtf8("ViewProgramSequence"));
        programSequenceTableWidget = new QTableWidget(ViewProgramSequence);
        programSequenceTableWidget->setObjectName(QString::fromUtf8("programSequenceTableWidget"));
        programSequenceTableWidget->setGeometry(QRect(10, 130, 681, 691));
        programSequenceTableWidget->setStyleSheet(QString::fromUtf8("background:#fff"));
        programSequenceTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        programSequenceFacultyName = new QLabel(ViewProgramSequence);
        programSequenceFacultyName->setObjectName(QString::fromUtf8("programSequenceFacultyName"));
        programSequenceFacultyName->setGeometry(QRect(10, 60, 681, 41));
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        programSequenceFacultyName->setFont(font4);
        programSequenceFacultyName->setStyleSheet(QString::fromUtf8("background:#70808c;\n"
"color:#fff;\n"
"border-top-left-radius:5px;\n"
"border-top-right-radius:5px;\n"
"border-bottom-left-radius:0px;\n"
"border-bottom-right-radius:0px;"));
        programSequenceFacultyName->setAlignment(Qt::AlignCenter);
        programSequenceProgramName = new QLabel(ViewProgramSequence);
        programSequenceProgramName->setObjectName(QString::fromUtf8("programSequenceProgramName"));
        programSequenceProgramName->setGeometry(QRect(10, 100, 681, 31));
        QFont font5;
        font5.setPointSize(14);
        font5.setBold(false);
        font5.setWeight(50);
        programSequenceProgramName->setFont(font5);
        programSequenceProgramName->setStyleSheet(QString::fromUtf8("color:#333;border:1px solid #999;background:#fff;"));
        programSequenceProgramName->setAlignment(Qt::AlignCenter);
        addCourseFrame = new QFrame(ViewProgramSequence);
        addCourseFrame->setObjectName(QString::fromUtf8("addCourseFrame"));
        addCourseFrame->setGeometry(QRect(710, 60, 451, 401));
        addCourseFrame->setStyleSheet(QString::fromUtf8("background:#f1f1f1; color:#333; border-radius:5px;"));
        addCourseFrame->setFrameShape(QFrame::StyledPanel);
        addCourseFrame->setFrameShadow(QFrame::Raised);
        AddProgramSequenceFormTitle = new QLabel(addCourseFrame);
        AddProgramSequenceFormTitle->setObjectName(QString::fromUtf8("AddProgramSequenceFormTitle"));
        AddProgramSequenceFormTitle->setGeometry(QRect(0, 0, 451, 41));
        AddProgramSequenceFormTitle->setFont(font4);
        AddProgramSequenceFormTitle->setStyleSheet(QString::fromUtf8("background:#70808c;\n"
"color:#fff;\n"
"border-bottom-left-radius:0px;\n"
"border-bottom-right-radius:0px;"));
        AddProgramSequenceFormTitle->setAlignment(Qt::AlignCenter);
        addCourseComment_plainTextEdit = new QPlainTextEdit(addCourseFrame);
        addCourseComment_plainTextEdit->setObjectName(QString::fromUtf8("addCourseComment_plainTextEdit"));
        addCourseComment_plainTextEdit->setGeometry(QRect(10, 230, 431, 101));
        addCourseComment_plainTextEdit->setStyleSheet(QString::fromUtf8("Background:#fff;"));
        label_2 = new QLabel(addCourseFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 210, 121, 16));
        addCourseLecturer_RegFormLineEdit = new QLineEdit(addCourseFrame);
        addCourseLecturer_RegFormLineEdit->setObjectName(QString::fromUtf8("addCourseLecturer_RegFormLineEdit"));
        addCourseLecturer_RegFormLineEdit->setEnabled(true);
        addCourseLecturer_RegFormLineEdit->setGeometry(QRect(150, 160, 151, 30));
        addCourseLecturer_RegFormLineEdit->setMinimumSize(QSize(0, 30));
        addCourseLecturer_RegFormLineEdit->setMaximumSize(QSize(16777215, 30));
        addCourseLecturer_RegFormLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;"));
        addCourse_pushButton = new QPushButton(addCourseFrame);
        addCourse_pushButton->setObjectName(QString::fromUtf8("addCourse_pushButton"));
        addCourse_pushButton->setGeometry(QRect(342, 350, 91, 32));
        addCourse_pushButton->setStyleSheet(QString::fromUtf8("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons White/Icons/White/Edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        addCourse_pushButton->setIcon(icon6);
        addCourseRatingcomboBox = new QComboBox(addCourseFrame);
        addCourseRatingcomboBox->addItem(QString());
        addCourseRatingcomboBox->addItem(QString());
        addCourseRatingcomboBox->addItem(QString());
        addCourseRatingcomboBox->addItem(QString());
        addCourseRatingcomboBox->addItem(QString());
        addCourseRatingcomboBox->addItem(QString());
        addCourseRatingcomboBox->setObjectName(QString::fromUtf8("addCourseRatingcomboBox"));
        addCourseRatingcomboBox->setGeometry(QRect(310, 160, 121, 32));
        addCourseRatingcomboBox->setStyleSheet(QString::fromUtf8("background:#fff;"));
        courseCode_CourseGradeLable = new QLabel(addCourseFrame);
        courseCode_CourseGradeLable->setObjectName(QString::fromUtf8("courseCode_CourseGradeLable"));
        courseCode_CourseGradeLable->setGeometry(QRect(10, 70, 81, 16));
        courseCode_CourseGradeLable->setStyleSheet(QString::fromUtf8("color:#666"));
        courseName_courseGradeLable = new QLabel(addCourseFrame);
        courseName_courseGradeLable->setObjectName(QString::fromUtf8("courseName_courseGradeLable"));
        courseName_courseGradeLable->setGeometry(QRect(100, 70, 191, 16));
        courseName_courseGradeLable->setStyleSheet(QString::fromUtf8("color:#666"));
        courseCode_CourseGradeLable_2 = new QLabel(addCourseFrame);
        courseCode_CourseGradeLable_2->setObjectName(QString::fromUtf8("courseCode_CourseGradeLable_2"));
        courseCode_CourseGradeLable_2->setGeometry(QRect(390, 70, 41, 16));
        courseCode_CourseGradeLable_2->setStyleSheet(QString::fromUtf8("color:#666"));
        courseCode_CourseGradeLable_3 = new QLabel(addCourseFrame);
        courseCode_CourseGradeLable_3->setObjectName(QString::fromUtf8("courseCode_CourseGradeLable_3"));
        courseCode_CourseGradeLable_3->setGeometry(QRect(10, 170, 71, 16));
        courseCode_CourseGradeLable_3->setStyleSheet(QString::fromUtf8("color:#666"));
        courseCode_CourseGradeLable_4 = new QLabel(addCourseFrame);
        courseCode_CourseGradeLable_4->setObjectName(QString::fromUtf8("courseCode_CourseGradeLable_4"));
        courseCode_CourseGradeLable_4->setGeometry(QRect(10, 120, 421, 16));
        courseCode_CourseGradeLable_4->setStyleSheet(QString::fromUtf8("color:#666"));
        addCourseRatingcomboBox_2 = new QComboBox(addCourseFrame);
        addCourseRatingcomboBox_2->addItem(QString());
        addCourseRatingcomboBox_2->addItem(QString());
        addCourseRatingcomboBox_2->addItem(QString());
        addCourseRatingcomboBox_2->addItem(QString());
        addCourseRatingcomboBox_2->addItem(QString());
        addCourseRatingcomboBox_2->addItem(QString());
        addCourseRatingcomboBox_2->addItem(QString());
        addCourseRatingcomboBox_2->addItem(QString());
        addCourseRatingcomboBox_2->setObjectName(QString::fromUtf8("addCourseRatingcomboBox_2"));
        addCourseRatingcomboBox_2->setGeometry(QRect(300, 60, 81, 32));
        addCourseRatingcomboBox_2->setStyleSheet(QString::fromUtf8("background:#fff;"));
        courseYear_CourseGradeLable = new QLabel(addCourseFrame);
        courseYear_CourseGradeLable->setObjectName(QString::fromUtf8("courseYear_CourseGradeLable"));
        courseYear_CourseGradeLable->setGeometry(QRect(90, 170, 51, 16));
        courseYear_CourseGradeLable->setStyleSheet(QString::fromUtf8("color:#666"));
        stackedWidgetPages->addWidget(ViewProgramSequence);
        AddProgramSequence = new QWidget();
        AddProgramSequence->setObjectName(QString::fromUtf8("AddProgramSequence"));
        addCourseGrade = new QFrame(AddProgramSequence);
        addCourseGrade->setObjectName(QString::fromUtf8("addCourseGrade"));
        addCourseGrade->setGeometry(QRect(410, 190, 541, 231));
        addCourseGrade->setFrameShape(QFrame::StyledPanel);
        addCourseGrade->setFrameShadow(QFrame::Raised);
        label = new QLabel(addCourseGrade);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 541, 41));
        label->setFont(font4);
        label->setStyleSheet(QString::fromUtf8("background:#70808c;"));
        label->setAlignment(Qt::AlignCenter);
        stackedWidgetPages->addWidget(AddProgramSequence);
        stackedWidgetSGS->addWidget(Dashboard);
        sgsApp->setCentralWidget(centralwidget);

        retranslateUi(sgsApp);

        stackedWidgetSGS->setCurrentIndex(1);
        stackedWidgetPages->setCurrentIndex(2);


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
        label_4->setText(QCoreApplication::translate("sgsApp", "Login", nullptr));
        loginErrorLabel->setText(QString());
        passwordShowButton->setText(QString());
#if QT_CONFIG(tooltip)
        Sidebar->setToolTip(QCoreApplication::translate("sgsApp", "Add", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("sgsApp", "General Menu", nullptr));
        dashboard_pushButton->setText(QCoreApplication::translate("sgsApp", "Dashboard", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("sgsApp", "Student", nullptr));
#if QT_CONFIG(tooltip)
        viewCoursesPending_Button->setToolTip(QCoreApplication::translate("sgsApp", "Add Institution", nullptr));
#endif // QT_CONFIG(tooltip)
        viewCoursesPending_Button->setText(QCoreApplication::translate("sgsApp", "Pending Course", nullptr));
#if QT_CONFIG(tooltip)
        viewStudentProgramSequence_Button->setToolTip(QCoreApplication::translate("sgsApp", "Add Institution", nullptr));
#endif // QT_CONFIG(tooltip)
        viewStudentProgramSequence_Button->setText(QCoreApplication::translate("sgsApp", "Program Sequence", nullptr));
#if QT_CONFIG(tooltip)
        viewCourses_Button->setToolTip(QCoreApplication::translate("sgsApp", "Add Institution", nullptr));
#endif // QT_CONFIG(tooltip)
        viewCourses_Button->setText(QCoreApplication::translate("sgsApp", "Courses", nullptr));
#if QT_CONFIG(tooltip)
        viewComments_Button->setToolTip(QCoreApplication::translate("sgsApp", "Add Institution", nullptr));
#endif // QT_CONFIG(tooltip)
        viewComments_Button->setText(QCoreApplication::translate("sgsApp", "Comments", nullptr));
        settingGroupBox->setTitle(QCoreApplication::translate("sgsApp", "Administration", nullptr));
#if QT_CONFIG(tooltip)
        addInstitution_Button->setToolTip(QCoreApplication::translate("sgsApp", "Add Institution", nullptr));
#endif // QT_CONFIG(tooltip)
        addInstitution_Button->setText(QCoreApplication::translate("sgsApp", "Institution", nullptr));
#if QT_CONFIG(tooltip)
        addCourse_Button->setToolTip(QCoreApplication::translate("sgsApp", "Add Cours", nullptr));
#endif // QT_CONFIG(tooltip)
        addCourse_Button->setText(QCoreApplication::translate("sgsApp", "Course", nullptr));
        AddProgramSequence_Button->setText(QCoreApplication::translate("sgsApp", "Program Sequence", nullptr));
#if QT_CONFIG(tooltip)
        addUser_Button->setToolTip(QCoreApplication::translate("sgsApp", "Add Institution", nullptr));
#endif // QT_CONFIG(tooltip)
        addUser_Button->setText(QCoreApplication::translate("sgsApp", "User Account", nullptr));
#if QT_CONFIG(tooltip)
        disableUser_Button->setToolTip(QCoreApplication::translate("sgsApp", "Add Institution", nullptr));
#endif // QT_CONFIG(tooltip)
        disableUser_Button->setText(QCoreApplication::translate("sgsApp", "Disable User", nullptr));
#if QT_CONFIG(tooltip)
        changePassword_Button->setToolTip(QCoreApplication::translate("sgsApp", "Add Institution", nullptr));
#endif // QT_CONFIG(tooltip)
        changePassword_Button->setText(QCoreApplication::translate("sgsApp", "Change Password", nullptr));
        logoutButton->setText(QCoreApplication::translate("sgsApp", " Logout", nullptr));
        userRoleLable_2->setText(QCoreApplication::translate("sgsApp", "|", nullptr));
        userIconTopBar->setText(QString());
        userRoleLable->setText(QCoreApplication::translate("sgsApp", ", STUDENT", nullptr));
        usernameLable->setText(QCoreApplication::translate("sgsApp", "USER:", nullptr));
        TMPlabel_2->setText(QCoreApplication::translate("sgsApp", "Dashboard", nullptr));
        programSequenceFacultyName->setText(QCoreApplication::translate("sgsApp", "Faculty of Science & Technology Math, Physics and IT Department", nullptr));
        programSequenceProgramName->setText(QCoreApplication::translate("sgsApp", "Bachelor Degree (Information Technology)", nullptr));
        AddProgramSequenceFormTitle->setText(QCoreApplication::translate("sgsApp", "Update Course", nullptr));
        addCourseComment_plainTextEdit->setPlainText(QString());
        label_2->setText(QCoreApplication::translate("sgsApp", "CourseComments:", nullptr));
        addCourseLecturer_RegFormLineEdit->setText(QString());
        addCourseLecturer_RegFormLineEdit->setPlaceholderText(QCoreApplication::translate("sgsApp", "Lecturer", nullptr));
        addCourse_pushButton->setText(QCoreApplication::translate("sgsApp", "Update", nullptr));
        addCourseRatingcomboBox->setItemText(0, QCoreApplication::translate("sgsApp", "Select Rating", nullptr));
        addCourseRatingcomboBox->setItemText(1, QCoreApplication::translate("sgsApp", "Ugly", nullptr));
        addCourseRatingcomboBox->setItemText(2, QCoreApplication::translate("sgsApp", "Bad", nullptr));
        addCourseRatingcomboBox->setItemText(3, QCoreApplication::translate("sgsApp", "Fair", nullptr));
        addCourseRatingcomboBox->setItemText(4, QCoreApplication::translate("sgsApp", "Good", nullptr));
        addCourseRatingcomboBox->setItemText(5, QCoreApplication::translate("sgsApp", "Excellent", nullptr));

        courseCode_CourseGradeLable->setText(QCoreApplication::translate("sgsApp", "Code", nullptr));
        courseName_courseGradeLable->setText(QCoreApplication::translate("sgsApp", "Course Name", nullptr));
        courseCode_CourseGradeLable_2->setText(QCoreApplication::translate("sgsApp", "Credit", nullptr));
        courseCode_CourseGradeLable_3->setText(QCoreApplication::translate("sgsApp", "Semester", nullptr));
        courseCode_CourseGradeLable_4->setText(QCoreApplication::translate("sgsApp", "All Pre-requisites", nullptr));
        addCourseRatingcomboBox_2->setItemText(0, QCoreApplication::translate("sgsApp", "Grade", nullptr));
        addCourseRatingcomboBox_2->setItemText(1, QCoreApplication::translate("sgsApp", "A", nullptr));
        addCourseRatingcomboBox_2->setItemText(2, QCoreApplication::translate("sgsApp", "A-", nullptr));
        addCourseRatingcomboBox_2->setItemText(3, QCoreApplication::translate("sgsApp", "B", nullptr));
        addCourseRatingcomboBox_2->setItemText(4, QCoreApplication::translate("sgsApp", "C", nullptr));
        addCourseRatingcomboBox_2->setItemText(5, QCoreApplication::translate("sgsApp", "D", nullptr));
        addCourseRatingcomboBox_2->setItemText(6, QCoreApplication::translate("sgsApp", "F", nullptr));
        addCourseRatingcomboBox_2->setItemText(7, QCoreApplication::translate("sgsApp", "TR", nullptr));

        courseYear_CourseGradeLable->setText(QCoreApplication::translate("sgsApp", "Year", nullptr));
        label->setText(QCoreApplication::translate("sgsApp", "Add Course Widget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sgsApp: public Ui_sgsApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SGSAPP_H
