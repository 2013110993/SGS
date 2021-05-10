/********************************************************************************
** Form generated from reading UI file 'activate_deactivateuser.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
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
    QWidget *widget;
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
            Activate_DeactivateUser->setObjectName(QStringLiteral("Activate_DeactivateUser"));
        Activate_DeactivateUser->resize(518, 487);
        Footer = new QGroupBox(Activate_DeactivateUser);
        Footer->setObjectName(QStringLiteral("Footer"));
        Footer->setGeometry(QRect(0, 430, 521, 60));
        Footer->setMinimumSize(QSize(0, 0));
        Footer->setMaximumSize(QSize(16777215, 16777215));
        Footer->setStyleSheet(QStringLiteral("background:#3a444c;"));
        layoutWidget1_7 = new QWidget(Footer);
        layoutWidget1_7->setObjectName(QStringLiteral("layoutWidget1_7"));
        layoutWidget1_7->setGeometry(QRect(130, 10, 251, 42));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1_7);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        forgotPasswordCancelButton = new QPushButton(layoutWidget1_7);
        forgotPasswordCancelButton->setObjectName(QStringLiteral("forgotPasswordCancelButton"));
        forgotPasswordCancelButton->setStyleSheet(QLatin1String("color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));

        horizontalLayout_4->addWidget(forgotPasswordCancelButton);

        Header = new QGroupBox(Activate_DeactivateUser);
        Header->setObjectName(QStringLiteral("Header"));
        Header->setGeometry(QRect(0, 0, 521, 61));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Header->sizePolicy().hasHeightForWidth());
        Header->setSizePolicy(sizePolicy);
        Header->setMinimumSize(QSize(0, 0));
        Header->setMaximumSize(QSize(16777215, 16777215));
        Header->setStyleSheet(QLatin1String("background: url(:/images/background.jpg);\n"
"background-position:center;\n"
"background-repeat: no-repeat;"));
        label_2 = new QLabel(Header);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 20, 341, 20));
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setBold(true);
        font.setWeight(62);
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("font-weight:500;\n"
"color:#ffffff;\n"
"background: none;"));
        label_2->setAlignment(Qt::AlignCenter);
        lectureSearchButton = new QPushButton(Activate_DeactivateUser);
        lectureSearchButton->setObjectName(QStringLiteral("lectureSearchButton"));
        lectureSearchButton->setGeometry(QRect(350, 80, 111, 31));
        lectureSearchButton->setStyleSheet(QLatin1String("background:#292f38;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-top-left-radius:0px;\n"
"border-top-right-radius:5px;\n"
"border-bottom-left-radius:0px;\n"
"border-bottom-right-radius:5px;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons White/Icons/White/Search.png"), QSize(), QIcon::Normal, QIcon::Off);
        lectureSearchButton->setIcon(icon);
        lectureSearchButton->setAutoDefault(false);
        lectureSearchLineEdit = new QLineEdit(Activate_DeactivateUser);
        lectureSearchLineEdit->setObjectName(QStringLiteral("lectureSearchLineEdit"));
        lectureSearchLineEdit->setGeometry(QRect(50, 80, 301, 31));
        lectureSearchLineEdit->setStyleSheet(QLatin1String("color:#000;\n"
"padding: 5px;"));
        userInfogroupBox = new QGroupBox(Activate_DeactivateUser);
        userInfogroupBox->setObjectName(QStringLiteral("userInfogroupBox"));
        userInfogroupBox->setGeometry(QRect(30, 120, 451, 291));
        layoutWidget = new QWidget(userInfogroupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 240, 271, 32));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        activateResetButton = new QPushButton(layoutWidget);
        activateResetButton->setObjectName(QStringLiteral("activateResetButton"));
        activateResetButton->setStyleSheet(QLatin1String("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons White/Icons/White/Single Arrow RIGHT.png"), QSize(), QIcon::Normal, QIcon::Off);
        activateResetButton->setIcon(icon1);
        activateResetButton->setAutoDefault(false);

        horizontalLayout_5->addWidget(activateResetButton);

        disactivateResetButton = new QPushButton(layoutWidget);
        disactivateResetButton->setObjectName(QStringLiteral("disactivateResetButton"));
        disactivateResetButton->setStyleSheet(QLatin1String("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        disactivateResetButton->setIcon(icon1);
        disactivateResetButton->setAutoDefault(false);

        horizontalLayout_5->addWidget(disactivateResetButton);

        layoutWidget_4 = new QWidget(userInfogroupBox);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(120, 20, 221, 22));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        studentRadioButton = new QRadioButton(layoutWidget_4);
        studentRadioButton->setObjectName(QStringLiteral("studentRadioButton"));
        studentRadioButton->setChecked(true);

        horizontalLayout_8->addWidget(studentRadioButton);

        lecturerRadioButton = new QRadioButton(layoutWidget_4);
        lecturerRadioButton->setObjectName(QStringLiteral("lecturerRadioButton"));

        horizontalLayout_8->addWidget(lecturerRadioButton);

        widget = new QWidget(userInfogroupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(51, 51, 361, 161));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Name = new QLabel(widget);
        Name->setObjectName(QStringLiteral("Name"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        Name->setFont(font1);
        Name->setStyleSheet(QStringLiteral("background-color:none;"));

        horizontalLayout->addWidget(Name);

        Name_label = new QLabel(widget);
        Name_label->setObjectName(QStringLiteral("Name_label"));
        Name_label->setFont(font1);
        Name_label->setStyleSheet(QStringLiteral("background-color:none;"));

        horizontalLayout->addWidget(Name_label);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        userName = new QLabel(widget);
        userName->setObjectName(QStringLiteral("userName"));
        userName->setFont(font1);
        userName->setStyleSheet(QStringLiteral("background-color:none;"));

        horizontalLayout_2->addWidget(userName);

        userName_Label = new QLabel(widget);
        userName_Label->setObjectName(QStringLiteral("userName_Label"));
        userName_Label->setFont(font1);
        userName_Label->setStyleSheet(QStringLiteral("background-color:none;"));

        horizontalLayout_2->addWidget(userName_Label);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        createAt = new QLabel(widget);
        createAt->setObjectName(QStringLiteral("createAt"));
        createAt->setFont(font1);
        createAt->setStyleSheet(QStringLiteral("background-color:none;"));

        horizontalLayout_3->addWidget(createAt);

        createAt_Label = new QLabel(widget);
        createAt_Label->setObjectName(QStringLiteral("createAt_Label"));
        createAt_Label->setFont(font1);
        createAt_Label->setStyleSheet(QStringLiteral("background-color:none;"));

        horizontalLayout_3->addWidget(createAt_Label);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        role = new QLabel(widget);
        role->setObjectName(QStringLiteral("role"));
        role->setFont(font1);
        role->setStyleSheet(QStringLiteral("background-color:none;"));

        horizontalLayout_6->addWidget(role);

        role_2 = new QLabel(widget);
        role_2->setObjectName(QStringLiteral("role_2"));
        role_2->setFont(font1);
        role_2->setStyleSheet(QStringLiteral("background-color:none;"));

        horizontalLayout_6->addWidget(role_2);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        Activate = new QLabel(widget);
        Activate->setObjectName(QStringLiteral("Activate"));
        Activate->setFont(font1);
        Activate->setStyleSheet(QStringLiteral("background-color:none;"));

        horizontalLayout_7->addWidget(Activate);

        Activate_Label = new QLabel(widget);
        Activate_Label->setObjectName(QStringLiteral("Activate_Label"));
        Activate_Label->setFont(font1);
        Activate_Label->setStyleSheet(QStringLiteral("background-color:none;"));

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
        Activate_DeactivateUser->setWindowTitle(QApplication::translate("Activate_DeactivateUser", "Reset Passord", nullptr));
        Footer->setTitle(QString());
        forgotPasswordCancelButton->setText(QApplication::translate("Activate_DeactivateUser", "Cancel", nullptr));
        Header->setTitle(QString());
        label_2->setText(QApplication::translate("Activate_DeactivateUser", "Activate/Deactivate Accounts", nullptr));
        lectureSearchButton->setText(QApplication::translate("Activate_DeactivateUser", "Search", nullptr));
        lectureSearchLineEdit->setText(QString());
        lectureSearchLineEdit->setPlaceholderText(QApplication::translate("Activate_DeactivateUser", "Enter Full Lecture Name to find their Info.", nullptr));
        userInfogroupBox->setTitle(QApplication::translate("Activate_DeactivateUser", "User Information", nullptr));
        activateResetButton->setText(QApplication::translate("Activate_DeactivateUser", "Activate", nullptr));
        disactivateResetButton->setText(QApplication::translate("Activate_DeactivateUser", "Deactivate", nullptr));
        studentRadioButton->setText(QApplication::translate("Activate_DeactivateUser", "Student", nullptr));
        lecturerRadioButton->setText(QApplication::translate("Activate_DeactivateUser", "Lecturer", nullptr));
        Name->setText(QApplication::translate("Activate_DeactivateUser", "Name:", nullptr));
        Name_label->setText(QApplication::translate("Activate_DeactivateUser", "Full Name", nullptr));
        userName->setText(QApplication::translate("Activate_DeactivateUser", "UserName: ", nullptr));
        userName_Label->setText(QApplication::translate("Activate_DeactivateUser", "Username", nullptr));
        createAt->setText(QApplication::translate("Activate_DeactivateUser", "Create At:", nullptr));
        createAt_Label->setText(QApplication::translate("Activate_DeactivateUser", "Date", nullptr));
        role->setText(QApplication::translate("Activate_DeactivateUser", "Role", nullptr));
        role_2->setText(QApplication::translate("Activate_DeactivateUser", "Lecture", nullptr));
        Activate->setText(QApplication::translate("Activate_DeactivateUser", "Activate:", nullptr));
        Activate_Label->setText(QApplication::translate("Activate_DeactivateUser", "Activate ? Deativate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Activate_DeactivateUser: public Ui_Activate_DeactivateUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIVATE_DEACTIVATEUSER_H
