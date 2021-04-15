/********************************************************************************
** Form generated from reading UI file 'dashboardstudent.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARDSTUDENT_H
#define UI_DASHBOARDSTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dashboardStudent
{
public:
    QFrame *Sidebar;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *mainMenu_groupBox;
    QGroupBox *accounts_groupBox;
    QGroupBox *mainMenu_groupBox_2;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QFrame *frame;
    QFrame *topFrame;
    QLabel *home_label;
    QComboBox *myAccount_ComboBox;
    QGroupBox *groupBox;

    void setupUi(QWidget *dashboardStudent)
    {
        if (dashboardStudent->objectName().isEmpty())
            dashboardStudent->setObjectName(QString::fromUtf8("dashboardStudent"));
        dashboardStudent->resize(1050, 700);
        QPalette palette;
        QBrush brush(QColor(122, 137, 148, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        dashboardStudent->setPalette(palette);
        dashboardStudent->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 137, 148);"));
        Sidebar = new QFrame(dashboardStudent);
        Sidebar->setObjectName(QString::fromUtf8("Sidebar"));
        Sidebar->setGeometry(QRect(0, 40, 260, 660));
        Sidebar->setMinimumSize(QSize(260, 660));
        Sidebar->setMaximumSize(QSize(260, 660));
        Sidebar->setStyleSheet(QString::fromUtf8("background-color:#3a444c;\n"
"border: 0;"));
        Sidebar->setFrameShape(QFrame::StyledPanel);
        Sidebar->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(Sidebar);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 30, 181, 401));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        mainMenu_groupBox = new QGroupBox(layoutWidget);
        mainMenu_groupBox->setObjectName(QString::fromUtf8("mainMenu_groupBox"));
        mainMenu_groupBox->setStyleSheet(QString::fromUtf8("color:#70808c;"));
        accounts_groupBox = new QGroupBox(mainMenu_groupBox);
        accounts_groupBox->setObjectName(QString::fromUtf8("accounts_groupBox"));
        accounts_groupBox->setGeometry(QRect(0, 130, 179, 196));
        accounts_groupBox->setStyleSheet(QString::fromUtf8("color:#70808c;"));
        mainMenu_groupBox_2 = new QGroupBox(accounts_groupBox);
        mainMenu_groupBox_2->setObjectName(QString::fromUtf8("mainMenu_groupBox_2"));
        mainMenu_groupBox_2->setGeometry(QRect(0, 100, 179, 129));
        mainMenu_groupBox_2->setStyleSheet(QString::fromUtf8("color:#70808c;"));
        layoutWidget_4 = new QWidget(mainMenu_groupBox_2);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 20, 141, 69));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(layoutWidget_4);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color:#b6e1fc;\n"
"color: #065485;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));

        verticalLayout_4->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(layoutWidget_4);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color:#b6e1fc;\n"
"color: #065485;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));

        verticalLayout_4->addWidget(pushButton_6);

        layoutWidget_3 = new QWidget(accounts_groupBox);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 20, 141, 69));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        pushButton_9 = new QPushButton(layoutWidget_3);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color:#b6e1fc;\n"
"color: #065485;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));

        verticalLayout_7->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(layoutWidget_3);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setStyleSheet(QString::fromUtf8("background-color:#b6e1fc;\n"
"color: #065485;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));

        verticalLayout_7->addWidget(pushButton_10);

        layoutWidget_2 = new QWidget(mainMenu_groupBox);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 30, 141, 69));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_11 = new QPushButton(layoutWidget_2);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setStyleSheet(QString::fromUtf8("background-color:#b6e1fc;\n"
"color: #065485;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));

        verticalLayout_2->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(layoutWidget_2);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setStyleSheet(QString::fromUtf8("background-color:#b6e1fc;\n"
"color: #065485;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));

        verticalLayout_2->addWidget(pushButton_12);


        verticalLayout_6->addWidget(mainMenu_groupBox);

        frame = new QFrame(Sidebar);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(30, 570, 191, 61));
        frame->setStyleSheet(QString::fromUtf8("background:url(:/images/sideBarLogo.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        topFrame = new QFrame(dashboardStudent);
        topFrame->setObjectName(QString::fromUtf8("topFrame"));
        topFrame->setGeometry(QRect(0, 0, 1051, 41));
        QPalette palette1;
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush2(QColor(60, 141, 188, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
        QBrush brush4(QColor(120, 120, 120, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
        topFrame->setPalette(palette1);
        topFrame->setStyleSheet(QString::fromUtf8("background-color: #3c8dbc;"));
        topFrame->setFrameShape(QFrame::StyledPanel);
        topFrame->setFrameShadow(QFrame::Raised);
        home_label = new QLabel(topFrame);
        home_label->setObjectName(QString::fromUtf8("home_label"));
        home_label->setGeometry(QRect(40, 0, 211, 41));
        QFont font;
        font.setPointSize(15);
        home_label->setFont(font);
        myAccount_ComboBox = new QComboBox(topFrame);
        myAccount_ComboBox->addItem(QString());
        myAccount_ComboBox->addItem(QString());
        myAccount_ComboBox->addItem(QString());
        myAccount_ComboBox->addItem(QString());
        myAccount_ComboBox->addItem(QString());
        myAccount_ComboBox->setObjectName(QString::fromUtf8("myAccount_ComboBox"));
        myAccount_ComboBox->setGeometry(QRect(750, 10, 291, 21));
        myAccount_ComboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 135, 180);\n"
"/*  color: white;\n"
"  padding: 16px; */\n"
"border: 1px solid #aaa; \n"
"border-radius: .2em;\n"
"cursor: pointer;\n"
"font-size: 15px;\n"
""));
        groupBox = new QGroupBox(dashboardStudent);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(259, 50, 791, 641));

        retranslateUi(dashboardStudent);

        QMetaObject::connectSlotsByName(dashboardStudent);
    } // setupUi

    void retranslateUi(QWidget *dashboardStudent)
    {
        dashboardStudent->setWindowTitle(QApplication::translate("dashboardStudent", "Form", nullptr));
        mainMenu_groupBox->setTitle(QApplication::translate("dashboardStudent", "Main Menu", nullptr));
        accounts_groupBox->setTitle(QApplication::translate("dashboardStudent", "My Account", nullptr));
        mainMenu_groupBox_2->setTitle(QApplication::translate("dashboardStudent", "Settings", nullptr));
        pushButton_5->setText(QApplication::translate("dashboardStudent", "View Profile", nullptr));
        pushButton_6->setText(QApplication::translate("dashboardStudent", "Reset Password", nullptr));
        pushButton_9->setText(QApplication::translate("dashboardStudent", "My Account Home", nullptr));
        pushButton_10->setText(QApplication::translate("dashboardStudent", "Registrations", nullptr));
        pushButton_11->setText(QApplication::translate("dashboardStudent", "Dashboard", nullptr));
        pushButton_12->setText(QApplication::translate("dashboardStudent", "Course Search", nullptr));
        home_label->setText(QApplication::translate("dashboardStudent", "My Account Home", nullptr));
        myAccount_ComboBox->setItemText(0, QApplication::translate("dashboardStudent", "My Account Home", nullptr));
        myAccount_ComboBox->setItemText(1, QApplication::translate("dashboardStudent", "Registrations", nullptr));
        myAccount_ComboBox->setItemText(2, QApplication::translate("dashboardStudent", "Reset Password", nullptr));
        myAccount_ComboBox->setItemText(3, QApplication::translate("dashboardStudent", "My Program Sequence", nullptr));
        myAccount_ComboBox->setItemText(4, QApplication::translate("dashboardStudent", "Log Out", nullptr));

        groupBox->setTitle(QApplication::translate("dashboardStudent", "Current Program Enrolment:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dashboardStudent: public Ui_dashboardStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARDSTUDENT_H
