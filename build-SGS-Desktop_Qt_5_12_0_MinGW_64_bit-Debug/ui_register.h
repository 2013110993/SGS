/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QGroupBox *Header;
    QLabel *label;
    QStackedWidget *stackedWidgetRegister;
    QWidget *personInfo;
    QGroupBox *userInfogroupBox_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *firstQuestion_RegForm;
    QComboBox *comboBox;
    QLineEdit *firtstQuestionAnswer_RegFormLineEdit;
    QLabel *secondQuestion_RegForm;
    QComboBox *comboBox_3;
    QLineEdit *secondQuestionAnswer_RegFormLineEdit;
    QLabel *thirdQuestion_RegForm;
    QComboBox *comboBox_2;
    QLineEdit *thirdQuestionAnswer_RegFormLineEdit;
    QGroupBox *userInfogroupBox;
    QWidget *layoutWidget1_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *userName_RegForm;
    QLineEdit *userName_RegFormLineEdit;
    QLabel *password_RegForm;
    QLineEdit *password_RegFormLineEdit;
    QLineEdit *confirmPasswordRegFormLineEdit;
    QLabel *password_RegForm_2;
    QLineEdit *emailRegFormLineEdit;
    QGroupBox *personalInfogroupBox;
    QLabel *firstName_RegForm;
    QLineEdit *firstName_RegFormLineEdit;
    QLineEdit *middleName_RegFormLineEdit;
    QLabel *lastName_RegForm;
    QLineEdit *lastName_RegFormLineEdit;
    QCheckBox *middleNamecheckBox;
    QGroupBox *Footer;
    QWidget *layoutWidget1_6;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *cancelSignUpButton;
    QPushButton *signUpNextButton;
    QGroupBox *accountTypegroupBox;
    QLineEdit *studentIdRegFormLineEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *studentRadioButton;
    QRadioButton *lecturerRadioButton;
    QWidget *academic;
    QGroupBox *academicGroupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *programLabel;
    QComboBox *programComboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *facultyLabel;
    QComboBox *facultyComboBox;
    QGroupBox *groupBoxRegBottom;
    QWidget *layoutWidget11;
    QHBoxLayout *horizontalLayout;
    QPushButton *backSignUpButton;
    QPushButton *signUpButton;
    QTableView *tableView;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(800, 670);
        Register->setMinimumSize(QSize(800, 670));
        Register->setMaximumSize(QSize(800, 670));
        Register->setStyleSheet(QString::fromUtf8("background-color:#ffffff;"));
        Header = new QGroupBox(Register);
        Header->setObjectName(QString::fromUtf8("Header"));
        Header->setGeometry(QRect(0, 0, 800, 60));
        Header->setMinimumSize(QSize(800, 60));
        Header->setMaximumSize(QSize(400, 60));
        Header->setStyleSheet(QString::fromUtf8("background: url(:/images/background.jpg);\n"
"background-position:center;\n"
"background-repeat: no-repeat;"));
        label = new QLabel(Header);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 20, 800, 20));
        label->setMinimumSize(QSize(800, 20));
        label->setMaximumSize(QSize(800, 20));
        QFont font;
        font.setPointSize(19);
        font.setBold(true);
        font.setWeight(62);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font-weight:500;\n"
