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
    QPushButton *viewComments_Button;
    QGroupBox *settingGroupBox;
    QPushButton *addInstitution_Button;
    QPushButton *addCourse_Button;
    QPushButton *AddProgramSequence_Button;
    QPushButton *addUser_Button;
    QPushButton *disableUser_Button;
    QPushButton *changePassword_Button;
    QPushButton *viewStudentProgramSequence_Button;
    QPushButton *viewCourses_Button;
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
    QFrame *pageTitleCourseListPage_3;
    QLabel *pageNameLabel_4;
    QLabel *TMPlabel_3;
    QLabel *TMPlabel_4;
    QLabel *TMPlabel_5;
    QLabel *TMPlabel_6;
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
    QPlainTextEdit *addCourseComment_plainTextEdit;
    QLabel *label_2;
    QLineEdit *addCourseLecturer_RegFormLineEdit;
    QPushButton *updateCourse_pushButton;
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
    QFrame *pageTitleCourseListPage_2;
    QLabel *pageNameLabel_3;
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
        groupBox->setGeometry(QRect(40, 50, 191, 651));
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
        groupBox_2->setGeometry(QRect(0, 210, 161, 111));
        viewComments_Button = new QPushButton(groupBox_2);
        viewComments_Button->setObjectName(QStringLiteral("viewComments_Button"));
        viewComments_Button->setGeometry(QRect(10, 50, 86, 16));
        viewComments_Button->setLayoutDirection(Qt::LeftToRight);
        viewComments_Button->setStyleSheet(QStringLiteral("color:#fff;"));
        settingGroupBox = new QGroupBox(groupBox);
        settingGroupBox->setObjectName(QStringLiteral("settingGroupBox"));
        settingGroupBox->setGeometry(QRect(0, 340, 160, 251));
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
        addUser_Button->setIcon(icon);
        disableUser_Button = new QPushButton(settingGroupBox);
        disableUser_Button->setObjectName(QStringLiteral("disableUser_Button"));
        disableUser_Button->setGeometry(QRect(11, 191, 151, 16));
        disableUser_Button->setLayoutDirection(Qt::LeftToRight);
        disableUser_Button->setStyleSheet(QStringLiteral("color:#fff;"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons White/Icons/White/Eye OFF.png"), QSize(), QIcon::Normal, QIcon::Off);
        disableUser_Button->setIcon(icon3);
        changePassword_Button = new QPushButton(settingGroupBox);
        changePassword_Button->setObjectName(QStringLiteral("changePassword_Button"));
        changePassword_Button->setGeometry(QRect(10, 40, 130, 16));
        changePassword_Button->setLayoutDirection(Qt::LeftToRight);
        changePassword_Button->setStyleSheet(QStringLiteral("color:#fff;"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons White/Icons/White/Edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        changePassword_Button->setIcon(icon4);
        viewStudentProgramSequence_Button = new QPushButton(groupBox);
        viewStudentProgramSequence_Button->setObjectName(QStringLiteral("viewStudentProgramSequence_Button"));
        viewStudentProgramSequence_Button->setGeometry(QRect(-10, 160, 141, 16));
        viewStudentProgramSequence_Button->setLayoutDirection(Qt::LeftToRight);
        viewStudentProgramSequence_Button->setStyleSheet(QStringLiteral("color:#fff;"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons White/Icons/White/Add.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewStudentProgramSequence_Button->setIcon(icon5);
        viewCourses_Button = new QPushButton(groupBox);
        viewCourses_Button->setObjectName(QStringLiteral("viewCourses_Button"));
        viewCourses_Button->setGeometry(QRect(-10, 120, 121, 16));
        viewCourses_Button->setLayoutDirection(Qt::LeftToRight);
        viewCourses_Button->setStyleSheet(QStringLiteral("color:#fff;"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons White/Icons/White/Student.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewCourses_Button->setIcon(icon6);
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
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icons White/Icons/White/Passsword.png"), QSize(), QIcon::Normal, QIcon::Off);
        logoutButton->setIcon(icon7);
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
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icons White/Icons/White/User.png"), QSize(), QIcon::Normal, QIcon::Off);
        userIconTopBar->setIcon(icon8);
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
        stackedWidgetPages->setStyleSheet(QStringLiteral("border: 1px"));
        DashboardPage = new QWidget();
        DashboardPage->setObjectName(QStringLiteral("DashboardPage"));
        TMPlabel_2 = new QLabel(DashboardPage);
        TMPlabel_2->setObjectName(QStringLiteral("TMPlabel_2"));
        TMPlabel_2->setGeometry(QRect(40, 80, 271, 71));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        TMPlabel_2->setFont(font3);
        TMPlabel_2->setStyleSheet(QLatin1String("background:#fff;\n"
"color: #000;\n"
"border-radius: 5px;"));
        TMPlabel_2->setAlignment(Qt::AlignCenter);
        pageTitleCourseListPage_3 = new QFrame(DashboardPage);
        pageTitleCourseListPage_3->setObjectName(QStringLiteral("pageTitleCourseListPage_3"));
        pageTitleCourseListPage_3->setGeometry(QRect(10, 0, 1151, 41));
        QFont font4;
        font4.setPointSize(11);
        pageTitleCourseListPage_3->setFont(font4);
        pageTitleCourseListPage_3->setStyleSheet(QStringLiteral("border-bottom:1px solid #999999;"));
        pageTitleCourseListPage_3->setFrameShape(QFrame::StyledPanel);
        pageTitleCourseListPage_3->setFrameShadow(QFrame::Raised);
        pageNameLabel_4 = new QLabel(pageTitleCourseListPage_3);
        pageNameLabel_4->setObjectName(QStringLiteral("pageNameLabel_4"));
        pageNameLabel_4->setGeometry(QRect(990, 0, 141, 31));
        QFont font5;
        font5.setPointSize(11);
        font5.setBold(true);
        font5.setWeight(75);
        pageNameLabel_4->setFont(font5);
        pageNameLabel_4->setLayoutDirection(Qt::LeftToRight);
        pageNameLabel_4->setStyleSheet(QStringLiteral("color:#999; border: 0px;"));
        pageNameLabel_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TMPlabel_3 = new QLabel(DashboardPage);
        TMPlabel_3->setObjectName(QStringLiteral("TMPlabel_3"));
        TMPlabel_3->setGeometry(QRect(460, 80, 271, 71));
        TMPlabel_3->setFont(font3);
        TMPlabel_3->setStyleSheet(QLatin1String("background:#fff;\n"
"color: #000;\n"
"border-radius: 5px;"));
        TMPlabel_3->setAlignment(Qt::AlignCenter);
        TMPlabel_4 = new QLabel(DashboardPage);
        TMPlabel_4->setObjectName(QStringLiteral("TMPlabel_4"));
        TMPlabel_4->setGeometry(QRect(870, 80, 271, 71));
        TMPlabel_4->setFont(font3);
        TMPlabel_4->setStyleSheet(QLatin1String("background:#fff;\n"
"color: #000;\n"
"border-radius: 5px;"));
        TMPlabel_4->setAlignment(Qt::AlignCenter);
        TMPlabel_5 = new QLabel(DashboardPage);
        TMPlabel_5->setObjectName(QStringLiteral("TMPlabel_5"));
        TMPlabel_5->setGeometry(QRect(40, 230, 531, 431));
        TMPlabel_5->setFont(font3);
        TMPlabel_5->setStyleSheet(QLatin1String("background:#fff;\n"
"color: #000;\n"
"border-radius: 5px;"));
        TMPlabel_5->setAlignment(Qt::AlignCenter);
        TMPlabel_6 = new QLabel(DashboardPage);
        TMPlabel_6->setObjectName(QStringLiteral("TMPlabel_6"));
        TMPlabel_6->setGeometry(QRect(610, 230, 531, 431));
        TMPlabel_6->setFont(font3);
        TMPlabel_6->setStyleSheet(QLatin1String("background:#fff;\n"
"color: #000;\n"
"border-radius: 5px;"));
        TMPlabel_6->setAlignment(Qt::AlignCenter);
        stackedWidgetPages->addWidget(DashboardPage);
        CoursesPage = new QWidget();
        CoursesPage->setObjectName(QStringLiteral("CoursesPage"));
        viewCoursesTableWidget = new QTableWidget(CoursesPage);
        viewCoursesTableWidget->setObjectName(QStringLiteral("viewCoursesTableWidget"));
        viewCoursesTableWidget->setGeometry(QRect(20, 100, 631, 721));
        titleCourseListPage = new QFrame(CoursesPage);
        titleCourseListPage->setObjectName(QStringLiteral("titleCourseListPage"));
        titleCourseListPage->setGeometry(QRect(700, 60, 471, 51));
        titleCourseListPage->setStyleSheet(QStringLiteral("background:#fff; border-radius:5px;"));
        titleCourseListPage->setFrameShape(QFrame::StyledPanel);
        titleCourseListPage->setFrameShadow(QFrame::Raised);
        courseTitleViewCourseLabel = new QLabel(titleCourseListPage);
        courseTitleViewCourseLabel->setObjectName(QStringLiteral("courseTitleViewCourseLabel"));
        courseTitleViewCourseLabel->setGeometry(QRect(30, 20, 51, 16));
        QFont font6;
        font6.setPointSize(9);
        courseTitleViewCourseLabel->setFont(font6);
        courseTitleViewCourseLabel->setStyleSheet(QStringLiteral("color:#666"));
        courseStatusViewCourseLabel = new QLabel(titleCourseListPage);
        courseStatusViewCourseLabel->setObjectName(QStringLiteral("courseStatusViewCourseLabel"));
        courseStatusViewCourseLabel->setGeometry(QRect(340, 20, 51, 16));
        courseStatusViewCourseLabel->setFont(font6);
        courseStatusViewCourseLabel->setStyleSheet(QStringLiteral("color:#666"));
        courseViewCourseTable = new QLabel(titleCourseListPage);
        courseViewCourseTable->setObjectName(QStringLiteral("courseViewCourseTable"));
        courseViewCourseTable->setGeometry(QRect(80, 20, 221, 20));
        QFont font7;
        font7.setPointSize(10);
        font7.setBold(true);
        font7.setWeight(75);
        courseViewCourseTable->setFont(font7);
        courseViewCourseTable->setStyleSheet(QStringLiteral("color:#333"));
        pendingViewCourseTable = new QLabel(titleCourseListPage);
        pendingViewCourseTable->setObjectName(QStringLiteral("pendingViewCourseTable"));
        pendingViewCourseTable->setGeometry(QRect(390, 20, 71, 21));
        pendingViewCourseTable->setFont(font3);
        pendingViewCourseTable->setStyleSheet(QStringLiteral("color:red;"));
        programSequenceFacultyName_2 = new QLabel(CoursesPage);
        programSequenceFacultyName_2->setObjectName(QStringLiteral("programSequenceFacultyName_2"));
        programSequenceFacultyName_2->setGeometry(QRect(20, 60, 631, 41));
        QFont font8;
        font8.setPointSize(14);
        font8.setBold(true);
        font8.setWeight(75);
        programSequenceFacultyName_2->setFont(font8);
        programSequenceFacultyName_2->setStyleSheet(QLatin1String("background:#70808c;\n"
"color:#fff;\n"
"border-top-left-radius:5px;\n"
"border-top-right-radius:5px;\n"
"border-bottom-left-radius:0px;\n"
"border-bottom-right-radius:0px;"));
        programSequenceFacultyName_2->setAlignment(Qt::AlignCenter);
        courseCommentViewCourseLabel = new QLabel(CoursesPage);
        courseCommentViewCourseLabel->setObjectName(QStringLiteral("courseCommentViewCourseLabel"));
        courseCommentViewCourseLabel->setGeometry(QRect(710, 140, 121, 16));
        courseCommentViewCourseLabel->setFont(font6);
        courseCommentViewCourseLabel->setStyleSheet(QStringLiteral("color:#666"));
        courseCommentListPage = new QFrame(CoursesPage);
        courseCommentListPage->setObjectName(QStringLiteral("courseCommentListPage"));
        courseCommentListPage->setGeometry(QRect(700, 170, 471, 151));
        courseCommentListPage->setStyleSheet(QStringLiteral("background:#fff; border-radius:5px;"));
        courseCommentListPage->setFrameShape(QFrame::StyledPanel);
        courseCommentListPage->setFrameShadow(QFrame::Raised);
        commentPostedViewCourseLabel = new QLabel(courseCommentListPage);
        commentPostedViewCourseLabel->setObjectName(QStringLiteral("commentPostedViewCourseLabel"));
        commentPostedViewCourseLabel->setGeometry(QRect(30, 20, 51, 16));
        commentPostedViewCourseLabel->setFont(font6);
        commentPostedViewCourseLabel->setStyleSheet(QStringLiteral("color:#666"));
        ratingStatusViewCourseLabel = new QLabel(courseCommentListPage);
        ratingStatusViewCourseLabel->setObjectName(QStringLiteral("ratingStatusViewCourseLabel"));
        ratingStatusViewCourseLabel->setGeometry(QRect(340, 20, 51, 16));
        ratingStatusViewCourseLabel->setFont(font6);
        ratingStatusViewCourseLabel->setStyleSheet(QStringLiteral("color:#666"));
        commentTimeStapViewCourseTable = new QLabel(courseCommentListPage);
        commentTimeStapViewCourseTable->setObjectName(QStringLiteral("commentTimeStapViewCourseTable"));
        commentTimeStapViewCourseTable->setGeometry(QRect(80, 20, 221, 20));
        commentTimeStapViewCourseTable->setFont(font7);
        commentTimeStapViewCourseTable->setStyleSheet(QStringLiteral("color:#333"));
        ratingViewCourseTable = new QLabel(courseCommentListPage);
        ratingViewCourseTable->setObjectName(QStringLiteral("ratingViewCourseTable"));
        ratingViewCourseTable->setGeometry(QRect(390, 20, 71, 21));
        ratingViewCourseTable->setFont(font3);
        ratingViewCourseTable->setStyleSheet(QStringLiteral("color:#333;"));
        userCommentViewCourseTable = new QLabel(courseCommentListPage);
        userCommentViewCourseTable->setObjectName(QStringLiteral("userCommentViewCourseTable"));
        userCommentViewCourseTable->setGeometry(QRect(10, 70, 451, 71));
        QFont font9;
        font9.setPointSize(8);
        font9.setBold(false);
        font9.setWeight(50);
        userCommentViewCourseTable->setFont(font9);
        userCommentViewCourseTable->setStyleSheet(QStringLiteral("color:#333"));
        pageTitleCourseListPage = new QFrame(CoursesPage);
        pageTitleCourseListPage->setObjectName(QStringLiteral("pageTitleCourseListPage"));
        pageTitleCourseListPage->setGeometry(QRect(20, 0, 1151, 41));
        pageTitleCourseListPage->setFont(font4);
        pageTitleCourseListPage->setStyleSheet(QStringLiteral("border-bottom:1px solid #999999;"));
        pageTitleCourseListPage->setFrameShape(QFrame::StyledPanel);
        pageTitleCourseListPage->setFrameShadow(QFrame::Raised);
        pageNameLabel = new QLabel(pageTitleCourseListPage);
        pageNameLabel->setObjectName(QStringLiteral("pageNameLabel"));
        pageNameLabel->setGeometry(QRect(990, 0, 141, 31));
        pageNameLabel->setFont(font5);
        pageNameLabel->setLayoutDirection(Qt::LeftToRight);
        pageNameLabel->setStyleSheet(QStringLiteral("color:#999; border: 0px;"));
        pageNameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
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
        programSequenceFacultyName->setFont(font8);
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
        QFont font10;
        font10.setPointSize(14);
        font10.setBold(false);
        font10.setWeight(50);
        programSequenceProgramName->setFont(font10);
        programSequenceProgramName->setStyleSheet(QStringLiteral("color:#333;border:1px solid #999;background:#fff;"));
        programSequenceProgramName->setAlignment(Qt::AlignCenter);
        addCourseFrame = new QFrame(ViewProgramSequence);
        addCourseFrame->setObjectName(QStringLiteral("addCourseFrame"));
        addCourseFrame->setGeometry(QRect(710, 60, 451, 461));
        addCourseFrame->setStyleSheet(QLatin1String(" border:1px solid #e1e1e1;\n"
"background:#f1f1f1; color:#333; border-radius:5px;"));
        addCourseFrame->setFrameShape(QFrame::StyledPanel);
        addCourseFrame->setFrameShadow(QFrame::Raised);
        AddProgramSequenceFormTitle = new QLabel(addCourseFrame);
        AddProgramSequenceFormTitle->setObjectName(QStringLiteral("AddProgramSequenceFormTitle"));
        AddProgramSequenceFormTitle->setGeometry(QRect(0, 0, 451, 41));
        AddProgramSequenceFormTitle->setFont(font8);
        AddProgramSequenceFormTitle->setStyleSheet(QLatin1String("background:#70808c;\n"
"color:#fff;\n"
"border-bottom-left-radius:0px;\n"
"border-bottom-right-radius:0px;"));
        AddProgramSequenceFormTitle->setAlignment(Qt::AlignCenter);
        addCourseComment_plainTextEdit = new QPlainTextEdit(addCourseFrame);
        addCourseComment_plainTextEdit->setObjectName(QStringLiteral("addCourseComment_plainTextEdit"));
        addCourseComment_plainTextEdit->setGeometry(QRect(10, 300, 431, 101));
        addCourseComment_plainTextEdit->setStyleSheet(QStringLiteral("Background:#fff; color:#333;"));
        label_2 = new QLabel(addCourseFrame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 280, 121, 16));
        label_2->setStyleSheet(QLatin1String("color:#666;\n"
"border:0px;"));
        addCourseLecturer_RegFormLineEdit = new QLineEdit(addCourseFrame);
        addCourseLecturer_RegFormLineEdit->setObjectName(QStringLiteral("addCourseLecturer_RegFormLineEdit"));
        addCourseLecturer_RegFormLineEdit->setEnabled(true);
        addCourseLecturer_RegFormLineEdit->setGeometry(QRect(150, 220, 151, 30));
        addCourseLecturer_RegFormLineEdit->setMinimumSize(QSize(0, 30));
        addCourseLecturer_RegFormLineEdit->setMaximumSize(QSize(16777215, 30));
        addCourseLecturer_RegFormLineEdit->setStyleSheet(QLatin1String("background-color:#ffffff;\n"
"color: #333;\n"
"border:0px;"));
        updateCourse_pushButton = new QPushButton(addCourseFrame);
        updateCourse_pushButton->setObjectName(QStringLiteral("updateCourse_pushButton"));
        updateCourse_pushButton->setGeometry(QRect(342, 420, 91, 32));
        updateCourse_pushButton->setStyleSheet(QLatin1String("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        updateCourse_pushButton->setIcon(icon4);
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
        courseCode_CourseGradeLable->setStyleSheet(QLatin1String("color:#000;\n"
"border:0px;"));
        courseName_courseGradeLable = new QLabel(addCourseFrame);
        courseName_courseGradeLable->setObjectName(QStringLiteral("courseName_courseGradeLable"));
        courseName_courseGradeLable->setGeometry(QRect(100, 100, 171, 16));
        courseName_courseGradeLable->setStyleSheet(QLatin1String("color:#000;\n"
"border:0px;"));
        credit_CourseGradeLable = new QLabel(addCourseFrame);
        credit_CourseGradeLable->setObjectName(QStringLiteral("credit_CourseGradeLable"));
        credit_CourseGradeLable->setGeometry(QRect(390, 100, 41, 16));
        credit_CourseGradeLable->setStyleSheet(QLatin1String("color:#000;\n"
"border:0px;"));
        semester_CourseGradeLable = new QLabel(addCourseFrame);
        semester_CourseGradeLable->setObjectName(QStringLiteral("semester_CourseGradeLable"));
        semester_CourseGradeLable->setGeometry(QRect(10, 230, 71, 16));
        semester_CourseGradeLable->setStyleSheet(QLatin1String("color:#000;\n"
"border:0px;"));
        allPrerequisites_CourseGradeLable = new QLabel(addCourseFrame);
        allPrerequisites_CourseGradeLable->setObjectName(QStringLiteral("allPrerequisites_CourseGradeLable"));
        allPrerequisites_CourseGradeLable->setGeometry(QRect(10, 160, 421, 16));
        allPrerequisites_CourseGradeLable->setStyleSheet(QLatin1String("color:#000;\n"
"border:0px;"));
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
        courseYear_CourseGradeLable->setStyleSheet(QLatin1String("color:#000;\n"
"border:0px;"));
        codeCourseGradeTagLable = new QLabel(addCourseFrame);
        codeCourseGradeTagLable->setObjectName(QStringLiteral("codeCourseGradeTagLable"));
        codeCourseGradeTagLable->setGeometry(QRect(10, 70, 60, 16));
        codeCourseGradeTagLable->setStyleSheet(QLatin1String("color:#666;\n"
"border:0px;"));
        courseNameCourseGradeTagLable = new QLabel(addCourseFrame);
        courseNameCourseGradeTagLable->setObjectName(QStringLiteral("courseNameCourseGradeTagLable"));
        courseNameCourseGradeTagLable->setGeometry(QRect(100, 70, 91, 16));
        courseNameCourseGradeTagLable->setStyleSheet(QLatin1String("color:#666;\n"
"border:0px;"));
        gradeCourseGradeTagLable = new QLabel(addCourseFrame);
        gradeCourseGradeTagLable->setObjectName(QStringLiteral("gradeCourseGradeTagLable"));
        gradeCourseGradeTagLable->setGeometry(QRect(290, 70, 81, 16));
        gradeCourseGradeTagLable->setStyleSheet(QLatin1String("color:#666;\n"
"border:0px;"));
        gradeCourseGradeTagLable_2 = new QLabel(addCourseFrame);
        gradeCourseGradeTagLable_2->setObjectName(QStringLiteral("gradeCourseGradeTagLable_2"));
        gradeCourseGradeTagLable_2->setGeometry(QRect(390, 70, 41, 16));
        gradeCourseGradeTagLable_2->setStyleSheet(QLatin1String("color:#666;\n"
"border:0px;"));
        prerequisitesCourseGradeTagLable = new QLabel(addCourseFrame);
        prerequisitesCourseGradeTagLable->setObjectName(QStringLiteral("prerequisitesCourseGradeTagLable"));
        prerequisitesCourseGradeTagLable->setGeometry(QRect(10, 140, 91, 16));
        prerequisitesCourseGradeTagLable->setStyleSheet(QLatin1String("color:#666;\n"
"border:0px;"));
        gradeCourseGradeTagLable_3 = new QLabel(addCourseFrame);
        gradeCourseGradeTagLable_3->setObjectName(QStringLiteral("gradeCourseGradeTagLable_3"));
        gradeCourseGradeTagLable_3->setGeometry(QRect(10, 210, 61, 16));
        gradeCourseGradeTagLable_3->setStyleSheet(QLatin1String("color:#666;\n"
"border:0px;"));
        yearCourseGradeTagLable = new QLabel(addCourseFrame);
        yearCourseGradeTagLable->setObjectName(QStringLiteral("yearCourseGradeTagLable"));
        yearCourseGradeTagLable->setGeometry(QRect(90, 210, 31, 16));
        yearCourseGradeTagLable->setStyleSheet(QLatin1String("color:#666;\n"
"border:0px;"));
        lecturerCourseGradeTagLable = new QLabel(addCourseFrame);
        lecturerCourseGradeTagLable->setObjectName(QStringLiteral("lecturerCourseGradeTagLable"));
        lecturerCourseGradeTagLable->setGeometry(QRect(150, 210, 61, 16));
        lecturerCourseGradeTagLable->setStyleSheet(QLatin1String("color:#666;\n"
"border:0px;"));
        ratingCourseGradeTagLable = new QLabel(addCourseFrame);
        ratingCourseGradeTagLable->setObjectName(QStringLiteral("ratingCourseGradeTagLable"));
        ratingCourseGradeTagLable->setGeometry(QRect(310, 210, 121, 16));
        ratingCourseGradeTagLable->setStyleSheet(QLatin1String("color:#666;\n"
"border:0px;"));
        pageTitleCourseListPage_2 = new QFrame(ViewProgramSequence);
        pageTitleCourseListPage_2->setObjectName(QStringLiteral("pageTitleCourseListPage_2"));
        pageTitleCourseListPage_2->setGeometry(QRect(10, 0, 1151, 41));
        pageTitleCourseListPage_2->setFont(font4);
        pageTitleCourseListPage_2->setStyleSheet(QStringLiteral("border-bottom:1px solid #999999;"));
        pageTitleCourseListPage_2->setFrameShape(QFrame::StyledPanel);
        pageTitleCourseListPage_2->setFrameShadow(QFrame::Raised);
        pageNameLabel_3 = new QLabel(pageTitleCourseListPage_2);
        pageNameLabel_3->setObjectName(QStringLiteral("pageNameLabel_3"));
        pageNameLabel_3->setGeometry(QRect(920, 0, 211, 31));
        pageNameLabel_3->setFont(font5);
        pageNameLabel_3->setLayoutDirection(Qt::LeftToRight);
        pageNameLabel_3->setStyleSheet(QStringLiteral("color:#999; border: 0px;"));
        pageNameLabel_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
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
        label->setFont(font8);
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
        disableUser_Button->setText(QApplication::translate("sgsApp", "Disable/Activate User", nullptr));
#ifndef QT_NO_TOOLTIP
        changePassword_Button->setToolTip(QApplication::translate("sgsApp", "Add Institution", nullptr));
#endif // QT_NO_TOOLTIP
        changePassword_Button->setText(QApplication::translate("sgsApp", "Change Password", nullptr));
#ifndef QT_NO_TOOLTIP
        viewStudentProgramSequence_Button->setToolTip(QApplication::translate("sgsApp", "Add Institution", nullptr));
#endif // QT_NO_TOOLTIP
        viewStudentProgramSequence_Button->setText(QApplication::translate("sgsApp", "Program Sequence", nullptr));
#ifndef QT_NO_TOOLTIP
        viewCourses_Button->setToolTip(QApplication::translate("sgsApp", "Add Institution", nullptr));
#endif // QT_NO_TOOLTIP
        viewCourses_Button->setText(QApplication::translate("sgsApp", "View Courses", nullptr));
        logoutButton->setText(QApplication::translate("sgsApp", " Logout", nullptr));
        userRoleLable_2->setText(QApplication::translate("sgsApp", "|", nullptr));
        userIconTopBar->setText(QString());
        userRoleLable->setText(QApplication::translate("sgsApp", ", STUDENT", nullptr));
        usernameLable->setText(QApplication::translate("sgsApp", "USER:", nullptr));
        TMPlabel_2->setText(QApplication::translate("sgsApp", "Widget 1", nullptr));
        pageNameLabel_4->setText(QApplication::translate("sgsApp", "/ Dashboard", nullptr));
        TMPlabel_3->setText(QApplication::translate("sgsApp", "Widget 2", nullptr));
        TMPlabel_4->setText(QApplication::translate("sgsApp", "Widget 3", nullptr));
        TMPlabel_5->setText(QApplication::translate("sgsApp", "Widget 4", nullptr));
        TMPlabel_6->setText(QApplication::translate("sgsApp", "Widget 5", nullptr));
        courseTitleViewCourseLabel->setText(QApplication::translate("sgsApp", "Course:", nullptr));
        courseStatusViewCourseLabel->setText(QApplication::translate("sgsApp", "Status:", nullptr));
        courseViewCourseTable->setText(QString());
        pendingViewCourseTable->setText(QString());
        programSequenceFacultyName_2->setText(QApplication::translate("sgsApp", "My Courses", nullptr));
        courseCommentViewCourseLabel->setText(QApplication::translate("sgsApp", "Course Comments:", nullptr));
        commentPostedViewCourseLabel->setText(QApplication::translate("sgsApp", "Posted:", nullptr));
        ratingStatusViewCourseLabel->setText(QApplication::translate("sgsApp", "Rating:", nullptr));
        commentTimeStapViewCourseTable->setText(QApplication::translate("sgsApp", "30/04/2021", nullptr));
        ratingViewCourseTable->setText(QApplication::translate("sgsApp", "Bad", nullptr));
        userCommentViewCourseTable->setText(QString());
        pageNameLabel->setText(QApplication::translate("sgsApp", "/ View Courses ", nullptr));
        programSequenceFacultyName->setText(QApplication::translate("sgsApp", "Faculty of Science & Technology Math, Physics and IT Department", nullptr));
        programSequenceProgramName->setText(QApplication::translate("sgsApp", "Bachelor Degree (Information Technology)", nullptr));
        AddProgramSequenceFormTitle->setText(QApplication::translate("sgsApp", "Course Update", nullptr));
        addCourseComment_plainTextEdit->setPlainText(QString());
        label_2->setText(QApplication::translate("sgsApp", "CourseComments:", nullptr));
        addCourseLecturer_RegFormLineEdit->setText(QString());
        addCourseLecturer_RegFormLineEdit->setPlaceholderText(QApplication::translate("sgsApp", "Lecturer", nullptr));
        updateCourse_pushButton->setText(QApplication::translate("sgsApp", "Update", nullptr));
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
        pageNameLabel_3->setText(QApplication::translate("sgsApp", "/ Program Sequence", nullptr));
        label->setText(QApplication::translate("sgsApp", "Add Course Widget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sgsApp: public Ui_sgsApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SGSAPP_H
