/********************************************************************************
** Form generated from reading UI file 'sgsapp.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SGSAPP_H
#define UI_SGSAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
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
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *mainMenu_groupBox;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QPushButton *dashboard_pushButton;
    QFormLayout *formLayout_2;
    QPushButton *AddProgramSequence_Button;
    QPushButton *addCourse_Button;
    QPushButton *addInstitution_Button;
    QPushButton *addInstitution_Button_2;
    QGroupBox *accounts_groupBox;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout_5;
    QPushButton *new_Account_pushButton;
    QGroupBox *settings_groupBox;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QFormLayout *formLayout_8;
    QPushButton *resetPasswd_pushButton;
    QFormLayout *formLayout_9;
    QPushButton *addProgamSeqSettings_pushButton;
    QFormLayout *formLayout_11;
    QPushButton *suspendSetting_pushButton;
    QFrame *headBar;
    QPushButton *logoutTopBarButton;
    QLabel *userRoleLable_2;
    QPushButton *usernameTopBar;
    QLabel *userRoleLable;
    QWidget *lecturerDashboard;
    QLabel *label_2;
    QWidget *studentDashboard;
    QLabel *label_3;

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
        frame_2->setStyleSheet(QLatin1String("background:url(:/images/logo.png);\n"
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
        layoutWidget_2 = new QWidget(Sidebar);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(40, 30, 181, 401));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        mainMenu_groupBox = new QGroupBox(layoutWidget_2);
        mainMenu_groupBox->setObjectName(QStringLiteral("mainMenu_groupBox"));
        mainMenu_groupBox->setStyleSheet(QStringLiteral("color:#70808c;"));
        layoutWidget_3 = new QWidget(mainMenu_groupBox);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 30, 145, 134));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        dashboard_pushButton = new QPushButton(layoutWidget_3);
        dashboard_pushButton->setObjectName(QStringLiteral("dashboard_pushButton"));
        dashboard_pushButton->setLayoutDirection(Qt::LeftToRight);
        dashboard_pushButton->setStyleSheet(QStringLiteral("color:#fff;"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons White/Icons/White/Single Arrow RIGHT.png"), QSize(), QIcon::Normal, QIcon::Off);
        dashboard_pushButton->setIcon(icon2);

        formLayout->setWidget(0, QFormLayout::LabelRole, dashboard_pushButton);


        verticalLayout_2->addLayout(formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_2->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        AddProgramSequence_Button = new QPushButton(layoutWidget_3);
        AddProgramSequence_Button->setObjectName(QStringLiteral("AddProgramSequence_Button"));
        AddProgramSequence_Button->setLayoutDirection(Qt::LeftToRight);
        AddProgramSequence_Button->setStyleSheet(QStringLiteral("color:#fff;"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons White/Icons/White/Add.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddProgramSequence_Button->setIcon(icon3);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, AddProgramSequence_Button);

        addCourse_Button = new QPushButton(layoutWidget_3);
        addCourse_Button->setObjectName(QStringLiteral("addCourse_Button"));
        addCourse_Button->setLayoutDirection(Qt::LeftToRight);
        addCourse_Button->setStyleSheet(QStringLiteral("color:#fff;"));
        addCourse_Button->setIcon(icon3);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, addCourse_Button);

        addInstitution_Button = new QPushButton(layoutWidget_3);
        addInstitution_Button->setObjectName(QStringLiteral("addInstitution_Button"));
        addInstitution_Button->setLayoutDirection(Qt::LeftToRight);
        addInstitution_Button->setStyleSheet(QStringLiteral("color:#fff;"));
        addInstitution_Button->setIcon(icon3);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, addInstitution_Button);

        addInstitution_Button_2 = new QPushButton(layoutWidget_3);
        addInstitution_Button_2->setObjectName(QStringLiteral("addInstitution_Button_2"));
        addInstitution_Button_2->setLayoutDirection(Qt::LeftToRight);
        addInstitution_Button_2->setStyleSheet(QStringLiteral("color:#fff;"));
        addInstitution_Button_2->setIcon(icon3);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, addInstitution_Button_2);


        verticalLayout_2->addLayout(formLayout_2);

        accounts_groupBox = new QGroupBox(mainMenu_groupBox);
        accounts_groupBox->setObjectName(QStringLiteral("accounts_groupBox"));
        accounts_groupBox->setGeometry(QRect(0, 170, 179, 129));
        accounts_groupBox->setStyleSheet(QStringLiteral("color:#70808c;"));
        layoutWidget_4 = new QWidget(accounts_groupBox);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 40, 117, 48));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        formLayout_5->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_5->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        new_Account_pushButton = new QPushButton(layoutWidget_4);
        new_Account_pushButton->setObjectName(QStringLiteral("new_Account_pushButton"));
        new_Account_pushButton->setLayoutDirection(Qt::LeftToRight);
        new_Account_pushButton->setStyleSheet(QStringLiteral("color:#fff;"));

        formLayout_5->setWidget(0, QFormLayout::SpanningRole, new_Account_pushButton);


        verticalLayout_3->addLayout(formLayout_5);

        settings_groupBox = new QGroupBox(mainMenu_groupBox);
        settings_groupBox->setObjectName(QStringLiteral("settings_groupBox"));
        settings_groupBox->setGeometry(QRect(10, 280, 179, 196));
        settings_groupBox->setStyleSheet(QStringLiteral("color:#70808c;"));
        layoutWidget_5 = new QWidget(settings_groupBox);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 42, 128, 76));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        formLayout_8 = new QFormLayout();
        formLayout_8->setObjectName(QStringLiteral("formLayout_8"));
        formLayout_8->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_8->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        resetPasswd_pushButton = new QPushButton(layoutWidget_5);
        resetPasswd_pushButton->setObjectName(QStringLiteral("resetPasswd_pushButton"));
        resetPasswd_pushButton->setLayoutDirection(Qt::LeftToRight);
        resetPasswd_pushButton->setStyleSheet(QStringLiteral("color:#fff;"));

        formLayout_8->setWidget(0, QFormLayout::LabelRole, resetPasswd_pushButton);


        verticalLayout_5->addLayout(formLayout_8);

        formLayout_9 = new QFormLayout();
        formLayout_9->setObjectName(QStringLiteral("formLayout_9"));
        formLayout_9->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_9->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        addProgamSeqSettings_pushButton = new QPushButton(layoutWidget_5);
        addProgamSeqSettings_pushButton->setObjectName(QStringLiteral("addProgamSeqSettings_pushButton"));
        addProgamSeqSettings_pushButton->setLayoutDirection(Qt::LeftToRight);
        addProgamSeqSettings_pushButton->setStyleSheet(QStringLiteral("color:#fff;"));

        formLayout_9->setWidget(0, QFormLayout::LabelRole, addProgamSeqSettings_pushButton);


        verticalLayout_5->addLayout(formLayout_9);

        formLayout_11 = new QFormLayout();
        formLayout_11->setObjectName(QStringLiteral("formLayout_11"));
        formLayout_11->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_11->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        suspendSetting_pushButton = new QPushButton(layoutWidget_5);
        suspendSetting_pushButton->setObjectName(QStringLiteral("suspendSetting_pushButton"));
        suspendSetting_pushButton->setLayoutDirection(Qt::LeftToRight);
        suspendSetting_pushButton->setStyleSheet(QStringLiteral("color:#fff;"));

        formLayout_11->setWidget(0, QFormLayout::LabelRole, suspendSetting_pushButton);


        verticalLayout_5->addLayout(formLayout_11);


        verticalLayout_6->addWidget(mainMenu_groupBox);

        headBar = new QFrame(Dashboard);
        headBar->setObjectName(QStringLiteral("headBar"));
        headBar->setGeometry(QRect(0, 0, 1440, 50));
        headBar->setMinimumSize(QSize(1440, 50));
        headBar->setMaximumSize(QSize(260, 50));
        headBar->setStyleSheet(QLatin1String("background-image: url(:/images/background.jpg);\n"
"border:0;"));
        headBar->setFrameShape(QFrame::StyledPanel);
        headBar->setFrameShadow(QFrame::Raised);
        logoutTopBarButton = new QPushButton(headBar);
        logoutTopBarButton->setObjectName(QStringLiteral("logoutTopBarButton"));
        logoutTopBarButton->setGeometry(QRect(1290, 12, 91, 31));
        QFont font1;
        font1.setPointSize(9);
        font1.setUnderline(true);
        logoutTopBarButton->setFont(font1);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons White/Icons/White/Passsword.png"), QSize(), QIcon::Normal, QIcon::Off);
        logoutTopBarButton->setIcon(icon4);
        userRoleLable_2 = new QLabel(headBar);
        userRoleLable_2->setObjectName(QStringLiteral("userRoleLable_2"));
        userRoleLable_2->setGeometry(QRect(1280, 20, 16, 16));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setWeight(50);
        userRoleLable_2->setFont(font2);
        userRoleLable_2->setAlignment(Qt::AlignCenter);
        usernameTopBar = new QPushButton(headBar);
        usernameTopBar->setObjectName(QStringLiteral("usernameTopBar"));
        usernameTopBar->setGeometry(QRect(1070, 12, 111, 31));
        usernameTopBar->setFont(font);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons White/Icons/White/User.png"), QSize(), QIcon::Normal, QIcon::Off);
        usernameTopBar->setIcon(icon5);
        userRoleLable = new QLabel(headBar);
        userRoleLable->setObjectName(QStringLiteral("userRoleLable"));
        userRoleLable->setGeometry(QRect(1180, 20, 91, 16));
        userRoleLable->setFont(font2);
        stackedWidgetSGS->addWidget(Dashboard);
        lecturerDashboard = new QWidget();
        lecturerDashboard->setObjectName(QStringLiteral("lecturerDashboard"));
        label_2 = new QLabel(lecturerDashboard);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(439, 230, 171, 20));
        stackedWidgetSGS->addWidget(lecturerDashboard);
        studentDashboard = new QWidget();
        studentDashboard->setObjectName(QStringLiteral("studentDashboard"));
        label_3 = new QLabel(studentDashboard);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(590, 250, 211, 16));
        stackedWidgetSGS->addWidget(studentDashboard);
        sgsApp->setCentralWidget(centralwidget);

        retranslateUi(sgsApp);

        stackedWidgetSGS->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(sgsApp);
    } // setupUi

    void retranslateUi(QMainWindow *sgsApp)
    {
        sgsApp->setWindowTitle(QApplication::translate("sgsApp", "Student Grading System", Q_NULLPTR));
        usernameInput->setPlaceholderText(QApplication::translate("sgsApp", "Username", Q_NULLPTR));
        passwordInput->setPlaceholderText(QApplication::translate("sgsApp", "Password", Q_NULLPTR));
        signInButton->setText(QApplication::translate("sgsApp", "SIGN IN", Q_NULLPTR));
        signUpButton->setText(QApplication::translate("sgsApp", "SIGN UP", Q_NULLPTR));
        forgotPasswordButton->setText(QApplication::translate("sgsApp", "Forgot Password?", Q_NULLPTR));
        label_4->setText(QApplication::translate("sgsApp", "Login", Q_NULLPTR));
        loginErrorLabel->setText(QString());
        passwordShowButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        Sidebar->setToolTip(QApplication::translate("sgsApp", "Add", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mainMenu_groupBox->setTitle(QApplication::translate("sgsApp", "DASHBOARD", Q_NULLPTR));
        dashboard_pushButton->setText(QApplication::translate("sgsApp", "My Dashboard", Q_NULLPTR));
        AddProgramSequence_Button->setText(QApplication::translate("sgsApp", "Program Sequence", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        addCourse_Button->setToolTip(QApplication::translate("sgsApp", "Add Cours", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        addCourse_Button->setText(QApplication::translate("sgsApp", "Course", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        addInstitution_Button->setToolTip(QApplication::translate("sgsApp", "Add Institution", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        addInstitution_Button->setText(QApplication::translate("sgsApp", "Institution", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        addInstitution_Button_2->setToolTip(QApplication::translate("sgsApp", "Add Institution", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        addInstitution_Button_2->setText(QApplication::translate("sgsApp", "Institution", Q_NULLPTR));
        accounts_groupBox->setTitle(QApplication::translate("sgsApp", "Accounts", Q_NULLPTR));
        new_Account_pushButton->setText(QApplication::translate("sgsApp", "New Account", Q_NULLPTR));
        settings_groupBox->setTitle(QApplication::translate("sgsApp", "Settings", Q_NULLPTR));
        resetPasswd_pushButton->setText(QApplication::translate("sgsApp", "Reset Password", Q_NULLPTR));
        addProgamSeqSettings_pushButton->setText(QApplication::translate("sgsApp", "Program Sequence", Q_NULLPTR));
        suspendSetting_pushButton->setText(QApplication::translate("sgsApp", "Suspend User", Q_NULLPTR));
        logoutTopBarButton->setText(QApplication::translate("sgsApp", " Logout", Q_NULLPTR));
        userRoleLable_2->setText(QApplication::translate("sgsApp", "|", Q_NULLPTR));
        usernameTopBar->setText(QApplication::translate("sgsApp", "Username", Q_NULLPTR));
        userRoleLable->setText(QApplication::translate("sgsApp", ", STUDENT", Q_NULLPTR));
        label_2->setText(QApplication::translate("sgsApp", "Lecturer Dashboard", Q_NULLPTR));
        label_3->setText(QApplication::translate("sgsApp", "Student Dashboard", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class sgsApp: public Ui_sgsApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SGSAPP_H
