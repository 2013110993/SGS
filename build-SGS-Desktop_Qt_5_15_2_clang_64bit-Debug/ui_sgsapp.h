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
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
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
    QVBoxLayout *verticalLayout;
    QStackedWidget *SGS;
    QWidget *loginScreen;
    QFrame *loginBox;
    QLineEdit *usernameInput;
    QLineEdit *passwordInput;
    QPushButton *signInButton;
    QPushButton *signUpButton;
    QPushButton *forgetPasswordButton;
    QLabel *label_4;
    QFrame *usernameIcon;
    QFrame *passwordIcon;
    QFrame *footerLogo;
    QFrame *frame_2;
    QWidget *adminDashboard;
    QLabel *label;
    QWidget *lecturerDashboard;
    QLabel *label_2;
    QWidget *studentDashboard;
    QLabel *label_3;

    void setupUi(QMainWindow *sgsApp)
    {
        if (sgsApp->objectName().isEmpty())
            sgsApp->setObjectName(QString::fromUtf8("sgsApp"));
        sgsApp->resize(1400, 850);
        sgsApp->setMinimumSize(QSize(1400, 850));
        sgsApp->setMaximumSize(QSize(1400, 850));
        sgsApp->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(sgsApp);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        SGS = new QStackedWidget(centralwidget);
        SGS->setObjectName(QString::fromUtf8("SGS"));
        loginScreen = new QWidget();
        loginScreen->setObjectName(QString::fromUtf8("loginScreen"));
        loginScreen->setStyleSheet(QString::fromUtf8("background:url(:/images/background.jpg);\n"
"background-position:center;\n"
"background-repeat: no-repeat;"));
        loginBox = new QFrame(loginScreen);
        loginBox->setObjectName(QString::fromUtf8("loginBox"));
        loginBox->setGeometry(QRect(940, 250, 291, 351));
        loginBox->setMouseTracking(true);
        loginBox->setStyleSheet(QString::fromUtf8("border: 1px solid #8a1738;\n"
"border-radius:10px;"));
        loginBox->setFrameShape(QFrame::StyledPanel);
        loginBox->setFrameShadow(QFrame::Raised);
        usernameInput = new QLineEdit(loginBox);
        usernameInput->setObjectName(QString::fromUtf8("usernameInput"));
        usernameInput->setGeometry(QRect(70, 90, 181, 31));
        usernameInput->setMouseTracking(false);
        usernameInput->setStyleSheet(QString::fromUtf8("background:#fff;\n"
"border:0px; \n"
"border-top-right-radius:5px;\n"
"border-bottom-right-radius:5px;\n"
"border-top-left-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        passwordInput = new QLineEdit(loginBox);
        passwordInput->setObjectName(QString::fromUtf8("passwordInput"));
        passwordInput->setGeometry(QRect(70, 140, 181, 31));
        passwordInput->setStyleSheet(QString::fromUtf8("background:#fff;\n"
"border:0px; \n"
"border-top-right-radius:5px;\n"
"border-bottom-right-radius:5px;\n"
"border-top-left-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        passwordInput->setEchoMode(QLineEdit::Password);
        signInButton = new QPushButton(loginBox);
        signInButton->setObjectName(QString::fromUtf8("signInButton"));
        signInButton->setGeometry(QRect(100, 200, 113, 32));
        signUpButton = new QPushButton(loginBox);
        signUpButton->setObjectName(QString::fromUtf8("signUpButton"));
        signUpButton->setGeometry(QRect(20, 280, 113, 32));
        signUpButton->setStyleSheet(QString::fromUtf8("border:0px; color:#fff;"));
        forgetPasswordButton = new QPushButton(loginBox);
        forgetPasswordButton->setObjectName(QString::fromUtf8("forgetPasswordButton"));
        forgetPasswordButton->setGeometry(QRect(150, 280, 113, 32));
        forgetPasswordButton->setStyleSheet(QString::fromUtf8("border:0px; color:#fff;"));
        label_4 = new QLabel(loginBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(110, 30, 81, 31));
        label_4->setStyleSheet(QString::fromUtf8("color: #fff; font-size:28px; border:0px;"));
        usernameIcon = new QFrame(loginBox);
        usernameIcon->setObjectName(QString::fromUtf8("usernameIcon"));
        usernameIcon->setGeometry(QRect(40, 90, 31, 31));
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
        passwordIcon->setGeometry(QRect(40, 140, 31, 31));
        passwordIcon->setStyleSheet(QString::fromUtf8("background:#fff url(:/images/lock.png);\n"
"border:0px;\n"
"border-radius:0px;\n"
"border-top-left-radius:5px;\n"
"border-bottom-left-radius:5px;\n"
"border-top-right-radius:0px;\n"
"border-bottom-right-radius:0px;"));
        passwordIcon->setFrameShape(QFrame::StyledPanel);
        passwordIcon->setFrameShadow(QFrame::Raised);
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
        SGS->addWidget(loginScreen);
        adminDashboard = new QWidget();
        adminDashboard->setObjectName(QString::fromUtf8("adminDashboard"));
        label = new QLabel(adminDashboard);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(550, 210, 221, 16));
        SGS->addWidget(adminDashboard);
        lecturerDashboard = new QWidget();
        lecturerDashboard->setObjectName(QString::fromUtf8("lecturerDashboard"));
        label_2 = new QLabel(lecturerDashboard);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(439, 230, 171, 20));
        SGS->addWidget(lecturerDashboard);
        studentDashboard = new QWidget();
        studentDashboard->setObjectName(QString::fromUtf8("studentDashboard"));
        label_3 = new QLabel(studentDashboard);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(590, 250, 211, 16));
        SGS->addWidget(studentDashboard);

        verticalLayout->addWidget(SGS);

        sgsApp->setCentralWidget(centralwidget);

        retranslateUi(sgsApp);

        QMetaObject::connectSlotsByName(sgsApp);
    } // setupUi

    void retranslateUi(QMainWindow *sgsApp)
    {
        sgsApp->setWindowTitle(QCoreApplication::translate("sgsApp", "Student Grading System", nullptr));
        signInButton->setText(QCoreApplication::translate("sgsApp", "SIGN IN", nullptr));
        signUpButton->setText(QCoreApplication::translate("sgsApp", "SIGN UP", nullptr));
        forgetPasswordButton->setText(QCoreApplication::translate("sgsApp", "Forget Password", nullptr));
        label_4->setText(QCoreApplication::translate("sgsApp", "Login", nullptr));
        label->setText(QCoreApplication::translate("sgsApp", "Admin Dashboard", nullptr));
        label_2->setText(QCoreApplication::translate("sgsApp", "Lecturer Dashboard", nullptr));
        label_3->setText(QCoreApplication::translate("sgsApp", "Student Dashboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sgsApp: public Ui_sgsApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SGSAPP_H