"color:#ffffff;\n"
"background: none;"));
        label->setAlignment(Qt::AlignCenter);
        stackedWidgetRegister = new QStackedWidget(Register);
        stackedWidgetRegister->setObjectName(QString::fromUtf8("stackedWidgetRegister"));
        stackedWidgetRegister->setGeometry(QRect(-10, 60, 811, 631));
        personInfo = new QWidget();
        personInfo->setObjectName(QString::fromUtf8("personInfo"));
        userInfogroupBox_2 = new QGroupBox(personInfo);
        userInfogroupBox_2->setObjectName(QString::fromUtf8("userInfogroupBox_2"));
        userInfogroupBox_2->setGeometry(QRect(420, 130, 371, 411));
        userInfogroupBox_2->setMinimumSize(QSize(0, 0));
        userInfogroupBox_2->setMaximumSize(QSize(16777215, 16777215));
        userInfogroupBox_2->setStyleSheet(QString::fromUtf8("color:#666;\n"
"background-color:none;"));
        layoutWidget = new QWidget(userInfogroupBox_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 351, 371));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        firstQuestion_RegForm = new QLabel(layoutWidget);
        firstQuestion_RegForm->setObjectName(QString::fromUtf8("firstQuestion_RegForm"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        firstQuestion_RegForm->setFont(font1);
        firstQuestion_RegForm->setStyleSheet(QString::fromUtf8("background-color:none;"));

        verticalLayout->addWidget(firstQuestion_RegForm);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(0, 30));
        comboBox->setMaximumSize(QSize(16777215, 30));
        comboBox->setStyleSheet(QString::fromUtf8("background:#ffffff;\n"
"color:#333;"));

        verticalLayout->addWidget(comboBox);

        firtstQuestionAnswer_RegFormLineEdit = new QLineEdit(layoutWidget);
        firtstQuestionAnswer_RegFormLineEdit->setObjectName(QString::fromUtf8("firtstQuestionAnswer_RegFormLineEdit"));
        firtstQuestionAnswer_RegFormLineEdit->setMinimumSize(QSize(0, 30));
        firtstQuestionAnswer_RegFormLineEdit->setMaximumSize(QSize(16777215, 30));
        firtstQuestionAnswer_RegFormLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;"));

        verticalLayout->addWidget(firtstQuestionAnswer_RegFormLineEdit);

        secondQuestion_RegForm = new QLabel(layoutWidget);
        secondQuestion_RegForm->setObjectName(QString::fromUtf8("secondQuestion_RegForm"));
        secondQuestion_RegForm->setFont(font1);
        secondQuestion_RegForm->setStyleSheet(QString::fromUtf8("background-color:none;"));

        verticalLayout->addWidget(secondQuestion_RegForm);

        comboBox_3 = new QComboBox(layoutWidget);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setMinimumSize(QSize(0, 30));
        comboBox_3->setMaximumSize(QSize(16777215, 30));
        comboBox_3->setStyleSheet(QString::fromUtf8("background:#ffffff;\n"
"color:#333;"));

        verticalLayout->addWidget(comboBox_3);

        secondQuestionAnswer_RegFormLineEdit = new QLineEdit(layoutWidget);
        secondQuestionAnswer_RegFormLineEdit->setObjectName(QString::fromUtf8("secondQuestionAnswer_RegFormLineEdit"));
        secondQuestionAnswer_RegFormLineEdit->setMinimumSize(QSize(0, 30));
        secondQuestionAnswer_RegFormLineEdit->setMaximumSize(QSize(16777215, 30));
        secondQuestionAnswer_RegFormLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;"));

        verticalLayout->addWidget(secondQuestionAnswer_RegFormLineEdit);

        thirdQuestion_RegForm = new QLabel(layoutWidget);
        thirdQuestion_RegForm->setObjectName(QString::fromUtf8("thirdQuestion_RegForm"));
        thirdQuestion_RegForm->setFont(font1);
        thirdQuestion_RegForm->setStyleSheet(QString::fromUtf8("background-color:none;"));

        verticalLayout->addWidget(thirdQuestion_RegForm);

        comboBox_2 = new QComboBox(layoutWidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(0, 30));
        comboBox_2->setMaximumSize(QSize(16777215, 30));
        comboBox_2->setStyleSheet(QString::fromUtf8("background:#ffffff;\n"
"color:#333;"));

        verticalLayout->addWidget(comboBox_2);

        thirdQuestionAnswer_RegFormLineEdit = new QLineEdit(layoutWidget);
        thirdQuestionAnswer_RegFormLineEdit->setObjectName(QString::fromUtf8("thirdQuestionAnswer_RegFormLineEdit"));
        thirdQuestionAnswer_RegFormLineEdit->setMinimumSize(QSize(0, 30));
        thirdQuestionAnswer_RegFormLineEdit->setMaximumSize(QSize(16777215, 30));
        thirdQuestionAnswer_RegFormLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;"));

        verticalLayout->addWidget(thirdQuestionAnswer_RegFormLineEdit);

        userInfogroupBox = new QGroupBox(personInfo);
        userInfogroupBox->setObjectName(QString::fromUtf8("userInfogroupBox"));
        userInfogroupBox->setGeometry(QRect(20, 260, 371, 280));
        userInfogroupBox->setMinimumSize(QSize(371, 280));
        userInfogroupBox->setMaximumSize(QSize(371, 280));
        userInfogroupBox->setStyleSheet(QString::fromUtf8("color:#666;\n"
"background-color:none;"));
        layoutWidget1_3 = new QWidget(userInfogroupBox);
        layoutWidget1_3->setObjectName(QString::fromUtf8("layoutWidget1_3"));
        layoutWidget1_3->setGeometry(QRect(10, 40, 351, 224));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        userName_RegForm = new QLabel(layoutWidget1_3);
        userName_RegForm->setObjectName(QString::fromUtf8("userName_RegForm"));
        userName_RegForm->setFont(font1);
        userName_RegForm->setStyleSheet(QString::fromUtf8("background-color:none;"));

        verticalLayout_2->addWidget(userName_RegForm);

        userName_RegFormLineEdit = new QLineEdit(layoutWidget1_3);
        userName_RegFormLineEdit->setObjectName(QString::fromUtf8("userName_RegFormLineEdit"));
        userName_RegFormLineEdit->setMinimumSize(QSize(0, 30));
        userName_RegFormLineEdit->setMaximumSize(QSize(16777215, 30));
        userName_RegFormLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;"));

        verticalLayout_2->addWidget(userName_RegFormLineEdit);

        password_RegForm = new QLabel(layoutWidget1_3);
        password_RegForm->setObjectName(QString::fromUtf8("password_RegForm"));
        password_RegForm->setFont(font1);
        password_RegForm->setStyleSheet(QString::fromUtf8("background-color:none;"));

        verticalLayout_2->addWidget(password_RegForm);

        password_RegFormLineEdit = new QLineEdit(layoutWidget1_3);
        password_RegFormLineEdit->setObjectName(QString::fromUtf8("password_RegFormLineEdit"));
        password_RegFormLineEdit->setMinimumSize(QSize(0, 30));
        password_RegFormLineEdit->setMaximumSize(QSize(16777215, 30));
        password_RegFormLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;"));
        password_RegFormLineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(password_RegFormLineEdit);

        confirmPasswordRegFormLineEdit = new QLineEdit(layoutWidget1_3);
        confirmPasswordRegFormLineEdit->setObjectName(QString::fromUtf8("confirmPasswordRegFormLineEdit"));
        confirmPasswordRegFormLineEdit->setMinimumSize(QSize(0, 30));
        confirmPasswordRegFormLineEdit->setMaximumSize(QSize(16777215, 30));
        confirmPasswordRegFormLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;"));

        verticalLayout_2->addWidget(confirmPasswordRegFormLineEdit);

        password_RegForm_2 = new QLabel(layoutWidget1_3);
        password_RegForm_2->setObjectName(QString::fromUtf8("password_RegForm_2"));
        password_RegForm_2->setFont(font1);
        password_RegForm_2->setStyleSheet(QString::fromUtf8("background-color:none;"));

        verticalLayout_2->addWidget(password_RegForm_2);

        emailRegFormLineEdit = new QLineEdit(layoutWidget1_3);
        emailRegFormLineEdit->setObjectName(QString::fromUtf8("emailRegFormLineEdit"));
        emailRegFormLineEdit->setEnabled(true);
        emailRegFormLineEdit->setMinimumSize(QSize(0, 30));
        emailRegFormLineEdit->setMaximumSize(QSize(16777215, 30));
        emailRegFormLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;"));

        verticalLayout_2->addWidget(emailRegFormLineEdit);

        personalInfogroupBox = new QGroupBox(personInfo);
        personalInfogroupBox->setObjectName(QString::fromUtf8("personalInfogroupBox"));
        personalInfogroupBox->setGeometry(QRect(20, 10, 371, 241));
        personalInfogroupBox->setMinimumSize(QSize(0, 0));
        personalInfogroupBox->setMaximumSize(QSize(371, 16777215));
        personalInfogroupBox->setStyleSheet(QString::fromUtf8("color:#666;\n"
"background: transparent;\n"
""));
        firstName_RegForm = new QLabel(personalInfogroupBox);
        firstName_RegForm->setObjectName(QString::fromUtf8("firstName_RegForm"));
        firstName_RegForm->setGeometry(QRect(11, 42, 75, 16));
        firstName_RegForm->setFont(font1);
        firstName_RegForm->setStyleSheet(QString::fromUtf8("background-color:none;"));
        firstName_RegFormLineEdit = new QLineEdit(personalInfogroupBox);
        firstName_RegFormLineEdit->setObjectName(QString::fromUtf8("firstName_RegFormLineEdit"));
        firstName_RegFormLineEdit->setGeometry(QRect(11, 66, 341, 30));
        firstName_RegFormLineEdit->setMinimumSize(QSize(0, 30));
        firstName_RegFormLineEdit->setMaximumSize(QSize(16777215, 30));
        firstName_RegFormLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;"));
        middleName_RegFormLineEdit = new QLineEdit(personalInfogroupBox);
        middleName_RegFormLineEdit->setObjectName(QString::fromUtf8("middleName_RegFormLineEdit"));
        middleName_RegFormLineEdit->setEnabled(true);
        middleName_RegFormLineEdit->setGeometry(QRect(11, 139, 341, 30));
        middleName_RegFormLineEdit->setMinimumSize(QSize(0, 30));
        middleName_RegFormLineEdit->setMaximumSize(QSize(16777215, 30));
        middleName_RegFormLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;"));
        lastName_RegForm = new QLabel(personalInfogroupBox);
        lastName_RegForm->setObjectName(QString::fromUtf8("lastName_RegForm"));
        lastName_RegForm->setGeometry(QRect(11, 179, 72, 16));
        lastName_RegForm->setFont(font1);
        lastName_RegForm->setStyleSheet(QString::fromUtf8("background-color:none;"));
        lastName_RegFormLineEdit = new QLineEdit(personalInfogroupBox);
        lastName_RegFormLineEdit->setObjectName(QString::fromUtf8("lastName_RegFormLineEdit"));
        lastName_RegFormLineEdit->setGeometry(QRect(11, 203, 341, 30));
        lastName_RegFormLineEdit->setMinimumSize(QSize(0, 30));
        lastName_RegFormLineEdit->setMaximumSize(QSize(16777215, 30));
        lastName_RegFormLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;"));
        middleNamecheckBox = new QCheckBox(personalInfogroupBox);
        middleNamecheckBox->setObjectName(QString::fromUtf8("middleNamecheckBox"));
        middleNamecheckBox->setGeometry(QRect(10, 110, 111, 20));
        middleNamecheckBox->setFont(font1);
        Footer = new QGroupBox(personInfo);
        Footer->setObjectName(QString::fromUtf8("Footer"));
        Footer->setGeometry(QRect(10, 550, 800, 60));
        Footer->setMinimumSize(QSize(800, 60));
        Footer->setMaximumSize(QSize(800, 60));
        Footer->setStyleSheet(QString::fromUtf8("background:#3a444c;"));
        layoutWidget1_6 = new QWidget(Footer);
        layoutWidget1_6->setObjectName(QString::fromUtf8("layoutWidget1_6"));
        layoutWidget1_6->setGeometry(QRect(220, 10, 251, 42));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1_6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        cancelSignUpButton = new QPushButton(layoutWidget1_6);
        cancelSignUpButton->setObjectName(QString::fromUtf8("cancelSignUpButton"));
        cancelSignUpButton->setStyleSheet(QString::fromUtf8("color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));

        horizontalLayout_3->addWidget(cancelSignUpButton);

        signUpNextButton = new QPushButton(layoutWidget1_6);
        signUpNextButton->setObjectName(QString::fromUtf8("signUpNextButton"));
        signUpNextButton->setStyleSheet(QString::fromUtf8("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/userAdd.png"), QSize(), QIcon::Normal, QIcon::Off);
        signUpNextButton->setIcon(icon);
        signUpNextButton->setAutoDefault(false);

        horizontalLayout_3->addWidget(signUpNextButton);

        accountTypegroupBox = new QGroupBox(personInfo);
        accountTypegroupBox->setObjectName(QString::fromUtf8("accountTypegroupBox"));
        accountTypegroupBox->setGeometry(QRect(420, 10, 371, 101));
        accountTypegroupBox->setMinimumSize(QSize(0, 0));
        accountTypegroupBox->setMaximumSize(QSize(371, 16777215));
        accountTypegroupBox->setStyleSheet(QString::fromUtf8("color:#666;\n"
"background-color:none;"));
        studentIdRegFormLineEdit = new QLineEdit(accountTypegroupBox);
        studentIdRegFormLineEdit->setObjectName(QString::fromUtf8("studentIdRegFormLineEdit"));
        studentIdRegFormLineEdit->setEnabled(true);
        studentIdRegFormLineEdit->setGeometry(QRect(20, 60, 341, 30));
        studentIdRegFormLineEdit->setMinimumSize(QSize(0, 30));
        studentIdRegFormLineEdit->setMaximumSize(QSize(16777215, 30));
        studentIdRegFormLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;"));
        layoutWidget1 = new QWidget(accountTypegroupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 30, 161, 20));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        studentRadioButton = new QRadioButton(layoutWidget1);
        studentRadioButton->setObjectName(QString::fromUtf8("studentRadioButton"));

        horizontalLayout_4->addWidget(studentRadioButton);

        lecturerRadioButton = new QRadioButton(layoutWidget1);
        lecturerRadioButton->setObjectName(QString::fromUtf8("lecturerRadioButton"));

        horizontalLayout_4->addWidget(lecturerRadioButton);

        stackedWidgetRegister->addWidget(personInfo);
        academic = new QWidget();
        academic->setObjectName(QString::fromUtf8("academic"));
        academicGroupBox = new QGroupBox(academic);
        academicGroupBox->setObjectName(QString::fromUtf8("academicGroupBox"));
        academicGroupBox->setGeometry(QRect(30, 30, 231, 123));
        academicGroupBox->setMinimumSize(QSize(0, 0));
        academicGroupBox->setMaximumSize(QSize(371, 200));
        academicGroupBox->setStyleSheet(QString::fromUtf8("color:#666;\n"
"background-color:none;"));
        verticalLayout_3 = new QVBoxLayout(academicGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        programLabel = new QLabel(academicGroupBox);
        programLabel->setObjectName(QString::fromUtf8("programLabel"));
        programLabel->setFont(font1);
        programLabel->setStyleSheet(QString::fromUtf8("background-color:none;"));

        horizontalLayout_5->addWidget(programLabel);

        programComboBox = new QComboBox(academicGroupBox);
        programComboBox->addItem(QString());
        programComboBox->addItem(QString());
        programComboBox->addItem(QString());
        programComboBox->setObjectName(QString::fromUtf8("programComboBox"));

        horizontalLayout_5->addWidget(programComboBox);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        facultyLabel = new QLabel(academicGroupBox);
        facultyLabel->setObjectName(QString::fromUtf8("facultyLabel"));
        facultyLabel->setFont(font1);
        facultyLabel->setStyleSheet(QString::fromUtf8("background-color:none;"));

        horizontalLayout_2->addWidget(facultyLabel);

        facultyComboBox = new QComboBox(academicGroupBox);
        facultyComboBox->addItem(QString());
        facultyComboBox->setObjectName(QString::fromUtf8("facultyComboBox"));

        horizontalLayout_2->addWidget(facultyComboBox);


        verticalLayout_3->addLayout(horizontalLayout_2);

        groupBoxRegBottom = new QGroupBox(academic);
        groupBoxRegBottom->setObjectName(QString::fromUtf8("groupBoxRegBottom"));
        groupBoxRegBottom->setGeometry(QRect(10, 550, 800, 60));
        groupBoxRegBottom->setMinimumSize(QSize(800, 60));
        groupBoxRegBottom->setMaximumSize(QSize(800, 60));
        groupBoxRegBottom->setStyleSheet(QString::fromUtf8("background:#3a444c;"));
        layoutWidget11 = new QWidget(groupBoxRegBottom);
        layoutWidget11->setObjectName(QString::fromUtf8("layoutWidget11"));
        layoutWidget11->setGeometry(QRect(220, 10, 251, 42));
        horizontalLayout = new QHBoxLayout(layoutWidget11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        backSignUpButton = new QPushButton(layoutWidget11);
        backSignUpButton->setObjectName(QString::fromUtf8("backSignUpButton"));
        backSignUpButton->setStyleSheet(QString::fromUtf8("color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));

        horizontalLayout->addWidget(backSignUpButton);

        signUpButton = new QPushButton(layoutWidget11);
        signUpButton->setObjectName(QString::fromUtf8("signUpButton"));
        signUpButton->setStyleSheet(QString::fromUtf8("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        signUpButton->setIcon(icon);
        signUpButton->setAutoDefault(false);

        horizontalLayout->addWidget(signUpButton);

        tableView = new QTableView(academic);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(320, 20, 461, 501));
        stackedWidgetRegister->addWidget(academic);

        retranslateUi(Register);

        stackedWidgetRegister->setCurrentIndex(0);
        signUpNextButton->setDefault(false);
        signUpButton->setDefault(false);


        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Sign Up", nullptr));
        Header->setTitle(QString());
        label->setText(QApplication::translate("Register", "Create your account", nullptr));
        userInfogroupBox_2->setTitle(QApplication::translate("Register", "Security Questions", nullptr));
        firstQuestion_RegForm->setText(QApplication::translate("Register", "Question 1:", nullptr));
        comboBox->setItemText(0, QApplication::translate("Register", "Select Question", nullptr));
        comboBox->setItemText(1, QApplication::translate("Register", "Question one here DEMO", nullptr));
        comboBox->setItemText(2, QApplication::translate("Register", "Question two here DEMO", nullptr));
        comboBox->setItemText(3, QApplication::translate("Register", "Question three here DEMO", nullptr));
        comboBox->setItemText(4, QApplication::translate("Register", "Question four here DEMO", nullptr));
        comboBox->setItemText(5, QApplication::translate("Register", "Question five here DEMO", nullptr));

        secondQuestion_RegForm->setText(QApplication::translate("Register", "Question 2:", nullptr));
        comboBox_3->setItemText(0, QApplication::translate("Register", "Select Question", nullptr));
        comboBox_3->setItemText(1, QApplication::translate("Register", "Question one here DEMO", nullptr));
        comboBox_3->setItemText(2, QApplication::translate("Register", "Question two here DEMO", nullptr));
        comboBox_3->setItemText(3, QApplication::translate("Register", "Question three here DEMO", nullptr));
        comboBox_3->setItemText(4, QApplication::translate("Register", "Question four here DEMO", nullptr));
        comboBox_3->setItemText(5, QApplication::translate("Register", "Question five here DEMO", nullptr));

        thirdQuestion_RegForm->setText(QApplication::translate("Register", "Question 3:", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("Register", "Select Question", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("Register", "Question one here DEMO", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("Register", "Question two here DEMO", nullptr));
        comboBox_2->setItemText(3, QApplication::translate("Register", "Question three here DEMO", nullptr));
        comboBox_2->setItemText(4, QApplication::translate("Register", "Question four here DEMO", nullptr));
        comboBox_2->setItemText(5, QApplication::translate("Register", "Question five here DEMO", nullptr));

        userInfogroupBox->setTitle(QApplication::translate("Register", "Account Details", nullptr));
        userName_RegForm->setText(QApplication::translate("Register", "User Name:", nullptr));
        password_RegForm->setText(QApplication::translate("Register", "Password:", nullptr));
        confirmPasswordRegFormLineEdit->setPlaceholderText(QApplication::translate("Register", "(Confirm Password)", nullptr));
        password_RegForm_2->setText(QApplication::translate("Register", "E-mail:", nullptr));
        emailRegFormLineEdit->setPlaceholderText(QApplication::translate("Register", "(Email Recovery)", nullptr));
        personalInfogroupBox->setTitle(QApplication::translate("Register", "Personal Info", nullptr));
        firstName_RegForm->setText(QApplication::translate("Register", "First Name:", nullptr));
        middleName_RegFormLineEdit->setPlaceholderText(QApplication::translate("Register", "(Optional)", nullptr));
        lastName_RegForm->setText(QApplication::translate("Register", "Last Name:", nullptr));
        middleNamecheckBox->setText(QApplication::translate("Register", "Middle Name", nullptr));
        Footer->setTitle(QString());
        cancelSignUpButton->setText(QApplication::translate("Register", "Sign instead", nullptr));
        signUpNextButton->setText(QApplication::translate("Register", "Next", nullptr));
        accountTypegroupBox->setTitle(QApplication::translate("Register", "Academics Type", nullptr));
        studentIdRegFormLineEdit->setPlaceholderText(QApplication::translate("Register", "(Student ID)", nullptr));
        studentRadioButton->setText(QApplication::translate("Register", "Student", nullptr));
        lecturerRadioButton->setText(QApplication::translate("Register", "Lecturer", nullptr));
        academicGroupBox->setTitle(QApplication::translate("Register", "Academic Info", nullptr));
        programLabel->setText(QApplication::translate("Register", "Program:", nullptr));
        programComboBox->setItemText(0, QApplication::translate("Register", "Select program", nullptr));
        programComboBox->setItemText(1, QApplication::translate("Register", "Associates", nullptr));
        programComboBox->setItemText(2, QApplication::translate("Register", "Bachelors", nullptr));

        facultyLabel->setText(QApplication::translate("Register", "Faculty:", nullptr));
        facultyComboBox->setItemText(0, QApplication::translate("Register", "Select Faculty", nullptr));

        groupBoxRegBottom->setTitle(QString());
        backSignUpButton->setText(QApplication::translate("Register", "Back", nullptr));
        signUpButton->setText(QApplication::translate("Register", "  Create", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
