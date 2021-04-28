/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
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
#include <QtWidgets/QTableWidget>
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
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *firstQuestion_RegForm_3;
    QComboBox *question_1_comboBox;
    QLineEdit *firtstQuestionAnswer_RegFormLineEdit;
    QLabel *secondQuestion_RegForm_3;
    QComboBox *question_2_comboBox;
    QLineEdit *secondQuestionAnswer_RegFormLineEdit;
    QLabel *thirdQuestion_RegForm_3;
    QComboBox *question_3_comboBox;
    QLineEdit *thirdQuestionAnswer_RegFormLineEdit;
    QGroupBox *userInfogroupBox;
    QWidget *layoutWidget1_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *userName_RegForm;
    QLineEdit *userName_RegFormLineEdit;
    QLabel *password_RegForm;
    QLineEdit *password_RegFormLineEdit;
    QLineEdit *passwordConfirm_RegFormLineEdit;
    QLabel *email_RegForm;
    QLineEdit *confirmEmail_RegFormLineEdit_2;
    QLineEdit *email_RegFormLineEdit;
    QGroupBox *personalInfogroupBox;
    QLabel *firstName_RegForm;
    QLineEdit *firstName_RegFormLineEdit;
    QLineEdit *middleName_RegFormLineEdit;
    QLabel *lastName_RegForm;
    QLineEdit *lastName_RegFormLineEdit;
    QCheckBox *middleNamecheckBox;
    QGroupBox *accountTypegroupBox;
    QLineEdit *studentIdRegFormLineEdit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *studentRadioButton;
    QRadioButton *lecturerRadioButton;
    QGroupBox *Footer;
    QWidget *layoutWidget1_6;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *cancelSignUpButton;
    QPushButton *signUpNextButton;
    QWidget *academic;
    QGroupBox *academicGroupBox;
    QPushButton *filterSearchButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *facultyLabel;
    QComboBox *facultyComboBox;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *programLabel;
    QComboBox *programComboBox;
    QGroupBox *groupBoxRegBottom;
    QWidget *layoutWidget11;
    QHBoxLayout *horizontalLayout;
    QPushButton *backSignUpButton;
    QPushButton *signUpButton;
    QTableWidget *programSequenceTable_registerTableWidget;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(803, 714);
        Register->setMinimumSize(QSize(0, 0));
        Register->setMaximumSize(QSize(16777215, 16777215));
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
        font.setBold(true);
        font.setWeight(62);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font-weight:500;\n"
