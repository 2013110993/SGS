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
#include <QtWidgets/QStackedWidget>
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
    QStackedWidget *stackedWidgetResetPassword;
    QWidget *page;
    QGroupBox *accountTypegroupBox;
    QLineEdit *lecturerForgotFormLineEdit;
    QRadioButton *studentAccountTypeRadioButton;
    QRadioButton *lecturerAccountTypeRadioButton;
    QLineEdit *studentIdForgotFormLineEdit;
    QPushButton *accountLostResetButton;
    QWidget *page_2;
    QGroupBox *userInfogroupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *UserName;
    QLabel *UserName_label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *RoleType;
    QLabel *RoleType_Label;
    QHBoxLayout *horizontalLayout_3;
    QLabel *Activate;
    QLabel *Activate_Label;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *checkAnswerResetButton;
    QPushButton *checkAnswerResetButton_2;
    QWidget *page_3;
    QGroupBox *resetPasswordGroupBox;
    QLineEdit *newPassword_forgotFormLineEdit;
    QLineEdit *confirmPassword_forgotFormLineEdit;

    void setupUi(QDialog *Activate_DeactivateUser)
    {
        if (Activate_DeactivateUser->objectName().isEmpty())
            Activate_DeactivateUser->setObjectName(QStringLiteral("Activate_DeactivateUser"));
        Activate_DeactivateUser->resize(341, 348);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/SGS LOGO.png"), QSize(), QIcon::Normal, QIcon::Off);
        Activate_DeactivateUser->setWindowIcon(icon);
        Footer = new QGroupBox(Activate_DeactivateUser);
        Footer->setObjectName(QStringLiteral("Footer"));
        Footer->setGeometry(QRect(0, 290, 341, 60));
        Footer->setMinimumSize(QSize(0, 0));
        Footer->setMaximumSize(QSize(16777215, 16777215));
        Footer->setStyleSheet(QStringLiteral("background:#3a444c;"));
        layoutWidget1_7 = new QWidget(Footer);
        layoutWidget1_7->setObjectName(QStringLiteral("layoutWidget1_7"));
        layoutWidget1_7->setGeometry(QRect(50, 10, 251, 42));
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
        Header->setGeometry(QRect(0, 0, 341, 60));
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
        label_2->setGeometry(QRect(0, 20, 341, 20));
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
        stackedWidgetResetPassword = new QStackedWidget(Activate_DeactivateUser);
        stackedWidgetResetPassword->setObjectName(QStringLiteral("stackedWidgetResetPassword"));
        stackedWidgetResetPassword->setGeometry(QRect(0, 70, 321, 211));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        accountTypegroupBox = new QGroupBox(page);
        accountTypegroupBox->setObjectName(QStringLiteral("accountTypegroupBox"));
        accountTypegroupBox->setGeometry(QRect(20, 30, 301, 141));
        lecturerForgotFormLineEdit = new QLineEdit(accountTypegroupBox);
        lecturerForgotFormLineEdit->setObjectName(QStringLiteral("lecturerForgotFormLineEdit"));
        lecturerForgotFormLineEdit->setEnabled(true);
        lecturerForgotFormLineEdit->setGeometry(QRect(10, 80, 281, 30));
        lecturerForgotFormLineEdit->setMinimumSize(QSize(0, 30));
        lecturerForgotFormLineEdit->setMaximumSize(QSize(16777215, 30));
        lecturerForgotFormLineEdit->setStyleSheet(QLatin1String("background-color:#ffffff;\n"
"color: #333;"));
        studentAccountTypeRadioButton = new QRadioButton(accountTypegroupBox);
        studentAccountTypeRadioButton->setObjectName(QStringLiteral("studentAccountTypeRadioButton"));
        studentAccountTypeRadioButton->setGeometry(QRect(10, 50, 74, 20));
        studentAccountTypeRadioButton->setChecked(true);
        lecturerAccountTypeRadioButton = new QRadioButton(accountTypegroupBox);
        lecturerAccountTypeRadioButton->setObjectName(QStringLiteral("lecturerAccountTypeRadioButton"));
        lecturerAccountTypeRadioButton->setGeometry(QRect(94, 50, 76, 20));
        studentIdForgotFormLineEdit = new QLineEdit(accountTypegroupBox);
        studentIdForgotFormLineEdit->setObjectName(QStringLiteral("studentIdForgotFormLineEdit"));
        studentIdForgotFormLineEdit->setEnabled(true);
        studentIdForgotFormLineEdit->setGeometry(QRect(10, 80, 281, 30));
        studentIdForgotFormLineEdit->setMinimumSize(QSize(0, 30));
        studentIdForgotFormLineEdit->setMaximumSize(QSize(16777215, 30));
        studentIdForgotFormLineEdit->setStyleSheet(QLatin1String("background-color:#ffffff;\n"
"color: #333;"));
        accountLostResetButton = new QPushButton(page);
        accountLostResetButton->setObjectName(QStringLiteral("accountLostResetButton"));
        accountLostResetButton->setGeometry(QRect(110, 180, 121, 30));
        accountLostResetButton->setStyleSheet(QLatin1String("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons White/Icons/White/Search.png"), QSize(), QIcon::Normal, QIcon::Off);
        accountLostResetButton->setIcon(icon1);
        accountLostResetButton->setAutoDefault(false);
        stackedWidgetResetPassword->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        userInfogroupBox = new QGroupBox(page_2);
        userInfogroupBox->setObjectName(QStringLiteral("userInfogroupBox"));
        userInfogroupBox->setGeometry(QRect(10, 30, 301, 171));
        layoutWidget = new QWidget(userInfogroupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 271, 91));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        UserName = new QLabel(layoutWidget);
        UserName->setObjectName(QStringLiteral("UserName"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        UserName->setFont(font1);
        UserName->setStyleSheet(QStringLiteral("background-color:none;"));

        horizontalLayout->addWidget(UserName);

        UserName_label = new QLabel(layoutWidget);
        UserName_label->setObjectName(QStringLiteral("UserName_label"));
        UserName_label->setFont(font1);
        UserName_label->setStyleSheet(QStringLiteral("background-color:none;"));

        horizontalLayout->addWidget(UserName_label);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        RoleType = new QLabel(layoutWidget);
        RoleType->setObjectName(QStringLiteral("RoleType"));
        RoleType->setFont(font1);
        RoleType->setStyleSheet(QStringLiteral("background-color:none;"));

        horizontalLayout_2->addWidget(RoleType);

        RoleType_Label = new QLabel(layoutWidget);
        RoleType_Label->setObjectName(QStringLiteral("RoleType_Label"));
        RoleType_Label->setFont(font1);
        RoleType_Label->setStyleSheet(QStringLiteral("background-color:none;"));

        horizontalLayout_2->addWidget(RoleType_Label);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        Activate = new QLabel(layoutWidget);
        Activate->setObjectName(QStringLiteral("Activate"));
        Activate->setFont(font1);
        Activate->setStyleSheet(QStringLiteral("background-color:none;"));

        horizontalLayout_3->addWidget(Activate);

        Activate_Label = new QLabel(layoutWidget);
        Activate_Label->setObjectName(QStringLiteral("Activate_Label"));
        Activate_Label->setFont(font1);
        Activate_Label->setStyleSheet(QStringLiteral("background-color:none;"));

        horizontalLayout_3->addWidget(Activate_Label);


        verticalLayout->addLayout(horizontalLayout_3);

        layoutWidget1 = new QWidget(userInfogroupBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 120, 271, 32));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        checkAnswerResetButton = new QPushButton(layoutWidget1);
        checkAnswerResetButton->setObjectName(QStringLiteral("checkAnswerResetButton"));
        checkAnswerResetButton->setStyleSheet(QLatin1String("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons White/Icons/White/Single Arrow RIGHT.png"), QSize(), QIcon::Normal, QIcon::Off);
        checkAnswerResetButton->setIcon(icon2);
        checkAnswerResetButton->setAutoDefault(false);

        horizontalLayout_5->addWidget(checkAnswerResetButton);

        checkAnswerResetButton_2 = new QPushButton(layoutWidget1);
        checkAnswerResetButton_2->setObjectName(QStringLiteral("checkAnswerResetButton_2"));
        checkAnswerResetButton_2->setStyleSheet(QLatin1String("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        checkAnswerResetButton_2->setIcon(icon2);
        checkAnswerResetButton_2->setAutoDefault(false);

        horizontalLayout_5->addWidget(checkAnswerResetButton_2);

        stackedWidgetResetPassword->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        resetPasswordGroupBox = new QGroupBox(page_3);
        resetPasswordGroupBox->setObjectName(QStringLiteral("resetPasswordGroupBox"));
        resetPasswordGroupBox->setGeometry(QRect(10, 30, 301, 131));
        newPassword_forgotFormLineEdit = new QLineEdit(resetPasswordGroupBox);
        newPassword_forgotFormLineEdit->setObjectName(QStringLiteral("newPassword_forgotFormLineEdit"));
        newPassword_forgotFormLineEdit->setGeometry(QRect(10, 40, 281, 30));
        newPassword_forgotFormLineEdit->setMinimumSize(QSize(0, 30));
        newPassword_forgotFormLineEdit->setMaximumSize(QSize(16777215, 30));
        newPassword_forgotFormLineEdit->setStyleSheet(QLatin1String("background-color:#ffffff;\n"
"color: #333;"));
        confirmPassword_forgotFormLineEdit = new QLineEdit(resetPasswordGroupBox);
        confirmPassword_forgotFormLineEdit->setObjectName(QStringLiteral("confirmPassword_forgotFormLineEdit"));
        confirmPassword_forgotFormLineEdit->setGeometry(QRect(10, 80, 281, 30));
        confirmPassword_forgotFormLineEdit->setMinimumSize(QSize(0, 30));
        confirmPassword_forgotFormLineEdit->setMaximumSize(QSize(16777215, 30));
        confirmPassword_forgotFormLineEdit->setStyleSheet(QLatin1String("background-color:#ffffff;\n"
"color: #333;"));
        stackedWidgetResetPassword->addWidget(page_3);

        retranslateUi(Activate_DeactivateUser);

        stackedWidgetResetPassword->setCurrentIndex(1);
        accountLostResetButton->setDefault(false);
        checkAnswerResetButton->setDefault(false);
        checkAnswerResetButton_2->setDefault(false);


        QMetaObject::connectSlotsByName(Activate_DeactivateUser);
    } // setupUi

    void retranslateUi(QDialog *Activate_DeactivateUser)
    {
        Activate_DeactivateUser->setWindowTitle(QApplication::translate("Activate_DeactivateUser", "Reset Passord", nullptr));
        Footer->setTitle(QString());
        forgotPasswordCancelButton->setText(QApplication::translate("Activate_DeactivateUser", "Cancel", nullptr));
        Header->setTitle(QString());
        label_2->setText(QApplication::translate("Activate_DeactivateUser", "Activate/Deactivate Accounts", nullptr));
        accountTypegroupBox->setTitle(QApplication::translate("Activate_DeactivateUser", "Account Type", nullptr));
        lecturerForgotFormLineEdit->setPlaceholderText(QApplication::translate("Activate_DeactivateUser", "Lecturer Username", nullptr));
        studentAccountTypeRadioButton->setText(QApplication::translate("Activate_DeactivateUser", "Student", nullptr));
        lecturerAccountTypeRadioButton->setText(QApplication::translate("Activate_DeactivateUser", "Lecturer", nullptr));
        studentIdForgotFormLineEdit->setPlaceholderText(QApplication::translate("Activate_DeactivateUser", "Student ID #", nullptr));
        accountLostResetButton->setText(QApplication::translate("Activate_DeactivateUser", "Search Account", nullptr));
        userInfogroupBox->setTitle(QApplication::translate("Activate_DeactivateUser", "User Info", nullptr));
        UserName->setText(QApplication::translate("Activate_DeactivateUser", "Name:", nullptr));
        UserName_label->setText(QApplication::translate("Activate_DeactivateUser", "User Name", nullptr));
        RoleType->setText(QApplication::translate("Activate_DeactivateUser", "Role:", nullptr));
        RoleType_Label->setText(QApplication::translate("Activate_DeactivateUser", "Student ? Lecture", nullptr));
        Activate->setText(QApplication::translate("Activate_DeactivateUser", "Activate:", nullptr));
        Activate_Label->setText(QApplication::translate("Activate_DeactivateUser", "Student ? Lecture", nullptr));
        checkAnswerResetButton->setText(QApplication::translate("Activate_DeactivateUser", "Activate", nullptr));
        checkAnswerResetButton_2->setText(QApplication::translate("Activate_DeactivateUser", "Deactivate", nullptr));
        resetPasswordGroupBox->setTitle(QApplication::translate("Activate_DeactivateUser", "Reset Password", nullptr));
        newPassword_forgotFormLineEdit->setPlaceholderText(QApplication::translate("Activate_DeactivateUser", "(Enter new password)", nullptr));
        confirmPassword_forgotFormLineEdit->setPlaceholderText(QApplication::translate("Activate_DeactivateUser", "( Confirm password)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Activate_DeactivateUser: public Ui_Activate_DeactivateUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIVATE_DEACTIVATEUSER_H
