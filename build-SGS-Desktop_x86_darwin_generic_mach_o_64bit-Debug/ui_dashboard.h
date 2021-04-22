/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QFrame *Sidebar;
    QFrame *frame;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *mainMenu_groupBox;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QPushButton *dashboard_pushButton;
    QFormLayout *formLayout_2;
    QPushButton *AddProgramSequence_pushButton;
    QGroupBox *accounts_groupBox;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_5;
    QPushButton *dashboard_pushButton_2;
    QFormLayout *formLayout_4;
    QPushButton *AddProgramSequence_pushButton_2;
    QGroupBox *settings_groupBox;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *resetPasswd_pushButton;
    QPushButton *addProgamSeqSettings_pushButton;
    QPushButton *suspendAccount_pushButton;
    QPushButton *logout_pushButton;
    QFrame *headBar;
    QLabel *userLabel;
    QLabel *welcomeLabel;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_4;

    void setupUi(QDialog *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName(QString::fromUtf8("Dashboard"));
        Dashboard->resize(1050, 700);
        Dashboard->setMinimumSize(QSize(1050, 700));
        Dashboard->setMaximumSize(QSize(1050, 700));
        Dashboard->setStyleSheet(QString::fromUtf8("background-color:#efefef;"));
        Sidebar = new QFrame(Dashboard);
        Sidebar->setObjectName(QString::fromUtf8("Sidebar"));
        Sidebar->setGeometry(QRect(0, 40, 260, 660));
        Sidebar->setMinimumSize(QSize(260, 660));
        Sidebar->setMaximumSize(QSize(260, 660));
        Sidebar->setStyleSheet(QString::fromUtf8("background-color:#3a444c;\n"
"border: 0;"));
        Sidebar->setFrameShape(QFrame::StyledPanel);
        Sidebar->setFrameShadow(QFrame::Raised);
        frame = new QFrame(Sidebar);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(40, 570, 191, 61));
        frame->setStyleSheet(QString::fromUtf8("background:url(:/images/sideBarLogo.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(Sidebar);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 30, 181, 401));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        mainMenu_groupBox = new QGroupBox(layoutWidget);
        mainMenu_groupBox->setObjectName(QString::fromUtf8("mainMenu_groupBox"));
        mainMenu_groupBox->setStyleSheet(QString::fromUtf8("color:#70808c;"));
        layoutWidget1 = new QWidget(mainMenu_groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 40, 129, 69));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        dashboard_pushButton = new QPushButton(layoutWidget1);
        dashboard_pushButton->setObjectName(QString::fromUtf8("dashboard_pushButton"));
        dashboard_pushButton->setLayoutDirection(Qt::LeftToRight);
        dashboard_pushButton->setStyleSheet(QString::fromUtf8("color:#fff;"));

        formLayout->setWidget(0, QFormLayout::LabelRole, dashboard_pushButton);


        verticalLayout_2->addLayout(formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_2->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        AddProgramSequence_pushButton = new QPushButton(layoutWidget1);
        AddProgramSequence_pushButton->setObjectName(QString::fromUtf8("AddProgramSequence_pushButton"));
        AddProgramSequence_pushButton->setLayoutDirection(Qt::LeftToRight);
        AddProgramSequence_pushButton->setStyleSheet(QString::fromUtf8("color:#fff;"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, AddProgramSequence_pushButton);


        verticalLayout_2->addLayout(formLayout_2);

        accounts_groupBox = new QGroupBox(mainMenu_groupBox);
        accounts_groupBox->setObjectName(QString::fromUtf8("accounts_groupBox"));
        accounts_groupBox->setGeometry(QRect(0, 110, 179, 131));
        accounts_groupBox->setStyleSheet(QString::fromUtf8("color:#70808c;"));
        layoutWidget2 = new QWidget(accounts_groupBox);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 40, 117, 69));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_5->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_5->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        dashboard_pushButton_2 = new QPushButton(layoutWidget2);
        dashboard_pushButton_2->setObjectName(QString::fromUtf8("dashboard_pushButton_2"));
        dashboard_pushButton_2->setLayoutDirection(Qt::LeftToRight);
        dashboard_pushButton_2->setStyleSheet(QString::fromUtf8("color:#fff;"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, dashboard_pushButton_2);


        verticalLayout->addLayout(formLayout_5);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_4->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        AddProgramSequence_pushButton_2 = new QPushButton(layoutWidget2);
        AddProgramSequence_pushButton_2->setObjectName(QString::fromUtf8("AddProgramSequence_pushButton_2"));
        AddProgramSequence_pushButton_2->setLayoutDirection(Qt::LeftToRight);
        AddProgramSequence_pushButton_2->setStyleSheet(QString::fromUtf8("color:#fff;"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, AddProgramSequence_pushButton_2);


        verticalLayout->addLayout(formLayout_4);

        settings_groupBox = new QGroupBox(mainMenu_groupBox);
        settings_groupBox->setObjectName(QString::fromUtf8("settings_groupBox"));
        settings_groupBox->setGeometry(QRect(0, 230, 179, 191));
        settings_groupBox->setStyleSheet(QString::fromUtf8("color:#70808c;"));
        widget = new QWidget(settings_groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 20, 120, 135));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        resetPasswd_pushButton = new QPushButton(widget);
        resetPasswd_pushButton->setObjectName(QString::fromUtf8("resetPasswd_pushButton"));
        resetPasswd_pushButton->setLayoutDirection(Qt::LeftToRight);
        resetPasswd_pushButton->setStyleSheet(QString::fromUtf8("color:#fff;"));

        gridLayout->addWidget(resetPasswd_pushButton, 0, 0, 1, 1);

        addProgamSeqSettings_pushButton = new QPushButton(widget);
        addProgamSeqSettings_pushButton->setObjectName(QString::fromUtf8("addProgamSeqSettings_pushButton"));
        addProgamSeqSettings_pushButton->setLayoutDirection(Qt::LeftToRight);
        addProgamSeqSettings_pushButton->setStyleSheet(QString::fromUtf8("color:#fff;"));

        gridLayout->addWidget(addProgamSeqSettings_pushButton, 1, 0, 1, 1);

        suspendAccount_pushButton = new QPushButton(widget);
        suspendAccount_pushButton->setObjectName(QString::fromUtf8("suspendAccount_pushButton"));
        suspendAccount_pushButton->setLayoutDirection(Qt::LeftToRight);
        suspendAccount_pushButton->setStyleSheet(QString::fromUtf8("color:#fff;"));

        gridLayout->addWidget(suspendAccount_pushButton, 2, 0, 1, 1);

        logout_pushButton = new QPushButton(widget);
        logout_pushButton->setObjectName(QString::fromUtf8("logout_pushButton"));
        logout_pushButton->setLayoutDirection(Qt::LeftToRight);
        logout_pushButton->setStyleSheet(QString::fromUtf8("color:#fff;"));

        gridLayout->addWidget(logout_pushButton, 3, 0, 1, 1);


        verticalLayout_6->addWidget(mainMenu_groupBox);

        headBar = new QFrame(Dashboard);
        headBar->setObjectName(QString::fromUtf8("headBar"));
        headBar->setGeometry(QRect(0, 0, 1050, 40));
        headBar->setMinimumSize(QSize(1050, 40));
        headBar->setMaximumSize(QSize(1050, 40));
        headBar->setStyleSheet(QString::fromUtf8("background-color:#3c8dbc;\n"
"border:0;"));
        headBar->setFrameShape(QFrame::StyledPanel);
        headBar->setFrameShadow(QFrame::Raised);
        userLabel = new QLabel(headBar);
        userLabel->setObjectName(QString::fromUtf8("userLabel"));
        userLabel->setGeometry(QRect(770, 10, 151, 16));
        userLabel->setStyleSheet(QString::fromUtf8("color:#fff;"));
        welcomeLabel = new QLabel(headBar);
        welcomeLabel->setObjectName(QString::fromUtf8("welcomeLabel"));
        welcomeLabel->setGeometry(QRect(680, 10, 81, 16));
        welcomeLabel->setStyleSheet(QString::fromUtf8("color:#fff;"));
        layoutWidget3 = new QWidget(Dashboard);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_4 = new QVBoxLayout(layoutWidget3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QDialog *Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "UB Student Platform | Dashboard", nullptr));
        mainMenu_groupBox->setTitle(QCoreApplication::translate("Dashboard", "Main Menu", nullptr));
        dashboard_pushButton->setText(QCoreApplication::translate("Dashboard", "Dashboard", nullptr));
        AddProgramSequence_pushButton->setText(QCoreApplication::translate("Dashboard", "Program Sequence", nullptr));
        accounts_groupBox->setTitle(QCoreApplication::translate("Dashboard", "Accounts", nullptr));
        dashboard_pushButton_2->setText(QCoreApplication::translate("Dashboard", "Student Account", nullptr));
        AddProgramSequence_pushButton_2->setText(QCoreApplication::translate("Dashboard", "Lecturer Account", nullptr));
        settings_groupBox->setTitle(QCoreApplication::translate("Dashboard", "Settings", nullptr));
        resetPasswd_pushButton->setText(QCoreApplication::translate("Dashboard", "Reset Password", nullptr));
        addProgamSeqSettings_pushButton->setText(QCoreApplication::translate("Dashboard", "Program Sequence", nullptr));
        suspendAccount_pushButton->setText(QCoreApplication::translate("Dashboard", "Suspend User", nullptr));
        logout_pushButton->setText(QCoreApplication::translate("Dashboard", "Logout", nullptr));
        userLabel->setText(QCoreApplication::translate("Dashboard", "Admin", nullptr));
        welcomeLabel->setText(QCoreApplication::translate("Dashboard", "Welcome:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
