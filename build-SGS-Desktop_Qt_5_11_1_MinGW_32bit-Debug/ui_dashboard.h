/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
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
            Dashboard->setObjectName(QStringLiteral("Dashboard"));
        Dashboard->resize(1050, 700);
        Dashboard->setMinimumSize(QSize(1050, 700));
        Dashboard->setMaximumSize(QSize(1050, 700));
        Dashboard->setStyleSheet(QStringLiteral("background-color:#efefef;"));
        Sidebar = new QFrame(Dashboard);
        Sidebar->setObjectName(QStringLiteral("Sidebar"));
        Sidebar->setGeometry(QRect(0, 40, 260, 660));
        Sidebar->setMinimumSize(QSize(260, 660));
        Sidebar->setMaximumSize(QSize(260, 660));
        Sidebar->setStyleSheet(QLatin1String("background-color:#3a444c;\n"
"border: 0;"));
        Sidebar->setFrameShape(QFrame::StyledPanel);
        Sidebar->setFrameShadow(QFrame::Raised);
        frame = new QFrame(Sidebar);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(40, 570, 191, 61));
        frame->setStyleSheet(QStringLiteral("background:url(:/images/sideBarLogo.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(Sidebar);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 30, 181, 401));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        mainMenu_groupBox = new QGroupBox(layoutWidget);
        mainMenu_groupBox->setObjectName(QStringLiteral("mainMenu_groupBox"));
        mainMenu_groupBox->setStyleSheet(QStringLiteral("color:#70808c;"));
        layoutWidget1 = new QWidget(mainMenu_groupBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 40, 129, 69));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        dashboard_pushButton = new QPushButton(layoutWidget1);
        dashboard_pushButton->setObjectName(QStringLiteral("dashboard_pushButton"));
        dashboard_pushButton->setLayoutDirection(Qt::LeftToRight);
        dashboard_pushButton->setStyleSheet(QStringLiteral("color:#fff;"));

        formLayout->setWidget(0, QFormLayout::LabelRole, dashboard_pushButton);


        verticalLayout_2->addLayout(formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_2->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        AddProgramSequence_pushButton = new QPushButton(layoutWidget1);
        AddProgramSequence_pushButton->setObjectName(QStringLiteral("AddProgramSequence_pushButton"));
        AddProgramSequence_pushButton->setLayoutDirection(Qt::LeftToRight);
        AddProgramSequence_pushButton->setStyleSheet(QStringLiteral("color:#fff;"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, AddProgramSequence_pushButton);


        verticalLayout_2->addLayout(formLayout_2);

        accounts_groupBox = new QGroupBox(mainMenu_groupBox);
        accounts_groupBox->setObjectName(QStringLiteral("accounts_groupBox"));
        accounts_groupBox->setGeometry(QRect(0, 110, 179, 131));
        accounts_groupBox->setStyleSheet(QStringLiteral("color:#70808c;"));
        layoutWidget2 = new QWidget(accounts_groupBox);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 40, 117, 69));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        formLayout_5->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_5->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        dashboard_pushButton_2 = new QPushButton(layoutWidget2);
        dashboard_pushButton_2->setObjectName(QStringLiteral("dashboard_pushButton_2"));
        dashboard_pushButton_2->setLayoutDirection(Qt::LeftToRight);
        dashboard_pushButton_2->setStyleSheet(QStringLiteral("color:#fff;"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, dashboard_pushButton_2);


        verticalLayout->addLayout(formLayout_5);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        formLayout_4->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_4->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        AddProgramSequence_pushButton_2 = new QPushButton(layoutWidget2);
        AddProgramSequence_pushButton_2->setObjectName(QStringLiteral("AddProgramSequence_pushButton_2"));
        AddProgramSequence_pushButton_2->setLayoutDirection(Qt::LeftToRight);
        AddProgramSequence_pushButton_2->setStyleSheet(QStringLiteral("color:#fff;"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, AddProgramSequence_pushButton_2);


        verticalLayout->addLayout(formLayout_4);

        settings_groupBox = new QGroupBox(mainMenu_groupBox);
        settings_groupBox->setObjectName(QStringLiteral("settings_groupBox"));
        settings_groupBox->setGeometry(QRect(0, 230, 179, 191));
        settings_groupBox->setStyleSheet(QStringLiteral("color:#70808c;"));
        widget = new QWidget(settings_groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 20, 120, 135));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        resetPasswd_pushButton = new QPushButton(widget);
        resetPasswd_pushButton->setObjectName(QStringLiteral("resetPasswd_pushButton"));
        resetPasswd_pushButton->setLayoutDirection(Qt::LeftToRight);
        resetPasswd_pushButton->setStyleSheet(QStringLiteral("color:#fff;"));

        gridLayout->addWidget(resetPasswd_pushButton, 0, 0, 1, 1);

        addProgamSeqSettings_pushButton = new QPushButton(widget);
        addProgamSeqSettings_pushButton->setObjectName(QStringLiteral("addProgamSeqSettings_pushButton"));
        addProgamSeqSettings_pushButton->setLayoutDirection(Qt::LeftToRight);
        addProgamSeqSettings_pushButton->setStyleSheet(QStringLiteral("color:#fff;"));

        gridLayout->addWidget(addProgamSeqSettings_pushButton, 1, 0, 1, 1);

        suspendAccount_pushButton = new QPushButton(widget);
        suspendAccount_pushButton->setObjectName(QStringLiteral("suspendAccount_pushButton"));
        suspendAccount_pushButton->setLayoutDirection(Qt::LeftToRight);
        suspendAccount_pushButton->setStyleSheet(QStringLiteral("color:#fff;"));

        gridLayout->addWidget(suspendAccount_pushButton, 2, 0, 1, 1);

        logout_pushButton = new QPushButton(widget);
        logout_pushButton->setObjectName(QStringLiteral("logout_pushButton"));
        logout_pushButton->setLayoutDirection(Qt::LeftToRight);
        logout_pushButton->setStyleSheet(QStringLiteral("color:#fff;"));

        gridLayout->addWidget(logout_pushButton, 3, 0, 1, 1);


        verticalLayout_6->addWidget(mainMenu_groupBox);

        headBar = new QFrame(Dashboard);
        headBar->setObjectName(QStringLiteral("headBar"));
        headBar->setGeometry(QRect(0, 0, 1050, 40));
        headBar->setMinimumSize(QSize(1050, 40));
        headBar->setMaximumSize(QSize(1050, 40));
        headBar->setStyleSheet(QLatin1String("background-color:#3c8dbc;\n"
"border:0;"));
        headBar->setFrameShape(QFrame::StyledPanel);
        headBar->setFrameShadow(QFrame::Raised);
        userLabel = new QLabel(headBar);
        userLabel->setObjectName(QStringLiteral("userLabel"));
        userLabel->setGeometry(QRect(770, 10, 151, 16));
        userLabel->setStyleSheet(QStringLiteral("color:#fff;"));
        welcomeLabel = new QLabel(headBar);
        welcomeLabel->setObjectName(QStringLiteral("welcomeLabel"));
        welcomeLabel->setGeometry(QRect(680, 10, 81, 16));
        welcomeLabel->setStyleSheet(QStringLiteral("color:#fff;"));
        layoutWidget3 = new QWidget(Dashboard);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_4 = new QVBoxLayout(layoutWidget3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QDialog *Dashboard)
    {
        Dashboard->setWindowTitle(QApplication::translate("Dashboard", "UB Student Platform | Dashboard", nullptr));
        mainMenu_groupBox->setTitle(QApplication::translate("Dashboard", "Main Menu", nullptr));
        dashboard_pushButton->setText(QApplication::translate("Dashboard", "Dashboard", nullptr));
        AddProgramSequence_pushButton->setText(QApplication::translate("Dashboard", "Program Sequence", nullptr));
        accounts_groupBox->setTitle(QApplication::translate("Dashboard", "Accounts", nullptr));
        dashboard_pushButton_2->setText(QApplication::translate("Dashboard", "Student Account", nullptr));
        AddProgramSequence_pushButton_2->setText(QApplication::translate("Dashboard", "Lecturer Account", nullptr));
        settings_groupBox->setTitle(QApplication::translate("Dashboard", "Settings", nullptr));
        resetPasswd_pushButton->setText(QApplication::translate("Dashboard", "Reset Password", nullptr));
        addProgamSeqSettings_pushButton->setText(QApplication::translate("Dashboard", "Program Sequence", nullptr));
        suspendAccount_pushButton->setText(QApplication::translate("Dashboard", "Suspend User", nullptr));
        logout_pushButton->setText(QApplication::translate("Dashboard", "Logout", nullptr));
        userLabel->setText(QApplication::translate("Dashboard", "Admin", nullptr));
        welcomeLabel->setText(QApplication::translate("Dashboard", "Welcome:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
