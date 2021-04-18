/********************************************************************************
** Form generated from reading UI file 'sgsapp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SGSAPP_H
#define UI_SGSAPP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
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
    QPushButton *AddProgramSequence_pushButton;
    QGroupBox *accounts_groupBox;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout_5;
    QPushButton *dashboard_pushButton_2;
    QFormLayout *formLayout_4;
    QPushButton *AddProgramSequence_pushButton_2;
    QGroupBox *settings_groupBox;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QFormLayout *formLayout_8;
    QPushButton *resetPasswd_pushButton;
    QFormLayout *formLayout_9;
    QPushButton *addProgamSeqSettings_pushButton;
    QFormLayout *formLayout_11;
    QPushButton *addProgamSeqSettings_pushButton_2;
    QFrame *headBar;
    QWidget *lecturerDashboard;
    QLabel *label_2;
    QWidget *studentDashboard;
    QLabel *label_3;

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
        signInButton->setStyleSheet(QString::fromUtf8("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/lock.png"), QSize(), QIcon::Normal, QIcon::Off);
        signInButton->setIcon(icon);
        signUpButton = new QPushButton(loginBox);
        signUpButton->setObjectName(QString::fromUtf8("signUpButton"));
        signUpButton->setGeometry(QRect(20, 280, 113, 32));
        signUpButton->setStyleSheet(QString::fromUtf8("border:0px; color:#fff;"));
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
        frame_2->setStyleSheet(QString::fromUtf8("background:url(:/images/logo.png);\n"
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
        Sidebar->setGeometry(QRect(0, 40, 260, 900));
        Sidebar->setMinimumSize(QSize(260, 900));
        Sidebar->setMaximumSize(QSize(260, 900));
        Sidebar->setStyleSheet(QString::fromUtf8("background-color:#3a444c;\n"
"border: 0;"));
        Sidebar->setFrameShape(QFrame::StyledPanel);
        Sidebar->setFrameShadow(QFrame::Raised);
        frame = new QFrame(Sidebar);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(40, 730, 191, 61));
        frame->setStyleSheet(QString::fromUtf8("background:url(:/images/sideBarLogo.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget_2 = new QWidget(Sidebar);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(40, 30, 181, 401));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        mainMenu_groupBox = new QGroupBox(layoutWidget_2);
        mainMenu_groupBox->setObjectName(QString::fromUtf8("mainMenu_groupBox"));
        mainMenu_groupBox->setStyleSheet(QString::fromUtf8("color:#70808c;"));
        layoutWidget_3 = new QWidget(mainMenu_groupBox);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 30, 128, 91));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        dashboard_pushButton = new QPushButton(layoutWidget_3);
        dashboard_pushButton->setObjectName(QString::fromUtf8("dashboard_pushButton"));
        dashboard_pushButton->setLayoutDirection(Qt::LeftToRight);
        dashboard_pushButton->setStyleSheet(QString::fromUtf8("color:#fff;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        dashboard_pushButton->setIcon(icon2);

        formLayout->setWidget(0, QFormLayout::LabelRole, dashboard_pushButton);


        verticalLayout_2->addLayout(formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_2->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        AddProgramSequence_pushButton = new QPushButton(layoutWidget_3);
        AddProgramSequence_pushButton->setObjectName(QString::fromUtf8("AddProgramSequence_pushButton"));
        AddProgramSequence_pushButton->setLayoutDirection(Qt::LeftToRight);
        AddProgramSequence_pushButton->setStyleSheet(QString::fromUtf8("color:#fff;"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, AddProgramSequence_pushButton);


        verticalLayout_2->addLayout(formLayout_2);


        verticalLayout_6->addWidget(mainMenu_groupBox);

        accounts_groupBox = new QGroupBox(layoutWidget_2);
        accounts_groupBox->setObjectName(QString::fromUtf8("accounts_groupBox"));
        accounts_groupBox->setStyleSheet(QString::fromUtf8("color:#70808c;"));
        layoutWidget_4 = new QWidget(accounts_groupBox);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 40, 117, 48));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_5->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_5->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        dashboard_pushButton_2 = new QPushButton(layoutWidget_4);
        dashboard_pushButton_2->setObjectName(QString::fromUtf8("dashboard_pushButton_2"));
        dashboard_pushButton_2->setLayoutDirection(Qt::LeftToRight);
        dashboard_pushButton_2->setStyleSheet(QString::fromUtf8("color:#fff;"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, dashboard_pushButton_2);


        verticalLayout_3->addLayout(formLayout_5);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_4->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        AddProgramSequence_pushButton_2 = new QPushButton(layoutWidget_4);
        AddProgramSequence_pushButton_2->setObjectName(QString::fromUtf8("AddProgramSequence_pushButton_2"));
        AddProgramSequence_pushButton_2->setLayoutDirection(Qt::LeftToRight);
        AddProgramSequence_pushButton_2->setStyleSheet(QString::fromUtf8("color:#fff;"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, AddProgramSequence_pushButton_2);


        verticalLayout_3->addLayout(formLayout_4);


        verticalLayout_6->addWidget(accounts_groupBox);

        settings_groupBox = new QGroupBox(layoutWidget_2);
        settings_groupBox->setObjectName(QString::fromUtf8("settings_groupBox"));
        settings_groupBox->setStyleSheet(QString::fromUtf8("color:#70808c;"));
        layoutWidget_5 = new QWidget(settings_groupBox);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 42, 128, 76));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        formLayout_8 = new QFormLayout();
        formLayout_8->setObjectName(QString::fromUtf8("formLayout_8"));
        formLayout_8->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_8->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        resetPasswd_pushButton = new QPushButton(layoutWidget_5);
        resetPasswd_pushButton->setObjectName(QString::fromUtf8("resetPasswd_pushButton"));
        resetPasswd_pushButton->setLayoutDirection(Qt::LeftToRight);
        resetPasswd_pushButton->setStyleSheet(QString::fromUtf8("color:#fff;"));

        formLayout_8->setWidget(0, QFormLayout::LabelRole, resetPasswd_pushButton);


        verticalLayout_5->addLayout(formLayout_8);

        formLayout_9 = new QFormLayout();
        formLayout_9->setObjectName(QString::fromUtf8("formLayout_9"));
        formLayout_9->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_9->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        addProgamSeqSettings_pushButton = new QPushButton(layoutWidget_5);
        addProgamSeqSettings_pushButton->setObjectName(QString::fromUtf8("addProgamSeqSettings_pushButton"));
        addProgamSeqSettings_pushButton->setLayoutDirection(Qt::LeftToRight);
        addProgamSeqSettings_pushButton->setStyleSheet(QString::fromUtf8("color:#fff;"));

        formLayout_9->setWidget(0, QFormLayout::LabelRole, addProgamSeqSettings_pushButton);


        verticalLayout_5->addLayout(formLayout_9);

        formLayout_11 = new QFormLayout();
        formLayout_11->setObjectName(QString::fromUtf8("formLayout_11"));
        formLayout_11->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_11->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        addProgamSeqSettings_pushButton_2 = new QPushButton(layoutWidget_5);
        addProgamSeqSettings_pushButton_2->setObjectName(QString::fromUtf8("addProgamSeqSettings_pushButton_2"));
        addProgamSeqSettings_pushButton_2->setLayoutDirection(Qt::LeftToRight);
        addProgamSeqSettings_pushButton_2->setStyleSheet(QString::fromUtf8("color:#fff;"));

        formLayout_11->setWidget(0, QFormLayout::LabelRole, addProgamSeqSettings_pushButton_2);


        verticalLayout_5->addLayout(formLayout_11);


        verticalLayout_6->addWidget(settings_groupBox);

        headBar = new QFrame(Dashboard);
        headBar->setObjectName(QString::fromUtf8("headBar"));
        headBar->setGeometry(QRect(0, 0, 1440, 50));
        headBar->setMinimumSize(QSize(1440, 50));
        headBar->setMaximumSize(QSize(260, 50));
        headBar->setStyleSheet(QString::fromUtf8("background-color:#3c8dbc;\n"
"border:0;"));
        headBar->setFrameShape(QFrame::StyledPanel);
        headBar->setFrameShadow(QFrame::Raised);
        stackedWidgetSGS->addWidget(Dashboard);
        lecturerDashboard = new QWidget();
        lecturerDashboard->setObjectName(QString::fromUtf8("lecturerDashboard"));
        label_2 = new QLabel(lecturerDashboard);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(439, 230, 171, 20));
        stackedWidgetSGS->addWidget(lecturerDashboard);
        studentDashboard = new QWidget();
        studentDashboard->setObjectName(QString::fromUtf8("studentDashboard"));
        label_3 = new QLabel(studentDashboard);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(590, 250, 211, 16));
        stackedWidgetSGS->addWidget(studentDashboard);
        sgsApp->setCentralWidget(centralwidget);

        retranslateUi(sgsApp);

        stackedWidgetSGS->setCurrentIndex(0);


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
        mainMenu_groupBox->setTitle(QApplication::translate("sgsApp", "Main Menu", nullptr));
        dashboard_pushButton->setText(QApplication::translate("sgsApp", "Dashboard", nullptr));
        AddProgramSequence_pushButton->setText(QApplication::translate("sgsApp", "Program Sequence", nullptr));
        accounts_groupBox->setTitle(QApplication::translate("sgsApp", "Accounts", nullptr));
        dashboard_pushButton_2->setText(QApplication::translate("sgsApp", "Student Account", nullptr));
        AddProgramSequence_pushButton_2->setText(QApplication::translate("sgsApp", "Lecturer Account", nullptr));
        settings_groupBox->setTitle(QApplication::translate("sgsApp", "Settings", nullptr));
        resetPasswd_pushButton->setText(QApplication::translate("sgsApp", "Reset Password", nullptr));
        addProgamSeqSettings_pushButton->setText(QApplication::translate("sgsApp", "Program Sequence", nullptr));
        addProgamSeqSettings_pushButton_2->setText(QApplication::translate("sgsApp", "Suspend User", nullptr));
        label_2->setText(QApplication::translate("sgsApp", "Lecturer Dashboard", nullptr));
        label_3->setText(QApplication::translate("sgsApp", "Student Dashboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sgsApp: public Ui_sgsApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SGSAPP_H