"color:#ffffff;\n"
"background: none;"));
        label->setAlignment(Qt::AlignCenter);
        stackedWidgetRegister = new QStackedWidget(Register);
        stackedWidgetRegister->setObjectName(QString::fromUtf8("stackedWidgetRegister"));
        stackedWidgetRegister->setGeometry(QRect(10, 60, 811, 661));
        personInfo = new QWidget();
        personInfo->setObjectName(QString::fromUtf8("personInfo"));
        userInfogroupBox_2 = new QGroupBox(personInfo);
        userInfogroupBox_2->setObjectName(QString::fromUtf8("userInfogroupBox_2"));
        userInfogroupBox_2->setGeometry(QRect(410, 150, 371, 430));
        userInfogroupBox_2->setMinimumSize(QSize(371, 430));
        userInfogroupBox_2->setMaximumSize(QSize(371, 430));
        userInfogroupBox_2->setStyleSheet(QString::fromUtf8("color:#666;\n"
"background-color:none;"));
        layoutWidget_5 = new QWidget(userInfogroupBox_2);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(20, 30, 331, 391));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        firstQuestion_RegForm_3 = new QLabel(layoutWidget_5);
        firstQuestion_RegForm_3->setObjectName(QString::fromUtf8("firstQuestion_RegForm_3"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        firstQuestion_RegForm_3->setFont(font1);
        firstQuestion_RegForm_3->setStyleSheet(QString::fromUtf8("background-color:none;"));

        verticalLayout_4->addWidget(firstQuestion_RegForm_3);

        question_1_comboBox = new QComboBox(layoutWidget_5);
        question_1_comboBox->addItem(QString());
        question_1_comboBox->setObjectName(QString::fromUtf8("question_1_comboBox"));
        question_1_comboBox->setMinimumSize(QSize(0, 30));
        question_1_comboBox->setMaximumSize(QSize(16777215, 30));
        question_1_comboBox->setStyleSheet(QString::fromUtf8("background:#ffffff;\n"
"color:#333;"));

        verticalLayout_4->addWidget(question_1_comboBox);

        firtstQuestionAnswer_RegFormLineEdit = new QLineEdit(layoutWidget_5);
        firtstQuestionAnswer_RegFormLineEdit->setObjectName(QString::fromUtf8("firtstQuestionAnswer_RegFormLineEdit"));
        firtstQuestionAnswer_RegFormLineEdit->setMinimumSize(QSize(0, 30));
        firtstQuestionAnswer_RegFormLineEdit->setMaximumSize(QSize(16777215, 30));
        firtstQuestionAnswer_RegFormLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;"));

        verticalLayout_4->addWidget(firtstQuestionAnswer_RegFormLineEdit);

        secondQuestion_RegForm_3 = new QLabel(layoutWidget_5);
        secondQuestion_RegForm_3->setObjectName(QString::fromUtf8("secondQuestion_RegForm_3"));
        secondQuestion_RegForm_3->setFont(font1);
        secondQuestion_RegForm_3->setStyleSheet(QString::fromUtf8("background-color:none;"));

        verticalLayout_4->addWidget(secondQuestion_RegForm_3);

        question_2_comboBox = new QComboBox(layoutWidget_5);
        question_2_comboBox->addItem(QString());
        question_2_comboBox->setObjectName(QString::fromUtf8("question_2_comboBox"));
        question_2_comboBox->setMinimumSize(QSize(0, 30));
        question_2_comboBox->setMaximumSize(QSize(16777215, 30));
        question_2_comboBox->setStyleSheet(QString::fromUtf8("background:#ffffff;\n"
"color:#333;"));

        verticalLayout_4->addWidget(question_2_comboBox);

        secondQuestionAnswer_RegFormLineEdit = new QLineEdit(layoutWidget_5);
        secondQuestionAnswer_RegFormLineEdit->setObjectName(QString::fromUtf8("secondQuestionAnswer_RegFormLineEdit"));
        secondQuestionAnswer_RegFormLineEdit->setMinimumSize(QSize(0, 30));
        secondQuestionAnswer_RegFormLineEdit->setMaximumSize(QSize(16777215, 30));
        secondQuestionAnswer_RegFormLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;"));

        verticalLayout_4->addWidget(secondQuestionAnswer_RegFormLineEdit);

        thirdQuestion_RegForm_3 = new QLabel(layoutWidget_5);
        thirdQuestion_RegForm_3->setObjectName(QString::fromUtf8("thirdQuestion_RegForm_3"));
        thirdQuestion_RegForm_3->setFont(font1);
        thirdQuestion_RegForm_3->setStyleSheet(QString::fromUtf8("background-color:none;"));

        verticalLayout_4->addWidget(thirdQuestion_RegForm_3);

        question_3_comboBox = new QComboBox(layoutWidget_5);
        question_3_comboBox->addItem(QString());
        question_3_comboBox->setObjectName(QString::fromUtf8("question_3_comboBox"));
        question_3_comboBox->setMinimumSize(QSize(0, 30));
        question_3_comboBox->setMaximumSize(QSize(16777215, 30));
        question_3_comboBox->setStyleSheet(QString::fromUtf8("background:#ffffff;\n"
"color:#333;"));

        verticalLayout_4->addWidget(question_3_comboBox);

        thirdQuestionAnswer_RegFormLineEdit = new QLineEdit(layoutWidget_5);
        thirdQuestionAnswer_RegFormLineEdit->setObjectName(QString::fromUtf8("thirdQuestionAnswer_RegFormLineEdit"));
        thirdQuestionAnswer_RegFormLineEdit->setMinimumSize(QSize(0, 30));
        thirdQuestionAnswer_RegFormLineEdit->setMaximumSize(QSize(16777215, 30));
        thirdQuestionAnswer_RegFormLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;"));

        verticalLayout_4->addWidget(thirdQuestionAnswer_RegFormLineEdit);

        userInfogroupBox = new QGroupBox(personInfo);
        userInfogroupBox->setObjectName(QString::fromUtf8("userInfogroupBox"));
        userInfogroupBox->setGeometry(QRect(0, 280, 371, 300));
        userInfogroupBox->setMinimumSize(QSize(0, 0));
        userInfogroupBox->setMaximumSize(QSize(371, 300));
        userInfogroupBox->setStyleSheet(QString::fromUtf8("color:#666;\n"
"background-color:none;"));
        layoutWidget1_3 = new QWidget(userInfogroupBox);
        layoutWidget1_3->setObjectName(QString::fromUtf8("layoutWidget1_3"));
        layoutWidget1_3->setGeometry(QRect(10, 40, 351, 264));
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

        passwordConfirm_RegFormLineEdit = new QLineEdit(layoutWidget1_3);
        passwordConfirm_RegFormLineEdit->setObjectName(QString::fromUtf8("passwordConfirm_RegFormLineEdit"));
        passwordConfirm_RegFormLineEdit->setMinimumSize(QSize(0, 30));
        passwordConfirm_RegFormLineEdit->setMaximumSize(QSize(16777215, 30));
        passwordConfirm_RegFormLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;"));
        passwordConfirm_RegFormLineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(passwordConfirm_RegFormLineEdit);

        email_RegForm = new QLabel(layoutWidget1_3);
        email_RegForm->setObjectName(QString::fromUtf8("email_RegForm"));
        email_RegForm->setFont(font1);
        email_RegForm->setStyleSheet(QString::fromUtf8("background-color:none;"));

        verticalLayout_2->addWidget(email_RegForm);

        confirmEmail_RegFormLineEdit_2 = new QLineEdit(layoutWidget1_3);
        confirmEmail_RegFormLineEdit_2->setObjectName(QString::fromUtf8("confirmEmail_RegFormLineEdit_2"));
        confirmEmail_RegFormLineEdit_2->setMinimumSize(QSize(0, 30));
        confirmEmail_RegFormLineEdit_2->setMaximumSize(QSize(16777215, 30));
        confirmEmail_RegFormLineEdit_2->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;"));

        verticalLayout_2->addWidget(confirmEmail_RegFormLineEdit_2);

        email_RegFormLineEdit = new QLineEdit(layoutWidget1_3);
        email_RegFormLineEdit->setObjectName(QString::fromUtf8("email_RegFormLineEdit"));
        email_RegFormLineEdit->setMinimumSize(QSize(0, 30));
        email_RegFormLineEdit->setMaximumSize(QSize(16777215, 30));
        email_RegFormLineEdit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color: #333;"));

        verticalLayout_2->addWidget(email_RegFormLineEdit);

        personalInfogroupBox = new QGroupBox(personInfo);
        personalInfogroupBox->setObjectName(QString::fromUtf8("personalInfogroupBox"));
        personalInfogroupBox->setGeometry(QRect(0, 20, 371, 241));
        personalInfogroupBox->setMinimumSize(QSize(371, 181));
        personalInfogroupBox->setMaximumSize(QSize(16777215, 16777215));
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
        middleNamecheckBox->setChecked(true);
        accountTypegroupBox = new QGroupBox(personInfo);
        accountTypegroupBox->setObjectName(QString::fromUtf8("accountTypegroupBox"));
        accountTypegroupBox->setGeometry(QRect(410, 20, 371, 100));
        accountTypegroupBox->setMinimumSize(QSize(0, 100));
        accountTypegroupBox->setMaximumSize(QSize(371, 100));
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
        layoutWidget = new QWidget(accountTypegroupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 30, 161, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        studentRadioButton = new QRadioButton(layoutWidget);
        studentRadioButton->setObjectName(QString::fromUtf8("studentRadioButton"));
        studentRadioButton->setChecked(true);

        horizontalLayout_4->addWidget(studentRadioButton);

        lecturerRadioButton = new QRadioButton(layoutWidget);
        lecturerRadioButton->setObjectName(QString::fromUtf8("lecturerRadioButton"));

        horizontalLayout_4->addWidget(lecturerRadioButton);

        Footer = new QGroupBox(personInfo);
        Footer->setObjectName(QString::fromUtf8("Footer"));
        Footer->setGeometry(QRect(-10, 600, 800, 60));
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
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons White/Icons/White/Passsword.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelSignUpButton->setIcon(icon);

        horizontalLayout_3->addWidget(cancelSignUpButton);

        signUpNextButton = new QPushButton(layoutWidget1_6);
        signUpNextButton->setObjectName(QString::fromUtf8("signUpNextButton"));
        signUpNextButton->setStyleSheet(QString::fromUtf8("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons White/Icons/White/Double Arrow RIGHT.png"), QSize(), QIcon::Normal, QIcon::Off);
        signUpNextButton->setIcon(icon1);
        signUpNextButton->setAutoDefault(false);

        horizontalLayout_3->addWidget(signUpNextButton);

        stackedWidgetRegister->addWidget(personInfo);
        academic = new QWidget();
        academic->setObjectName(QString::fromUtf8("academic"));
        academicGroupBox = new QGroupBox(academic);
        academicGroupBox->setObjectName(QString::fromUtf8("academicGroupBox"));
        academicGroupBox->setGeometry(QRect(0, 10, 771, 71));
        academicGroupBox->setMinimumSize(QSize(0, 0));
        academicGroupBox->setMaximumSize(QSize(16777215, 16777215));
        academicGroupBox->setStyleSheet(QString::fromUtf8("color:#666;\n"
"background:#f1f1f1;"));
        filterSearchButton = new QPushButton(academicGroupBox);
        filterSearchButton->setObjectName(QString::fromUtf8("filterSearchButton"));
        filterSearchButton->setGeometry(QRect(511, 29, 251, 26));
        filterSearchButton->setStyleSheet(QString::fromUtf8("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons White/Icons/White/Search.png"), QSize(), QIcon::Normal, QIcon::Off);
        filterSearchButton->setIcon(icon2);
        filterSearchButton->setAutoDefault(false);
        layoutWidget1 = new QWidget(academicGroupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 30, 189, 32));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        facultyLabel = new QLabel(layoutWidget1);
        facultyLabel->setObjectName(QString::fromUtf8("facultyLabel"));
        facultyLabel->setFont(font1);
        facultyLabel->setStyleSheet(QString::fromUtf8("background-color:none;"));
        facultyLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(facultyLabel);

        facultyComboBox = new QComboBox(layoutWidget1);
        facultyComboBox->addItem(QString());
        facultyComboBox->setObjectName(QString::fromUtf8("facultyComboBox"));

        horizontalLayout_2->addWidget(facultyComboBox);

        layoutWidget2 = new QWidget(academicGroupBox);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(270, 30, 201, 32));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        programLabel = new QLabel(layoutWidget2);
        programLabel->setObjectName(QString::fromUtf8("programLabel"));
        programLabel->setFont(font1);
        programLabel->setStyleSheet(QString::fromUtf8("background-color:none;"));
        programLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(programLabel);

        programComboBox = new QComboBox(layoutWidget2);
        programComboBox->addItem(QString());
        programComboBox->addItem(QString());
        programComboBox->addItem(QString());
        programComboBox->setObjectName(QString::fromUtf8("programComboBox"));

        horizontalLayout_5->addWidget(programComboBox);

        groupBoxRegBottom = new QGroupBox(academic);
        groupBoxRegBottom->setObjectName(QString::fromUtf8("groupBoxRegBottom"));
        groupBoxRegBottom->setGeometry(QRect(-10, 590, 800, 60));
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
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons White/Icons/White/Single Arrow LEFT.png"), QSize(), QIcon::Normal, QIcon::Off);
        backSignUpButton->setIcon(icon3);

        horizontalLayout->addWidget(backSignUpButton);

        signUpButton = new QPushButton(layoutWidget11);
        signUpButton->setObjectName(QString::fromUtf8("signUpButton"));
        signUpButton->setStyleSheet(QString::fromUtf8("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons White/Icons/White/Add User.png"), QSize(), QIcon::Normal, QIcon::Off);
        signUpButton->setIcon(icon4);
        signUpButton->setAutoDefault(false);

        horizontalLayout->addWidget(signUpButton);

        programSequenceTable_registerTableWidget = new QTableWidget(academic);
        programSequenceTable_registerTableWidget->setObjectName(QString::fromUtf8("programSequenceTable_registerTableWidget"));
        programSequenceTable_registerTableWidget->setGeometry(QRect(0, 90, 771, 311));
        programSequenceTable_registerTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        stackedWidgetRegister->addWidget(academic);

        retranslateUi(Register);

        stackedWidgetRegister->setCurrentIndex(1);
        signUpNextButton->setDefault(false);
        filterSearchButton->setDefault(false);
        signUpButton->setDefault(false);


        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Sign Up", nullptr));
        Header->setTitle(QString());
        label->setText(QCoreApplication::translate("Register", "Create your account", nullptr));
        userInfogroupBox_2->setTitle(QCoreApplication::translate("Register", "Security Questions", nullptr));
        firstQuestion_RegForm_3->setText(QCoreApplication::translate("Register", "Question 1:", nullptr));
        question_1_comboBox->setItemText(0, QCoreApplication::translate("Register", "Select Question", nullptr));

        firtstQuestionAnswer_RegFormLineEdit->setPlaceholderText(QCoreApplication::translate("Register", "Answer for Question 1", nullptr));
        secondQuestion_RegForm_3->setText(QCoreApplication::translate("Register", "Question 2:", nullptr));
        question_2_comboBox->setItemText(0, QCoreApplication::translate("Register", "Select Question", nullptr));

        secondQuestionAnswer_RegFormLineEdit->setPlaceholderText(QCoreApplication::translate("Register", "Answer for Question 2", nullptr));
        thirdQuestion_RegForm_3->setText(QCoreApplication::translate("Register", "Question 3:", nullptr));
        question_3_comboBox->setItemText(0, QCoreApplication::translate("Register", "Select Question", nullptr));

        thirdQuestionAnswer_RegFormLineEdit->setPlaceholderText(QCoreApplication::translate("Register", "Answer for Question 3", nullptr));
        userInfogroupBox->setTitle(QCoreApplication::translate("Register", "Account Details", nullptr));
        userName_RegForm->setText(QCoreApplication::translate("Register", "User Name:", nullptr));
        password_RegForm->setText(QCoreApplication::translate("Register", "Password:", nullptr));
        passwordConfirm_RegFormLineEdit->setPlaceholderText(QCoreApplication::translate("Register", "Confirm Password", nullptr));
        email_RegForm->setText(QCoreApplication::translate("Register", "Email:", nullptr));
        confirmEmail_RegFormLineEdit_2->setPlaceholderText(QString());
        email_RegFormLineEdit->setPlaceholderText(QCoreApplication::translate("Register", "Confirm Email", nullptr));
        personalInfogroupBox->setTitle(QCoreApplication::translate("Register", "Personal Info", nullptr));
        firstName_RegForm->setText(QCoreApplication::translate("Register", "First Name:", nullptr));
        middleName_RegFormLineEdit->setPlaceholderText(QCoreApplication::translate("Register", "(Optional)", nullptr));
        lastName_RegForm->setText(QCoreApplication::translate("Register", "Last Name:", nullptr));
        middleNamecheckBox->setText(QCoreApplication::translate("Register", "Middle Name", nullptr));
        accountTypegroupBox->setTitle(QCoreApplication::translate("Register", "Academics Type", nullptr));
        studentIdRegFormLineEdit->setPlaceholderText(QCoreApplication::translate("Register", "Enter Student ID", nullptr));
        studentRadioButton->setText(QCoreApplication::translate("Register", "Student", nullptr));
        lecturerRadioButton->setText(QCoreApplication::translate("Register", "Lecturer", nullptr));
        Footer->setTitle(QString());
        cancelSignUpButton->setText(QCoreApplication::translate("Register", "Sign instead", nullptr));
        signUpNextButton->setText(QCoreApplication::translate("Register", "Next", nullptr));
        academicGroupBox->setTitle(QCoreApplication::translate("Register", "Academic Info", nullptr));
        filterSearchButton->setText(QCoreApplication::translate("Register", "Filter Search", nullptr));
        facultyLabel->setText(QCoreApplication::translate("Register", "Faculty:", nullptr));
        facultyComboBox->setItemText(0, QCoreApplication::translate("Register", "Select Faculty", nullptr));

        programLabel->setText(QCoreApplication::translate("Register", "Program:", nullptr));
        programComboBox->setItemText(0, QCoreApplication::translate("Register", "Select program", nullptr));
        programComboBox->setItemText(1, QCoreApplication::translate("Register", "Associates", nullptr));
        programComboBox->setItemText(2, QCoreApplication::translate("Register", "Bachelors", nullptr));

        groupBoxRegBottom->setTitle(QString());
        backSignUpButton->setText(QCoreApplication::translate("Register", "Back", nullptr));
        signUpButton->setText(QCoreApplication::translate("Register", "  Create", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
