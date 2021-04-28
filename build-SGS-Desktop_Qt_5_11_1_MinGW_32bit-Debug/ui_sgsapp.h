/********************************************************************************
** Form generated from reading UI file 'sgsapp.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
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
    QLabel *credit_CourseGradeLable;
    QLabel *semester_CourseGradeLable;
    QLabel *allPrerequisites_CourseGradeLable;
    QComboBox *addCourseRatingcomboBox_2;
    QLabel *courseYear_CourseGradeLable;
    QLabel *codeCourseGradeTagLable;
    QLabel *courseNameCourseGradeTagLable;
    QLabel *gradeCourseGradeTagLable;
    QLabel *gradeCourseGradeTagLable_2;
    QLabel *prerequisitesCourseGradeTagLable;
    QLabel *gradeCourseGradeTagLable_3;
    QLabel *yearCourseGradeTagLable;
    QLabel *lecturerCourseGradeTagLable;
    QLabel *ratingCourseGradeTagLable;
    QWidget *AddProgramSequence;
    QFrame *addCourseGrade;
    QLabel *label;

    void setupUi(QMainWindow *sgsApp)
    {
        if (sgsApp->objectName().isEmpty())
            sgsApp->setObjectName(QStringLiteral("sgsApp"));
        sgsApp->resize(1440, 900);
        sgsApp->setMinimumSize(QSize(1440, 900));
        sgsApp->setMaximumSize(QSize(1440, 900));
        sgsApp->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(sgsApp);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        stackedWidgetSGS = new QStackedWidget(centralwidget);
        stackedWidgetSGS->setObjectName(QStringLiteral("stackedWidgetSGS"));
        stackedWidgetSGS->setGeometry(QRect(-3, -3, 1451, 911));
        stackedWidgetSGS->setStyleSheet(QStringLiteral("color:#fff;"));
        loginScreen = new QWidget();
        loginScreen->setObjectName(QStringLiteral("loginScreen"));
        loginScreen->setStyleSheet(QLatin1String("background:url(:/images/background.jpg);\n"
"background-position:center;\n"
"background-repeat: no-repeat;"));
        loginBox = new QFrame(loginScreen);
        loginBox->setObjectName(QStringLiteral("loginBox"));
        loginBox->setGeometry(QRect(940, 250, 291, 331));
        loginBox->setMouseTracking(true);
        loginBox->setStyleSheet(QLatin1String("border: 1px solid #8a1738;\n"
"border-radius:10px;"));
        loginBox->setFrameShape(QFrame::StyledPanel);
        loginBox->setFrameShadow(QFrame::Raised);
        usernameInput = new QLineEdit(loginBox);
        usernameInput->setObjectName(QStringLiteral("usernameInput"));
        usernameInput->setGeometry(QRect(60, 90, 201, 31));
        usernameInput->setMouseTracking(false);
        usernameInput->setStyleSheet(QLatin1String("background:#fff;\n"
"color: #333;\n"
"border:0px; \n"
"border-top-right-radius:5px;\n"
"border-bottom-right-radius:5px;\n"
"border-top-left-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        passwordInput = new QLineEdit(loginBox);
        passwordInput->setObjectName(QStringLiteral("passwordInput"));
        passwordInput->setGeometry(QRect(60, 140, 181, 31));
        passwordInput->setStyleSheet(QLatin1String("background:#fff;\n"
"color: #333;\n"
"border:0px; \n"
"border-top-right-radius:0px;\n"
"border-bottom-right-radius:0px;\n"
"border-top-left-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        passwordInput->setEchoMode(QLineEdit::Password);
        signInButton = new QPushButton(loginBox);
        signInButton->setObjectName(QStringLiteral("signInButton"));
        signInButton->setGeometry(QRect(30, 190, 231, 32));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        signInButton->setFont(font);
        signInButton->setStyleSheet(QLatin1String("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        signUpButton = new QPushButton(loginBox);
        signUpButton->setObjectName(QStringLiteral("signUpButton"));
        signUpButton->setGeometry(QRect(20, 280, 113, 32));
        signUpButton->setStyleSheet(QStringLiteral("border:0px; color:#fff;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons White/Icons/White/Add User.png"), QSize(), QIcon::Normal, QIcon::Off);
        signUpButton->setIcon(icon);
        forgotPasswordButton = new QPushButton(loginBox);
        forgotPasswordButton->setObjectName(QStringLiteral("forgotPasswordButton"));
        forgotPasswordButton->setGeometry(QRect(150, 280, 113, 32));
        forgotPasswordButton->setStyleSheet(QLatin1String("border:0px;\n"
"color:#fff;\n"
"text-decoration:underline;"));
        label_4 = new QLabel(loginBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 30, 81, 31));
        label_4->setStyleSheet(QStringLiteral("color: #fff; font-size:28px; border:0px;"));
        usernameIcon = new QFrame(loginBox);
        usernameIcon->setObjectName(QStringLiteral("usernameIcon"));
        usernameIcon->setGeometry(QRect(30, 90, 31, 31));
        usernameIcon->setStyleSheet(QLatin1String("background:#fff url(:/images/user.png);\n"
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
        passwordIcon->setObjectName(QStringLiteral("passwordIcon"));
        passwordIcon->setGeometry(QRect(30, 140, 31, 31));
        passwordIcon->setStyleSheet(QLatin1String("background:#fff url(:/images/lock.png);\n"
"border:0px;\n"
"border-radius:0px;\n"
"border-top-left-radius:5px;\n"
"border-bottom-left-radius:5px;\n"
"border-top-right-radius:0px;\n"
"border-bottom-right-radius:0px;"));
        passwordIcon->setFrameShape(QFrame::StyledPanel);
        passwordIcon->setFrameShadow(QFrame::Raised);
        loginErrorLabel = new QLabel(loginBox);
        loginErrorLabel->setObjectName(QStringLiteral("loginErrorLabel"));
        loginErrorLabel->setGeometry(QRect(40, 240, 211, 21));
        loginErrorLabel->setStyleSheet(QLatin1String("border:0px;\n"
"color:#b50009;\n"
"text-align:center;\n"
"background: transparent;"));
        loginErrorLabel->setAlignment(Qt::AlignCenter);
        passwordShowButton = new QPushButton(loginBox);
        passwordShowButton->setObjectName(QStringLiteral("passwordShowButton"));
        passwordShowButton->setGeometry(QRect(240, 140, 21, 31));
        passwordShowButton->setMaximumSize(QSize(16777215, 31));
        passwordShowButton->setStyleSheet(QLatin1String("background:#fff;\n"
"border:0px; \n"
"border-top-right-radius:5px;\n"
"border-bottom-right-radius:5px;\n"
"border-top-left-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/iconsGray/Icons/Gray/Eye ON.png"), QSize(), QIcon::Normal, QIcon::Off);
        passwordShowButton->setIcon(icon1);
        footerLogo = new QFrame(loginScreen);
        footerLogo->setObjectName(QStringLiteral("footerLogo"));
        footerLogo->setGeometry(QRect(990, 180, 191, 61));
        footerLogo->setMinimumSize(QSize(191, 61));
        footerLogo->setMaximumSize(QSize(191, 61));
        footerLogo->setStyleSheet(QLatin1String("background:url(:/images/sideBarLogo.png);\n"
"background-position:center;\n"
"background-repeat: no-repeat;\n"
"border: 0px;"));
        footerLogo->setFrameShape(QFrame::StyledPanel);
        footerLogo->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(loginScreen);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(240, 260, 462, 281));
        frame_2->setMinimumSize(QSize(462, 0));
        frame_2->setStyleSheet(QLatin1String("background-image: url(:/images/SGS LOGO.png);\n"
"border:0px;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        stackedWidgetSGS->addWidget(loginScreen);
        Dashboard = new QWidget();
        Dashboard->setObjectName(QStringLiteral("Dashboard"));
        Dashboard->setMinimumSize(QSize(1440, 900));
        Dashboard->setMaximumSize(QSize(1440, 900));
        layoutWidget = new QWidget(Dashboard);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(-20, -10, 2, 2));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        Sidebar = new QFrame(Dashboard);
        Sidebar->setObjectName(QStringLiteral("Sidebar"));
        Sidebar->setGeometry(QRect(0, 50, 260, 900));
        Sidebar->setMinimumSize(QSize(260, 900));
        Sidebar->setMaximumSize(QSize(260, 900));
        Sidebar->setStyleSheet(QLatin1String("background-color:#292f38;\n"
"border: 0;"));
        Sidebar->setFrameShape(QFrame::StyledPanel);
        Sidebar->setFrameShadow(QFrame::Raised);
        frame = new QFrame(Sidebar);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(40, 730, 191, 61));
        frame->setStyleSheet(QStringLiteral("background:url(:/images/sideBarLogo.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(Sidebar);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 50, 191, 641));
        groupBox->setStyleSheet(QStringLiteral("color:#70808c;"));
        dashboard_pushButton = new QPushButton(groupBox);
        dashboard_pushButton->setObjectName(QStringLiteral("dashboard_pushButton"));
        dashboard_pushButton->setGeometry(QRect(20, 40, 86, 16));
        dashboard_pushButton->setLayoutDirection(Qt::LeftToRight);
        dashboard_pushButton->setStyleSheet(QStringLiteral("color:#fff;"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons White/Icons/White/Dashboard.png"), QSize(), QIcon::Normal, QIcon::Off);
        dashboard_pushButton->setIcon(icon2);
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 110, 161, 151));
        viewCoursesPending_Button = new QPushButton(groupBox_2);
        viewCoursesPending_Button->setObjectName(QStringLiteral("viewCoursesPending_Button"));
        viewCoursesPending_Button->setGeometry(QRect(11, 71, 118, 16));
        viewCoursesPending_Button->setLayoutDirection(Qt::LeftToRight);
        viewCoursesPending_Button->setStyleSheet(QStringLiteral("color:#fff;"));
        viewStudentProgramSequence_Button = new QPushButton(groupBox_2);
        viewStudentProgramSequence_Button->setObjectName(QStringLiteral("viewStudentProgramSequence_Button"));
        viewStudentProgramSequence_Button->setGeometry(QRect(10, 130, 141, 16));
        viewStudentProgramSequence_Button->setLayoutDirection(Qt::LeftToRight);
        viewStudentProgramSequence_Button->setStyleSheet(QStringLiteral("color:#fff;"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons White/Icons/White/Add.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewStudentProgramSequence_Button->setIcon(icon3);
        viewCourses_Button = new QPushButton(groupBox_2);
        viewCourses_Button->setObjectName(QStringLiteral("viewCourses_Button"));
        viewCourses_Button->setGeometry(QRect(10, 30, 71, 16));
        viewCourses_Button->setLayoutDirection(Qt::LeftToRight);
        viewCourses_Button->setStyleSheet(QStringLiteral("color:#fff;"));
        viewComments_Button = new QPushButton(groupBox_2);
        viewComments_Button->setObjectName(QStringLiteral("viewComments_Button"));
        viewComments_Button->setGeometry(QRect(10, 50, 86, 16));
        viewComments_Button->setLayoutDirection(Qt::LeftToRight);
        viewComments_Button->setStyleSheet(QStringLiteral("color:#fff;"));
        settingGroupBox = new QGroupBox(groupBox);
        settingGroupBox->setObjectName(QStringLiteral("settingGroupBox"));
        settingGroupBox->setGeometry(QRect(0, 340, 160, 231));
        addInstitution_Button = new QPushButton(settingGroupBox);
        addInstitution_Button->setObjectName(QStringLiteral("addInstitution_Button"));
        addInstitution_Button->setGeometry(QRect(10, 70, 81, 16));
        addInstitution_Button->setLayoutDirection(Qt::LeftToRight);
        addInstitution_Button->setStyleSheet(QStringLiteral("color:#fff;"));
        addCourse_Button = new QPushButton(settingGroupBox);
        addCourse_Button->setObjectName(QStringLiteral("addCourse_Button"));
        addCourse_Button->setGeometry(QRect(10, 100, 64, 16));
        addCourse_Button->setLayoutDirection(Qt::LeftToRight);
        addCourse_Button->setStyleSheet(QStringLiteral("color:#fff;"));
        AddProgramSequence_Button = new QPushButton(settingGroupBox);
        AddProgramSequence_Button->setObjectName(QStringLiteral("AddProgramSequence_Button"));
        AddProgramSequence_Button->setGeometry(QRect(10, 130, 136, 16));
        AddProgramSequence_Button->setLayoutDirection(Qt::LeftToRight);
        AddProgramSequence_Button->setStyleSheet(QStringLiteral("color:#fff;"));
        addUser_Button = new QPushButton(settingGroupBox);
        addUser_Button->setObjectName(QStringLiteral("addUser_Button"));
        addUser_Button->setGeometry(QRect(11, 161, 102, 16));
        addUser_Button->setLayoutDirection(Qt::LeftToRight);
        addUser_Button->setStyleSheet(QStringLiteral("color:#fff;"));
        disableUser_Button = new QPushButton(settingGroupBox);
        disableUser_Button->setObjectName(QStringLiteral("disableUser_Button"));
        disableUser_Button->setGeometry(QRect(11, 191, 102, 16));
        disableUser_Button->setLayoutDirection(Qt::LeftToRight);
        disableUser_Button->setStyleSheet(QStringLiteral("color:#fff;"));
        changePassword_Button = new QPushButton(settingGroupBox);
        changePassword_Button->setObjectName(QStringLiteral("changePassword_Button"));
        changePassword_Button->setGeometry(QRect(10, 40, 130, 16));
        changePassword_Button->setLayoutDirection(Qt::LeftToRight);
        changePassword_Button->setStyleSheet(QStringLiteral("color:#fff;"));
        headBar = new QFrame(Dashboard);
        headBar->setObjectName(QStringLiteral("headBar"));
        headBar->setGeometry(QRect(0, 0, 1440, 65));
        headBar->setMinimumSize(QSize(1440, 65));
        headBar->setMaximumSize(QSize(260, 50));
        headBar->setStyleSheet(QLatin1String("background-image: url(:/images/background.jpg);\n"
"border:0;"));
        headBar->setFrameShape(QFrame::StyledPanel);
        headBar->setFrameShadow(QFrame::Raised);
        logoutButton = new QPushButton(headBar);
        logoutButton->setObjectName(QStringLiteral("logoutButton"));
        logoutButton->setGeometry(QRect(1330, 20, 71, 31));
        QFont font1;
        font1.setPointSize(9);
        font1.setUnderline(true);
        logoutButton->setFont(font1);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons White/Icons/White/Passsword.png"), QSize(), QIcon::Normal, QIcon::Off);
        logoutButton->setIcon(icon4);
        userRoleLable_2 = new QLabel(headBar);
        userRoleLable_2->setObjectName(QStringLiteral("userRoleLable_2"));
        userRoleLable_2->setGeometry(QRect(1310, 20, 16, 31));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setWeight(50);
        userRoleLable_2->setFont(font2);
        userRoleLable_2->setAlignment(Qt::AlignCenter);
        userIconTopBar = new QPushButton(headBar);
        userIconTopBar->setObjectName(QStringLiteral("userIconTopBar"));
        userIconTopBar->setGeometry(QRect(1130, 20, 41, 31));
        userIconTopBar->setFont(font);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons White/Icons/White/User.png"), QSize(), QIcon::Normal, QIcon::Off);
        userIconTopBar->setIcon(icon5);
        userRoleLable = new QLabel(headBar);
        userRoleLable->setObjectName(QStringLiteral("userRoleLable"));
        userRoleLable->setGeometry(QRect(1220, 28, 81, 16));
        userRoleLable->setFont(font2);
        topBarLogo = new QFrame(headBar);
        topBarLogo->setObjectName(QStringLiteral("topBarLogo"));
        topBarLogo->setGeometry(QRect(40, 10, 191, 51));
        topBarLogo->setStyleSheet(QLatin1String("background-image: url(:/images/SGS Logo Dashboard.png);\n"
"background-repeat: no-repeat;"));
        topBarLogo->setFrameShape(QFrame::StyledPanel);
        topBarLogo->setFrameShadow(QFrame::Raised);
        usernameLable = new QLabel(headBar);
        usernameLable->setObjectName(QStringLiteral("usernameLable"));
        usernameLable->setGeometry(QRect(1160, 25, 61, 21));
        usernameLable->setFont(font2);
        usernameLable->setAlignment(Qt::AlignCenter);
        stackedWidgetPages = new QStackedWidget(Dashboard);
        stackedWidgetPages->setObjectName(QStringLiteral("stackedWidgetPages"));
        stackedWidgetPages->setGeometry(QRect(260, 70, 1171, 821));
        DashboardPage = new QWidget();
        DashboardPage->setObjectName(QStringLiteral("DashboardPage"));
        TMPlabel_2 = new QLabel(DashboardPage);
        TMPlabel_2->setObjectName(QStringLiteral("TMPlabel_2"));
        TMPlabel_2->setGeometry(QRect(470, 260, 181, 151));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        TMPlabel_2->setFont(font3);
        TMPlabel_2->setStyleSheet(QStringLiteral("color: #000;"));
        stackedWidgetPages->addWidget(DashboardPage);
        CoursesPage = new QWidget();
        CoursesPage->setObjectName(QStringLiteral("CoursesPage"));
        tableWidget = new QTableWidget(CoursesPage);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 60, 631, 651));
        stackedWidgetPages->addWidget(CoursesPage);
        ViewProgramSequence = new QWidget();
        ViewProgramSequence->setObjectName(QStringLiteral("ViewProgramSequence"));
        programSequenceTableWidget = new QTableWidget(ViewProgramSequence);
        programSequenceTableWidget->setObjectName(QStringLiteral("programSequenceTableWidget"));
        programSequenceTableWidget->setGeometry(QRect(10, 130, 681, 691));
        programSequenceTableWidget->setStyleSheet(QStringLiteral("background:#fff"));
        programSequenceTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        programSequenceFacultyName = new QLabel(ViewProgramSequence);
        programSequenceFacultyName->setObjectName(QStringLiteral("programSequenceFacultyName"));
        programSequenceFacultyName->setGeometry(QRect(10, 60, 681, 41));
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        programSequenceFacultyName->setFont(font4);
        programSequenceFacultyName->setStyleSheet(QLatin1String("background:#70808c;\n"
"color:#fff;\n"
"border-top-left-radius:5px;\n"
"border-top-right-radius:5px;\n"
"border-bottom-left-radius:0px;\n"
"border-bottom-right-radius:0px;"));
        programSequenceFacultyName->setAlignment(Qt::AlignCenter);
        programSequenceProgramName = new QLabel(ViewProgramSequence);
        programSequenceProgramName->setObjectName(QStringLiteral("programSequenceProgramName"));
        programSequenceProgramName->setGeometry(QRect(10, 100, 681, 31));
        QFont font5;
        font5.setPointSize(14);
        font5.setBold(false);
        font5.setWeight(50);
        programSequenceProgramName->setFont(font5);
        programSequenceProgramName->setStyleSheet(QStringLiteral("color:#333;border:1px solid #999;background:#fff;"));
        programSequenceProgramName->setAlignment(Qt::AlignCenter);
        addCourseFrame = new QFrame(ViewProgramSequence);
        addCourseFrame->setObjectName(QStringLiteral("addCourseFrame"));
        addCourseFrame->setGeometry(QRect(710, 60, 451, 461));
        addCourseFrame->setStyleSheet(QStringLiteral("background:#f1f1f1; color:#333; border-radius:5px;"));
        addCourseFrame->setFrameShape(QFrame::StyledPanel);
        addCourseFrame->setFrameShadow(QFrame::Raised);
        AddProgramSequenceFormTitle = new QLabel(addCourseFrame);
        AddProgramSequenceFormTitle->setObjectName(QStringLiteral("AddProgramSequenceFormTitle"));
        AddProgramSequenceFormTitle->setGeometry(QRect(0, 0, 451, 41));
        AddProgramSequenceFormTitle->setFont(font4);
        AddProgramSequenceFormTitle->setStyleSheet(QLatin1String("background:#70808c;\n"
"color:#fff;\n"
"border-bottom-left-radius:0px;\n"
"border-bottom-right-radius:0px;"));
        AddProgramSequenceFormTitle->setAlignment(Qt::AlignCenter);
        addCourseComment_plainTextEdit = new QPlainTextEdit(addCourseFrame);
        addCourseComment_plainTextEdit->setObjectName(QStringLiteral("addCourseComment_plainTextEdit"));
        addCourseComment_plainTextEdit->setGeometry(QRect(10, 300, 431, 101));
        addCourseComment_plainTextEdit->setStyleSheet(QStringLiteral("Background:#fff;"));
        label_2 = new QLabel(addCourseFrame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 280, 121, 16));
        addCourseLecturer_RegFormLineEdit = new QLineEdit(addCourseFrame);
        addCourseLecturer_RegFormLineEdit->setObjectName(QStringLiteral("addCourseLecturer_RegFormLineEdit"));
        addCourseLecturer_RegFormLineEdit->setEnabled(true);
        addCourseLecturer_RegFormLineEdit->setGeometry(QRect(150, 220, 151, 30));
        addCourseLecturer_RegFormLineEdit->setMinimumSize(QSize(0, 30));
        addCourseLecturer_RegFormLineEdit->setMaximumSize(QSize(16777215, 30));
        addCourseLecturer_RegFormLineEdit->setStyleSheet(QLatin1String("background-color:#ffffff;\n"
"color: #333;"));
        addCourse_pushButton = new QPushButton(addCourseFrame);
        addCourse_pushButton->setObjectName(QStringLiteral("addCourse_pushButton"));
        addCourse_pushButton->setGeometry(QRect(342, 420, 91, 32));
        addCourse_pushButton->setStyleSheet(QLatin1String("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons White/Icons/White/Edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        addCourse_pushButton->setIcon(icon6);
        addCourseRatingcomboBox = new QComboBox(addCourseFrame);
        addCourseRatingcomboBox->addItem(QString());
        addCourseRatingcomboBox->addItem(QString());
        addCourseRatingcomboBox->addItem(QString());
        addCourseRatingcomboBox->addItem(QString());
        addCourseRatingcomboBox->addItem(QString());
        addCourseRatingcomboBox->addItem(QString());
        addCourseRatingcomboBox->setObjectName(QStringLiteral("addCourseRatingcomboBox"));
        addCourseRatingcomboBox->setGeometry(QRect(310, 220, 121, 32));
        addCourseRatingcomboBox->setStyleSheet(QStringLiteral("background:#fff;"));
        courseCode_CourseGradeLable = new QLabel(addCourseFrame);
        courseCode_CourseGradeLable->setObjectName(QStringLiteral("courseCode_CourseGradeLable"));
        courseCode_CourseGradeLable->setGeometry(QRect(10, 100, 81, 16));
        courseCode_CourseGradeLable->setStyleSheet(QStringLiteral("color:#666"));
        courseName_courseGradeLable = new QLabel(addCourseFrame);
        courseName_courseGradeLable->setObjectName(QStringLiteral("courseName_courseGradeLable"));
        courseName_courseGradeLable->setGeometry(QRect(100, 100, 171, 16));
        courseName_courseGradeLable->setStyleSheet(QStringLiteral("color:#666"));
        credit_CourseGradeLable = new QLabel(addCourseFrame);
        credit_CourseGradeLable->setObjectName(QStringLiteral("credit_CourseGradeLable"));
        credit_CourseGradeLable->setGeometry(QRect(390, 100, 41, 16));
        credit_CourseGradeLable->setStyleSheet(QStringLiteral("color:#666"));
        semester_CourseGradeLable = new QLabel(addCourseFrame);
        semester_CourseGradeLable->setObjectName(QStringLiteral("semester_CourseGradeLable"));
        semester_CourseGradeLable->setGeometry(QRect(10, 230, 71, 16));
        semester_CourseGradeLable->setStyleSheet(QStringLiteral("color:#666"));
        allPrerequisites_CourseGradeLable = new QLabel(addCourseFrame);
        allPrerequisites_CourseGradeLable->setObjectName(QStringLiteral("allPrerequisites_CourseGradeLable"));
        allPrerequisites_CourseGradeLable->setGeometry(QRect(10, 160, 421, 16));
        allPrerequisites_CourseGradeLable->setStyleSheet(QStringLiteral("color:#666"));
        addCourseRatingcomboBox_2 = new QComboBox(addCourseFrame);
        addCourseRatingcomboBox_2->addItem(QString());
        addCourseRatingcomboBox_2->addItem(QString());
        addCourseRatingcomboBox_2->addItem(QString());
        addCourseRatingcomboBox_2->addItem(QString());
        addCourseRatingcomboBox_2->addItem(QString());
        addCourseRatingcomboBox_2->addItem(QString());
        addCourseRatingcomboBox_2->addItem(QString());
        addCourseRatingcomboBox_2->addItem(QString());
        addCourseRatingcomboBox_2->setObjectName(QStringLiteral("addCourseRatingcomboBox_2"));
        addCourseRatingcomboBox_2->setGeometry(QRect(290, 90, 81, 32));
        addCourseRatingcomboBox_2->setStyleSheet(QStringLiteral("background:#fff;"));
        courseYear_CourseGradeLable = new QLabel(addCourseFrame);
        courseYear_CourseGradeLable->setObjectName(QStringLiteral("courseYear_CourseGradeLable"));
        courseYear_CourseGradeLable->setGeometry(QRect(90, 230, 51, 16));
        courseYear_CourseGradeLable->setStyleSheet(QStringLiteral("color:#666"));
        codeCourseGradeTagLable = new QLabel(addCourseFrame);
        codeCourseGradeTagLable->setObjectName(QStringLiteral("codeCourseGradeTagLable"));
        codeCourseGradeTagLable->setGeometry(QRect(10, 70, 60, 16));
        courseNameCourseGradeTagLable = new QLabel(addCourseFrame);
        courseNameCourseGradeTagLable->setObjectName(QStringLiteral("courseNameCourseGradeTagLable"));
        courseNameCourseGradeTagLable->setGeometry(QRect(100, 70, 91, 16));
        gradeCourseGradeTagLable = new QLabel(addCourseFrame);
        gradeCourseGradeTagLable->setObjectName(QStringLiteral("gradeCourseGradeTagLable"));
        gradeCourseGradeTagLable->setGeometry(QRect(290, 70, 81, 16));
        gradeCourseGradeTagLable_2 = new QLabel(addCourseFrame);
        gradeCourseGradeTagLable_2->setObjectName(QStringLiteral("gradeCourseGradeTagLable_2"));
        gradeCourseGradeTagLable_2->setGeometry(QRect(390, 70, 41, 16));
        prerequisitesCourseGradeTagLable = new QLabel(addCourseFrame);
        prerequisitesCourseGradeTagLable->setObjectName(QStringLiteral("prerequisitesCourseGradeTagLable"));
        prerequisitesCourseGradeTagLable->setGeometry(QRect(10, 140, 91, 16));
        gradeCourseGradeTagLable_3 = new QLabel(addCourseFrame);
        gradeCourseGradeTagLable_3->setObjectName(QStringLiteral("gradeCourseGradeTagLable_3"));
        gradeCourseGradeTagLable_3->setGeometry(QRect(10, 210, 61, 16));
        yearCourseGradeTagLable = new QLabel(addCourseFrame);
        yearCourseGradeTagLable->setObjectName(QStringLiteral("yearCourseGradeTagLable"));
        yearCourseGradeTagLable->setGeometry(QRect(90, 210, 31, 16));
        lecturerCourseGradeTagLable = new QLabel(addCourseFrame);
        lecturerCourseGradeTagLable->setObjectName(QStringLiteral("lecturerCourseGradeTagLable"));
        lecturerCourseGradeTagLable->setGeometry(QRect(150, 210, 61, 16));
        ratingCourseGradeTagLable = new QLabel(addCourseFrame);
        ratingCourseGradeTagLable->setObjectName(QStringLiteral("ratingCourseGradeTagLable"));
        ratingCourseGradeTagLable->setGeometry(QRect(310, 210, 121, 16));
        stackedWidgetPages->addWidget(ViewProgramSequence);
        AddProgramSequence = new QWidget();
        AddProgramSequence->setObjectName(QStringLiteral("AddProgramSequence"));
        addCourseGrade = new QFrame(AddProgramSequence);
        addCourseGrade->setObjectName(QStringLiteral("addCourseGrade"));
        addCourseGrade->setGeometry(QRect(410, 190, 541, 231));
        addCourseGrade->setFrameShape(QFrame::StyledPanel);
        addCourseGrade->setFrameShadow(QFrame::Raised);
        label = new QLabel(addCourseGrade);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 541, 41));
        label->setFont(font4);
        label->setStyleSheet(QStringLiteral("background:#70808c;"));
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
        sgsApp->setWindowTitle(QApplication::translate("sgsApp", "Student Grading System", nullptr));
        usernameInput->setPlaceholderText(QApplication::translate("sgsApp", "Username", nullptr));
        passwordInput->setPlaceholderText(QApplication::translate("sgsApp", "Password", nullptr));
        signInButton->setText(QApplication::translate("sgsApp", "SIGN IN", nullptr));
        signUpButton->setText(QApplication::translate("sgsApp", "SIGN UP", nullptr));
        forgotPasswordButton->setText(QApplication::translate("sgsApp", "Forgot Password?", nullptr));
        label_4->setText(QApplication::translate("sgsApp", "Login", nullptr));
        loginErrorLabel->setText(QString());
        passwordShowButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        Sidebar->setToolTip(QApplication::translate("sgsApp", "Add", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("sgsApp", "General Menu", nullptr));
        dashboard_pushButton->setText(QApplication::translate("sgsApp", "Dashboard", nullptr));
        groupBox_2->setTitle(QApplication::translate("sgsApp", "Student", nullptr));
#ifndef QT_NO_TOOLTIP
        viewCoursesPending_Button->setToolTip(QApplication::translate("sgsApp", "Add Institution", nullptr));
#endif // QT_NO_TOOLTIP
        viewCoursesPending_Button->setText(QApplication::translate("sgsApp", "Pending Course", nullptr));
#ifndef QT_NO_TOOLTIP
        viewStudentProgramSequence_Button->setToolTip(QApplication::translate("sgsApp", "Add Institution", nullptr));
#endif // QT_NO_TOOLTIP
        viewStudentProgramSequence_Button->setText(QApplication::translate("sgsApp", "Program Sequence", nullptr));
#ifndef QT_NO_TOOLTIP
        viewCourses_Button->setToolTip(QApplication::translate("sgsApp", "Add Institution", nullptr));
#endif // QT_NO_TOOLTIP
        viewCourses_Button->setText(QApplication::translate("sgsApp", "Courses", nullptr));
#ifndef QT_NO_TOOLTIP
        viewComments_Button->setToolTip(QApplication::translate("sgsApp", "Add Institution", nullptr));
#endif // QT_NO_TOOLTIP
        viewComments_Button->setText(QApplication::translate("sgsApp", "Comments", nullptr));
        settingGroupBox->setTitle(QApplication::translate("sgsApp", "Administration", nullptr));
#ifndef QT_NO_TOOLTIP
        addInstitution_Button->setToolTip(QApplication::translate("sgsApp", "Add Institution", nullptr));
#endif // QT_NO_TOOLTIP
        addInstitution_Button->setText(QApplication::translate("sgsApp", "Institution", nullptr));
#ifndef QT_NO_TOOLTIP
        addCourse_Button->setToolTip(QApplication::translate("sgsApp", "Add Cours", nullptr));
#endif // QT_NO_TOOLTIP
        addCourse_Button->setText(QApplication::translate("sgsApp", "Course", nullptr));
        AddProgramSequence_Button->setText(QApplication::translate("sgsApp", "Program Sequence", nullptr));
#ifndef QT_NO_TOOLTIP
        addUser_Button->setToolTip(QApplication::translate("sgsApp", "Add Institution", nullptr));
#endif // QT_NO_TOOLTIP
        addUser_Button->setText(QApplication::translate("sgsApp", "User Account", nullptr));
#ifndef QT_NO_TOOLTIP
        disableUser_Button->setToolTip(QApplication::translate("sgsApp", "Add Institution", nullptr));
#endif // QT_NO_TOOLTIP
        disableUser_Button->setText(QApplication::translate("sgsApp", "Disable User", nullptr));
#ifndef QT_NO_TOOLTIP
        changePassword_Button->setToolTip(QApplication::translate("sgsApp", "Add Institution", nullptr));
#endif // QT_NO_TOOLTIP
        changePassword_Button->setText(QApplication::translate("sgsApp", "Change Password", nullptr));
        logoutButton->setText(QApplication::translate("sgsApp", " Logout", nullptr));
        userRoleLable_2->setText(QApplication::translate("sgsApp", "|", nullptr));
        userIconTopBar->setText(QString());
        userRoleLable->setText(QApplication::translate("sgsApp", ", STUDENT", nullptr));
        usernameLable->setText(QApplication::translate("sgsApp", "USER:", nullptr));
        TMPlabel_2->setText(QApplication::translate("sgsApp", "Dashboard", nullptr));
        programSequenceFacultyName->setText(QApplication::translate("sgsApp", "Faculty of Science & Technology Math, Physics and IT Department", nullptr));
        programSequenceProgramName->setText(QApplication::translate("sgsApp", "Bachelor Degree (Information Technology)", nullptr));
        AddProgramSequenceFormTitle->setText(QApplication::translate("sgsApp", "Course Update", nullptr));
        addCourseComment_plainTextEdit->setPlainText(QString());
        label_2->setText(QApplication::translate("sgsApp", "CourseComments:", nullptr));
        addCourseLecturer_RegFormLineEdit->setText(QString());
        addCourseLecturer_RegFormLineEdit->setPlaceholderText(QApplication::translate("sgsApp", "Lecturer", nullptr));
        addCourse_pushButton->setText(QApplication::translate("sgsApp", "Update", nullptr));
        addCourseRatingcomboBox->setItemText(0, QApplication::translate("sgsApp", "Select Rating", nullptr));
        addCourseRatingcomboBox->setItemText(1, QApplication::translate("sgsApp", "Ugly", nullptr));
        addCourseRatingcomboBox->setItemText(2, QApplication::translate("sgsApp", "Bad", nullptr));
        addCourseRatingcomboBox->setItemText(3, QApplication::translate("sgsApp", "Fair", nullptr));
        addCourseRatingcomboBox->setItemText(4, QApplication::translate("sgsApp", "Good", nullptr));
        addCourseRatingcomboBox->setItemText(5, QApplication::translate("sgsApp", "Excellent", nullptr));

        courseCode_CourseGradeLable->setText(QApplication::translate("sgsApp", "Code", nullptr));
        courseName_courseGradeLable->setText(QApplication::translate("sgsApp", "Course Name", nullptr));
        credit_CourseGradeLable->setText(QApplication::translate("sgsApp", "Credit", nullptr));
        semester_CourseGradeLable->setText(QApplication::translate("sgsApp", "Semester", nullptr));
        allPrerequisites_CourseGradeLable->setText(QApplication::translate("sgsApp", "All Pre-requisites", nullptr));
        addCourseRatingcomboBox_2->setItemText(0, QApplication::translate("sgsApp", "Grade", nullptr));
        addCourseRatingcomboBox_2->setItemText(1, QApplication::translate("sgsApp", "A", nullptr));
        addCourseRatingcomboBox_2->setItemText(2, QApplication::translate("sgsApp", "A-", nullptr));
        addCourseRatingcomboBox_2->setItemText(3, QApplication::translate("sgsApp", "B", nullptr));
        addCourseRatingcomboBox_2->setItemText(4, QApplication::translate("sgsApp", "C", nullptr));
        addCourseRatingcomboBox_2->setItemText(5, QApplication::translate("sgsApp", "D", nullptr));
        addCourseRatingcomboBox_2->setItemText(6, QApplication::translate("sgsApp", "F", nullptr));
        addCourseRatingcomboBox_2->setItemText(7, QApplication::translate("sgsApp", "TR", nullptr));

        courseYear_CourseGradeLable->setText(QApplication::translate("sgsApp", "Year", nullptr));
        codeCourseGradeTagLable->setText(QApplication::translate("sgsApp", "Code:", nullptr));
        courseNameCourseGradeTagLable->setText(QApplication::translate("sgsApp", "Course Name:", nullptr));
        gradeCourseGradeTagLable->setText(QApplication::translate("sgsApp", "Grade:", nullptr));
        gradeCourseGradeTagLable_2->setText(QApplication::translate("sgsApp", "Credit:", nullptr));
        prerequisitesCourseGradeTagLable->setText(QApplication::translate("sgsApp", "Pre-requisites:", nullptr));
        gradeCourseGradeTagLable_3->setText(QApplication::translate("sgsApp", "Semester:", nullptr));
        yearCourseGradeTagLable->setText(QApplication::translate("sgsApp", "Year:", nullptr));
        lecturerCourseGradeTagLable->setText(QApplication::translate("sgsApp", "Lecturer:", nullptr));
        ratingCourseGradeTagLable->setText(QApplication::translate("sgsApp", "Rating:", nullptr));
        label->setText(QApplication::translate("sgsApp", "Add Course Widget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sgsApp: public Ui_sgsApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SGSAPP_H
