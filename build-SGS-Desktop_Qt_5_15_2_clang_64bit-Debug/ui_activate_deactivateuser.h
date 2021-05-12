/********************************************************************************
** Form generated from reading UI file 'activate_deactivateuser.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIVATE_DEACTIVATEUSER_H
#define UI_ACTIVATE_DEACTIVATEUSER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Activate_DeactivateUser
{
public:
    QGroupBox *Footer;
    QWidget *layoutWidget1_7;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *forgotPasswordCancelButton;
    QGroupBox *Header;
    QLabel *label_2;
    QPushButton *lectureSearchButton;
    QLineEdit *lectureSearchLineEdit;
    QGroupBox *userInfogroupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *activateResetButton;
    QPushButton *disactivateResetButton;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *studentRadioButton;
    QRadioButton *lecturerRadioButton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *Name;
    QLabel *Name_label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *userName;
    QLabel *userName_Label;
    QHBoxLayout *horizontalLayout_3;
    QLabel *createAt;
    QLabel *createAt_Label;
    QHBoxLayout *horizontalLayout_6;
    QLabel *role;
    QLabel *role_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *Activate;
    QLabel *Activate_Label;

    void setupUi(QDialog *Activate_DeactivateUser)
    {
        if (Activate_DeactivateUser->objectName().isEmpty())
            Activate_DeactivateUser->setObjectName(QString::fromUtf8("Activate_DeactivateUser"));
        Activate_DeactivateUser->resize(518, 487);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/Icon for Taskbar.png"), QSize(), QIcon::Normal, QIcon::Off);
        Activate_DeactivateUser->setWindowIcon(icon);
        Footer = new QGroupBox(Activate_DeactivateUser);
        Footer->setObjectName(QString::fromUtf8("Footer"));
        Footer->setGeometry(QRect(0, 430, 521, 60));
        Footer->setMinimumSize(QSize(0, 0));
        Footer->setMaximumSize(QSize(16777215, 16777215));
        Footer->setStyleSheet(QString::fromUtf8("background:#3a444c;"));
        layoutWidget1_7 = new QWidget(Footer);
        layoutWidget1_7->setObjectName(QString::fromUtf8("layoutWidget1_7"));
        layoutWidget1_7->setGeometry(QRect(130, 10, 251, 42));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1_7);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        forgotPasswordCancelButton = new QPushButton(layoutWidget1_7);
        forgotPasswordCancelButton->setObjectName(QString::fromUtf8("forgotPasswordCancelButton"));
        forgotPasswordCancelButton->setStyleSheet(QString::fromUtf8("color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));

        horizontalLayout_4->addWidget(forgotPasswordCancelButton);

        Header = new QGroupBox(Activate_DeactivateUser);
        Header->setObjectName(QString::fromUtf8("Header"));
        Header->setGeometry(QRect(0, 0, 521, 61));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Header->sizePolicy().hasHeightForWidth());
        Header->setSizePolicy(sizePolicy);
        Header->setMinimumSize(QSize(0, 0));
        Header->setMaximumSize(QSize(16777215, 16777215));
        Header->setStyleSheet(QString::fromUtf8("background: url(:/images/background.jpg);\n"
"background-position:center;\n"
"background-repeat: no-repeat;"));
        label_2 = new QLabel(Header);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 20, 341, 20));
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setBold(true);
        font.setWeight(62);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("font-weight:500;\n"
"color:#ffffff;\n"
"background: none;"));
        label_2->setAlignment(Qt::AlignCenter);
        lectureSearchButton = new QPushButton(Activate_DeactivateUser);
        lectureSearchButton->setObjectName(QString::fromUtf8("lectureSearchButton"));
        lectureSearchButton->setGeometry(QRect(350, 80, 111, 31));
        lectureSearchButton->setStyleSheet(QString::fromUtf8("background:#292f38;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-top-left-radius:0px;\n"
"border-top-right-radius:5px;\n"
"border-bottom-left-radius:0px;\n"
"border-bottom-right-radius:5px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons White/Icons/White/Search.png"), QSize(), QIcon::Normal, QIcon::Off);
        lectureSearchButton->setIcon(icon1);
        lectureSearchButton->setAutoDefault(false);
        lectureSearchLineEdit = new QLineEdit(Activate_DeactivateUser);
        lectureSearchLineEdit->setObjectName(QString::fromUtf8("lectureSearchLineEdit"));
        lectureSearchLineEdit->setGeometry(QRect(50, 80, 301, 31));
        lectureSearchLineEdit->setStyleSheet(QString::fromUtf8("color:#000;\n"
"padding: 5px;"));
        userInfogroupBox = new QGroupBox(Activate_DeactivateUser);
        userInfogroupBox->setObjectName(QString::fromUtf8("userInfogroupBox"));
        userInfogroupBox->setGeometry(QRect(30, 120, 451, 291));
        layoutWidget = new QWidget(userInfogroupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 240, 271, 32));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        activateResetButton = new QPushButton(layoutWidget);
        activateResetButton->setObjectName(QString::fromUtf8("activateResetButton"));
        activateResetButton->setStyleSheet(QString::fromUtf8("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons White/Icons/White/Single Arrow RIGHT.png"), QSize(), QIcon::Normal, QIcon::Off);
        activateResetButton->setIcon(icon2);
        activateResetButton->setAutoDefault(false);

        horizontalLayout_5->addWidget(activateResetButton);

        disactivateResetButton = new QPushButton(layoutWidget);
        disactivateResetButton->setObjectName(QString::fromUtf8("disactivateResetButton"));
        disactivateResetButton->setStyleSheet(QString::fromUtf8("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        disactivateResetButton->setIcon(icon2);
        disactivateResetButton->setAutoDefault(false);

        horizontalLayout_5->addWidget(disactivateResetButton);

        layoutWidget_4 = new QWidget(userInfogroupBox);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(120, 20, 221, 22));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        studentRadioButton = new QRadioButton(layoutWidget_4);
        studentRadioButton->setObjectName(QString::fromUtf8("studentRadioButton"));
        studentRadioButton->setChecked(true);

        horizontalLayout_8->addWidget(studentRadioButton);

        lecturerRadioButton = new QRadioButton(layoutWidget_4);
        lecturerRadioButton->setObjectName(QString::fromUtf8("lecturerRadioButton"));

        horizontalLayout_8->addWidget(lecturerRadioButton);

        layoutWidget1 = new QWidget(userInfogroupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(51, 51, 361, 161));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Name = new QLabel(layoutWidget1);
        Name->setObjectName(QString::fromUtf8("Name"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        Name->setFont(font1);
        Name->setStyleSheet(QString::fromUtf8("background-color:none;"));

        horizontalLayout->addWidget(Name);

        Name_label = new QLabel(layoutWidget1);
        Name_label->setObjectName(QString::fromUtf8("Name_label"));
        Name_label->setFont(font1);
        Name_label->setStyleSheet(QString::fromUtf8("background-color:none;"));

        horizontalLayout->addWidget(Name_label);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        userName = new QLabel(layoutWidget1);
        userName->setObjectName(QString::fromUtf8("userName"));
        userName->setFont(font1);
        userName->setStyleSheet(QString::fromUtf8("background-color:none;"));

        horizontalLayout_2->addWidget(userName);

        userName_Label = new QLabel(layoutWidget1);
        userName_Label->setObjectName(QString::fromUtf8("userName_Label"));
        userName_Label->setFont(font1);
        userName_Label->setStyleSheet(QString::fromUtf8("background-color:none;"));

        horizontalLayout_2->addWidget(userName_Label);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        createAt = new QLabel(layoutWidget1);
        createAt->setObjectName(QString::fromUtf8("createAt"));
        createAt->setFont(font1);
        createAt->setStyleSheet(QString::fromUtf8("background-color:none;"));

        horizontalLayout_3->addWidget(createAt);

        createAt_Label = new QLabel(layoutWidget1);
        createAt_Label->setObjectName(QString::fromUtf8("createAt_Label"));
        createAt_Label->setFont(font1);
        createAt_Label->setStyleSheet(QString::fromUtf8("background-color:none;"));

        horizontalLayout_3->addWidget(createAt_Label);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        role = new QLabel(layoutWidget1);
        role->setObjectName(QString::fromUtf8("role"));
        role->setFont(font1);
        role->setStyleSheet(QString::fromUtf8("background-color:none;"));

        horizontalLayout_6->addWidget(role);

        role_2 = new QLabel(layoutWidget1);
        role_2->setObjectName(QString::fromUtf8("role_2"));
        role_2->setFont(font1);
        role_2->setStyleSheet(QString::fromUtf8("background-color:none;"));

        horizontalLayout_6->addWidget(role_2);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        Activate = new QLabel(layoutWidget1);
        Activate->setObjectName(QString::fromUtf8("Activate"));
        Activate->setFont(font1);
        Activate->setStyleSheet(QString::fromUtf8("background-color:none;"));

        horizontalLayout_7->addWidget(Activate);

        Activate_Label = new QLabel(layoutWidget1);
        Activate_Label->setObjectName(QString::fromUtf8("Activate_Label"));
        Activate_Label->setFont(font1);
        Activate_Label->setStyleSheet(QString::fromUtf8("background-color:none;"));

        horizontalLayout_7->addWidget(Activate_Label);


        verticalLayout->addLayout(horizontalLayout_7);


        retranslateUi(Activate_DeactivateUser);

        lectureSearchButton->setDefault(false);
        activateResetButton->setDefault(false);
        disactivateResetButton->setDefault(false);


        QMetaObject::connectSlotsByName(Activate_DeactivateUser);
    } // setupUi

    void retranslateUi(QDialog *Activate_DeactivateUser)
    {
        Activate_DeactivateUser->setWindowTitle(QCoreApplication::translate("Activate_DeactivateUser", "Reset Passord", nullptr));
        Footer->setTitle(QString());
        forgotPasswordCancelButton->setText(QCoreApplication::translate("Activate_DeactivateUser", "Cancel", nullptr));
        Header->setTitle(QString());
        label_2->setText(QCoreApplication::translate("Activate_DeactivateUser", "Activate/Deactivate Accounts", nullptr));
        lectureSearchButton->setText(QCoreApplication::translate("Activate_DeactivateUser", "Search", nullptr));
        lectureSearchLineEdit->setText(QString());
        lectureSearchLineEdit->setPlaceholderText(QCoreApplication::translate("Activate_DeactivateUser", "Enter Full Lecture Name to find their Info.", nullptr));
        userInfogroupBox->setTitle(QCoreApplication::translate("Activate_DeactivateUser", "User Information", nullptr));
        activateResetButton->setText(QCoreApplication::translate("Activate_DeactivateUser", "Activate", nullptr));
        disactivateResetButton->setText(QCoreApplication::translate("Activate_DeactivateUser", "Deactivate", nullptr));
        studentRadioButton->setText(QCoreApplication::translate("Activate_DeactivateUser", "Student", nullptr));
        lecturerRadioButton->setText(QCoreApplication::translate("Activate_DeactivateUser", "Lecturer", nullptr));
        Name->setText(QCoreApplication::translate("Activate_DeactivateUser", "Name:", nullptr));
        Name_label->setText(QCoreApplication::translate("Activate_DeactivateUser", "Full Name", nullptr));
        userName->setText(QCoreApplication::translate("Activate_DeactivateUser", "UserName: ", nullptr));
        userName_Label->setText(QCoreApplication::translate("Activate_DeactivateUser", "Username", nullptr));
        createAt->setText(QCoreApplication::translate("Activate_DeactivateUser", "Create At:", nullptr));
        createAt_Label->setText(QCoreApplication::translate("Activate_DeactivateUser", "Date", nullptr));
        role->setText(QCoreApplication::translate("Activate_DeactivateUser", "Role", nullptr));
        role_2->setText(QCoreApplication::translate("Activate_DeactivateUser", "Lecture", nullptr));
        Activate->setText(QCoreApplication::translate("Activate_DeactivateUser", "Activate:", nullptr));
        Activate_Label->setText(QCoreApplication::translate("Activate_DeactivateUser", "Activate ? Deativate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Activate_DeactivateUser: public Ui_Activate_DeactivateUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIVATE_DEACTIVATEUSER_H
