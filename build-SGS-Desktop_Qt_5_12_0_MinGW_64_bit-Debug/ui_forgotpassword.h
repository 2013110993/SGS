/********************************************************************************
** Form generated from reading UI file 'forgotpassword.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGOTPASSWORD_H
#define UI_FORGOTPASSWORD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_forgotPassword
{
public:
    QGroupBox *Footer;
    QWidget *layoutWidget1_7;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *forgotPasswordCancelButton;
    QPushButton *forgotPasswordResetButton;
    QGroupBox *Header;
    QLabel *label_2;
    QGroupBox *accountTypegroupBox;
    QLineEdit *lecturerForgotFormLineEdit;
    QRadioButton *studentAccountTypeRadioButton;
    QRadioButton *lecturerAccountTypeRadioButton;
    QLineEdit *studentIdForgotFormLineEdit;
    QGroupBox *accountTypegroupBox_2;
    QLineEdit *QuestionAnswer_forgotFormLineEdit;
    QLabel *Question_ForgotForm;
    QComboBox *securityQuestionsForgotFormcomboBox;
    QGroupBox *resetPasswordgroupBox;
    QLineEdit *newPassword_forgotFormLineEdit;
    QLineEdit *confirmPassword_forgotFormLineEdit;
    QPushButton *accountLostResetButton;
    QPushButton *checkAnswerResetButton;

    void setupUi(QDialog *forgotPassword)
    {
        if (forgotPassword->objectName().isEmpty())
            forgotPassword->setObjectName(QString::fromUtf8("forgotPassword"));
        forgotPassword->resize(341, 663);
        Footer = new QGroupBox(forgotPassword);
        Footer->setObjectName(QString::fromUtf8("Footer"));
        Footer->setGeometry(QRect(0, 610, 341, 60));
        Footer->setMinimumSize(QSize(0, 0));
        Footer->setMaximumSize(QSize(16777215, 16777215));
        Footer->setStyleSheet(QString::fromUtf8("background:#3a444c;"));
        layoutWidget1_7 = new QWidget(Footer);
        layoutWidget1_7->setObjectName(QString::fromUtf8("layoutWidget1_7"));
        layoutWidget1_7->setGeometry(QRect(50, 10, 251, 42));
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

        forgotPasswordResetButton = new QPushButton(layoutWidget1_7);
        forgotPasswordResetButton->setObjectName(QString::fromUtf8("forgotPasswordResetButton"));
        forgotPasswordResetButton->setStyleSheet(QString::fromUtf8("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/userAdd.png"), QSize(), QIcon::Normal, QIcon::Off);
        forgotPasswordResetButton->setIcon(icon);
        forgotPasswordResetButton->setAutoDefault(false);

        horizontalLayout_4->addWidget(forgotPasswordResetButton);

        Header = new QGroupBox(forgotPassword);
        Header->setObjectName(QString::fromUtf8("Header"));
        Header->setGeometry(QRect(0, 0, 341, 60));
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
        label_2->setGeometry(QRect(0, 20, 341, 20));
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
        accountTypegroupBox = new QGroupBox(forgotPassword);
        accountTypegroupBox->setObjectName(QString::fromUtf8("accountTypegroupBox"));
        accountTypegroupBox->setGeometry(QRect(20, 80, 301, 141));
        lecturerForgotFormLineEdit = new QLineEdit(accountTypegroupBox);
        lecturerForgotFormLineEdit->setObjectName(QString::fromUtf8("lecturerForgotFormLineEdit"));
        lecturerForgotFormLineEdit->setEnabled(true);
        lecturerForgotFormLineEdit->setGeometry(QRect(10, 80, 281, 30));
        lecturerForgotFormLineEdit->setMinimumSize(QSize(0, 30));
        lecturerForgotFormLineEdit->setMaximumSize(QSize(16777215, 30));
        lecturerForgotFormLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;"));
        studentAccountTypeRadioButton = new QRadioButton(accountTypegroupBox);
        studentAccountTypeRadioButton->setObjectName(QString::fromUtf8("studentAccountTypeRadioButton"));
        studentAccountTypeRadioButton->setGeometry(QRect(10, 50, 74, 20));
        studentAccountTypeRadioButton->setChecked(true);
        lecturerAccountTypeRadioButton = new QRadioButton(accountTypegroupBox);
        lecturerAccountTypeRadioButton->setObjectName(QString::fromUtf8("lecturerAccountTypeRadioButton"));
        lecturerAccountTypeRadioButton->setGeometry(QRect(94, 50, 76, 20));
        studentIdForgotFormLineEdit = new QLineEdit(accountTypegroupBox);
        studentIdForgotFormLineEdit->setObjectName(QString::fromUtf8("studentIdForgotFormLineEdit"));
        studentIdForgotFormLineEdit->setEnabled(true);
        studentIdForgotFormLineEdit->setGeometry(QRect(10, 80, 281, 30));
        studentIdForgotFormLineEdit->setMinimumSize(QSize(0, 30));
        studentIdForgotFormLineEdit->setMaximumSize(QSize(16777215, 30));
        studentIdForgotFormLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;"));
        accountTypegroupBox_2 = new QGroupBox(forgotPassword);
        accountTypegroupBox_2->setObjectName(QString::fromUtf8("accountTypegroupBox_2"));
        accountTypegroupBox_2->setGeometry(QRect(20, 280, 301, 131));
        QuestionAnswer_forgotFormLineEdit = new QLineEdit(accountTypegroupBox_2);
        QuestionAnswer_forgotFormLineEdit->setObjectName(QString::fromUtf8("QuestionAnswer_forgotFormLineEdit"));
        QuestionAnswer_forgotFormLineEdit->setGeometry(QRect(10, 90, 281, 30));
        QuestionAnswer_forgotFormLineEdit->setMinimumSize(QSize(0, 30));
        QuestionAnswer_forgotFormLineEdit->setMaximumSize(QSize(16777215, 30));
        QuestionAnswer_forgotFormLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;"));
        Question_ForgotForm = new QLabel(accountTypegroupBox_2);
        Question_ForgotForm->setObjectName(QString::fromUtf8("Question_ForgotForm"));
        Question_ForgotForm->setGeometry(QRect(10, 20, 271, 31));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        Question_ForgotForm->setFont(font1);
        Question_ForgotForm->setStyleSheet(QString::fromUtf8("background-color:none;"));
        securityQuestionsForgotFormcomboBox = new QComboBox(accountTypegroupBox_2);
        securityQuestionsForgotFormcomboBox->addItem(QString());
        securityQuestionsForgotFormcomboBox->setObjectName(QString::fromUtf8("securityQuestionsForgotFormcomboBox"));
        securityQuestionsForgotFormcomboBox->setGeometry(QRect(10, 50, 291, 30));
        securityQuestionsForgotFormcomboBox->setMinimumSize(QSize(0, 30));
        securityQuestionsForgotFormcomboBox->setMaximumSize(QSize(16777215, 30));
        securityQuestionsForgotFormcomboBox->setStyleSheet(QString::fromUtf8("background:#ffffff;\n"
"color:#333;"));
        resetPasswordgroupBox = new QGroupBox(forgotPassword);
        resetPasswordgroupBox->setObjectName(QString::fromUtf8("resetPasswordgroupBox"));
        resetPasswordgroupBox->setGeometry(QRect(20, 460, 301, 131));
        newPassword_forgotFormLineEdit = new QLineEdit(resetPasswordgroupBox);
        newPassword_forgotFormLineEdit->setObjectName(QString::fromUtf8("newPassword_forgotFormLineEdit"));
        newPassword_forgotFormLineEdit->setGeometry(QRect(10, 40, 281, 30));
        newPassword_forgotFormLineEdit->setMinimumSize(QSize(0, 30));
        newPassword_forgotFormLineEdit->setMaximumSize(QSize(16777215, 30));
        newPassword_forgotFormLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;"));
        confirmPassword_forgotFormLineEdit = new QLineEdit(resetPasswordgroupBox);
        confirmPassword_forgotFormLineEdit->setObjectName(QString::fromUtf8("confirmPassword_forgotFormLineEdit"));
        confirmPassword_forgotFormLineEdit->setGeometry(QRect(10, 80, 281, 30));
        confirmPassword_forgotFormLineEdit->setMinimumSize(QSize(0, 30));
        confirmPassword_forgotFormLineEdit->setMaximumSize(QSize(16777215, 30));
        confirmPassword_forgotFormLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;"));
        accountLostResetButton = new QPushButton(forgotPassword);
        accountLostResetButton->setObjectName(QString::fromUtf8("accountLostResetButton"));
        accountLostResetButton->setGeometry(QRect(100, 230, 121, 30));
        accountLostResetButton->setStyleSheet(QString::fromUtf8("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        accountLostResetButton->setIcon(icon);
        accountLostResetButton->setAutoDefault(false);
        checkAnswerResetButton = new QPushButton(forgotPassword);
        checkAnswerResetButton->setObjectName(QString::fromUtf8("checkAnswerResetButton"));
        checkAnswerResetButton->setGeometry(QRect(100, 420, 121, 30));
        checkAnswerResetButton->setStyleSheet(QString::fromUtf8("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        checkAnswerResetButton->setIcon(icon);
        checkAnswerResetButton->setAutoDefault(false);

        retranslateUi(forgotPassword);

        forgotPasswordResetButton->setDefault(false);
        accountLostResetButton->setDefault(false);
        checkAnswerResetButton->setDefault(false);


        QMetaObject::connectSlotsByName(forgotPassword);
    } // setupUi

    void retranslateUi(QDialog *forgotPassword)
    {
        forgotPassword->setWindowTitle(QApplication::translate("forgotPassword", "Reset Passord", nullptr));
        Footer->setTitle(QString());
        forgotPasswordCancelButton->setText(QApplication::translate("forgotPassword", "Cancel", nullptr));
        forgotPasswordResetButton->setText(QApplication::translate("forgotPassword", "Reset", nullptr));
        Header->setTitle(QString());
        label_2->setText(QApplication::translate("forgotPassword", "Reset Password", nullptr));
        accountTypegroupBox->setTitle(QApplication::translate("forgotPassword", "Account Type", nullptr));
        lecturerForgotFormLineEdit->setPlaceholderText(QApplication::translate("forgotPassword", "(Enter Username)", nullptr));
        studentAccountTypeRadioButton->setText(QApplication::translate("forgotPassword", "Student", nullptr));
        lecturerAccountTypeRadioButton->setText(QApplication::translate("forgotPassword", "Lecturer", nullptr));
        studentIdForgotFormLineEdit->setPlaceholderText(QApplication::translate("forgotPassword", "(Eter Student ID)", nullptr));
        accountTypegroupBox_2->setTitle(QApplication::translate("forgotPassword", "Security Questions", nullptr));
        QuestionAnswer_forgotFormLineEdit->setPlaceholderText(QApplication::translate("forgotPassword", "(Enter your Answer)", nullptr));
        Question_ForgotForm->setText(QApplication::translate("forgotPassword", "Question:", nullptr));
        securityQuestionsForgotFormcomboBox->setItemText(0, QApplication::translate("forgotPassword", "Select Question", nullptr));

        resetPasswordgroupBox->setTitle(QApplication::translate("forgotPassword", "Reset Password", nullptr));
        newPassword_forgotFormLineEdit->setPlaceholderText(QApplication::translate("forgotPassword", "(Enter new password)", nullptr));
        confirmPassword_forgotFormLineEdit->setPlaceholderText(QApplication::translate("forgotPassword", "( Confirm password)", nullptr));
        accountLostResetButton->setText(QApplication::translate("forgotPassword", "Search Account", nullptr));
        checkAnswerResetButton->setText(QApplication::translate("forgotPassword", "Check My Answer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class forgotPassword: public Ui_forgotPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGOTPASSWORD_H
