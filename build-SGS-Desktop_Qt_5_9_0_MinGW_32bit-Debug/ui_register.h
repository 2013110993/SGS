/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *facultyLabel;
    QComboBox *facultyComboBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *programLabel;
    QComboBox *programComboBox;
    QPushButton *filterSearchButton;
    QTableView *tableView;
    QGroupBox *groupBoxRegBottom;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *backSignUpButton;
    QPushButton *signUpButton;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(803, 714);
        Register->setMinimumSize(QSize(0, 0));
        Register->setMaximumSize(QSize(16777215, 16777215));
        Register->setStyleSheet(QStringLiteral("background-color:#ffffff;"));
        Header = new QGroupBox(Register);
        Header->setObjectName(QStringLiteral("Header"));
        Header->setGeometry(QRect(0, 0, 800, 60));
        Header->setMinimumSize(QSize(800, 60));
        Header->setMaximumSize(QSize(400, 60));
        Header->setStyleSheet(QLatin1String("background: url(:/images/background.jpg);\n"
"background-position:center;\n"
"background-repeat: no-repeat;"));
        label = new QLabel(Header);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 20, 800, 20));
        label->setMinimumSize(QSize(800, 20));
        label->setMaximumSize(QSize(800, 20));
        QFont font;
        font.setBold(true);
        font.setWeight(62);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("font-weight:500;\n"
"color:#ffffff;\n"
"background: none;"));
        label->setAlignment(Qt::AlignCenter);
        stackedWidgetRegister = new QStackedWidget(Register);
        stackedWidgetRegister->setObjectName(QStringLiteral("stackedWidgetRegister"));
        stackedWidgetRegister->setGeometry(QRect(10, 60, 811, 661));
        personInfo = new QWidget();
        personInfo->setObjectName(QStringLiteral("personInfo"));
        userInfogroupBox_2 = new QGroupBox(personInfo);
        userInfogroupBox_2->setObjectName(QStringLiteral("userInfogroupBox_2"));
        userInfogroupBox_2->setGeometry(QRect(410, 150, 371, 430));
        userInfogroupBox_2->setMinimumSize(QSize(371, 430));
        userInfogroupBox_2->setMaximumSize(QSize(371, 430));
        userInfogroupBox_2->setStyleSheet(QLatin1String("color:#666;\n"
"background-color:none;"));
        layoutWidget_5 = new QWidget(userInfogroupBox_2);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(20, 30, 331, 391));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        firstQuestion_RegForm_3 = new QLabel(layoutWidget_5);
        firstQuestion_RegForm_3->setObjectName(QStringLiteral("firstQuestion_RegForm_3"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        firstQuestion_RegForm_3->setFont(font1);
        firstQuestion_RegForm_3->setStyleSheet(QStringLiteral("background-color:none;"));

        verticalLayout_4->addWidget(firstQuestion_RegForm_3);

        question_1_comboBox = new QComboBox(layoutWidget_5);
        question_1_comboBox->setObjectName(QStringLiteral("question_1_comboBox"));
        question_1_comboBox->setMinimumSize(QSize(0, 30));
        question_1_comboBox->setMaximumSize(QSize(16777215, 30));
        question_1_comboBox->setStyleSheet(QLatin1String("background:#ffffff;\n"
"color:#333;"));

        verticalLayout_4->addWidget(question_1_comboBox);

        firtstQuestionAnswer_RegFormLineEdit = new QLineEdit(layoutWidget_5);
        firtstQuestionAnswer_RegFormLineEdit->setObjectName(QStringLiteral("firtstQuestionAnswer_RegFormLineEdit"));
        firtstQuestionAnswer_RegFormLineEdit->setMinimumSize(QSize(0, 30));
        firtstQuestionAnswer_RegFormLineEdit->setMaximumSize(QSize(16777215, 30));
        firtstQuestionAnswer_RegFormLineEdit->setStyleSheet(QLatin1String("background-color:#ffffff;\n"
"color: #333;"));

        verticalLayout_4->addWidget(firtstQuestionAnswer_RegFormLineEdit);

        secondQuestion_RegForm_3 = new QLabel(layoutWidget_5);
        secondQuestion_RegForm_3->setObjectName(QStringLiteral("secondQuestion_RegForm_3"));
        secondQuestion_RegForm_3->setFont(font1);
        secondQuestion_RegForm_3->setStyleSheet(QStringLiteral("background-color:none;"));

        verticalLayout_4->addWidget(secondQuestion_RegForm_3);

        question_2_comboBox = new QComboBox(layoutWidget_5);
        question_2_comboBox->setObjectName(QStringLiteral("question_2_comboBox"));
        question_2_comboBox->setMinimumSize(QSize(0, 30));
        question_2_comboBox->setMaximumSize(QSize(16777215, 30));
        question_2_comboBox->setStyleSheet(QLatin1String("background:#ffffff;\n"
"color:#333;"));

        verticalLayout_4->addWidget(question_2_comboBox);

        secondQuestionAnswer_RegFormLineEdit = new QLineEdit(layoutWidget_5);
        secondQuestionAnswer_RegFormLineEdit->setObjectName(QStringLiteral("secondQuestionAnswer_RegFormLineEdit"));
        secondQuestionAnswer_RegFormLineEdit->setMinimumSize(QSize(0, 30));
        secondQuestionAnswer_RegFormLineEdit->setMaximumSize(QSize(16777215, 30));
        secondQuestionAnswer_RegFormLineEdit->setStyleSheet(QLatin1String("background-color:#ffffff;\n"
"color: #333;"));

        verticalLayout_4->addWidget(secondQuestionAnswer_RegFormLineEdit);

        thirdQuestion_RegForm_3 = new QLabel(layoutWidget_5);
        thirdQuestion_RegForm_3->setObjectName(QStringLiteral("thirdQuestion_RegForm_3"));
        thirdQuestion_RegForm_3->setFont(font1);
        thirdQuestion_RegForm_3->setStyleSheet(QStringLiteral("background-color:none;"));

        verticalLayout_4->addWidget(thirdQuestion_RegForm_3);

        question_3_comboBox = new QComboBox(layoutWidget_5);
        question_3_comboBox->setObjectName(QStringLiteral("question_3_comboBox"));
        question_3_comboBox->setMinimumSize(QSize(0, 30));
        question_3_comboBox->setMaximumSize(QSize(16777215, 30));
        question_3_comboBox->setStyleSheet(QLatin1String("background:#ffffff;\n"
"color:#333;"));

        verticalLayout_4->addWidget(question_3_comboBox);

        thirdQuestionAnswer_RegFormLineEdit = new QLineEdit(layoutWidget_5);
        thirdQuestionAnswer_RegFormLineEdit->setObjectName(QStringLiteral("thirdQuestionAnswer_RegFormLineEdit"));
        thirdQuestionAnswer_RegFormLineEdit->setMinimumSize(QSize(0, 30));
        thirdQuestionAnswer_RegFormLineEdit->setMaximumSize(QSize(16777215, 30));
        thirdQuestionAnswer_RegFormLineEdit->setStyleSheet(QLatin1String("background-color:#ffffff;\n"
"color: #333;"));

        verticalLayout_4->addWidget(thirdQuestionAnswer_RegFormLineEdit);

        userInfogroupBox = new QGroupBox(personInfo);
        userInfogroupBox->setObjectName(QStringLiteral("userInfogroupBox"));
        userInfogroupBox->setGeometry(QRect(0, 280, 371, 300));
        userInfogroupBox->setMinimumSize(QSize(0, 0));
        userInfogroupBox->setMaximumSize(QSize(371, 300));
        userInfogroupBox->setStyleSheet(QLatin1String("color:#666;\n"
"background-color:none;"));
        layoutWidget1_3 = new QWidget(userInfogroupBox);
        layoutWidget1_3->setObjectName(QStringLiteral("layoutWidget1_3"));
        layoutWidget1_3->setGeometry(QRect(10, 40, 351, 249));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1_3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        userName_RegForm = new QLabel(layoutWidget1_3);
        userName_RegForm->setObjectName(QStringLiteral("userName_RegForm"));
        userName_RegForm->setFont(font1);
        userName_RegForm->setStyleSheet(QStringLiteral("background-color:none;"));

        verticalLayout_2->addWidget(userName_RegForm);

        userName_RegFormLineEdit = new QLineEdit(layoutWidget1_3);
        userName_RegFormLineEdit->setObjectName(QStringLiteral("userName_RegFormLineEdit"));
        userName_RegFormLineEdit->setMinimumSize(QSize(0, 30));
        userName_RegFormLineEdit->setMaximumSize(QSize(16777215, 30));
        userName_RegFormLineEdit->setStyleSheet(QLatin1String("background-color:#ffffff;\n"
"color: #333;"));

        verticalLayout_2->addWidget(userName_RegFormLineEdit);

        password_RegForm = new QLabel(layoutWidget1_3);
        password_RegForm->setObjectName(QStringLiteral("password_RegForm"));
        password_RegForm->setFont(font1);
        password_RegForm->setStyleSheet(QStringLiteral("background-color:none;"));

        verticalLayout_2->addWidget(password_RegForm);

        password_RegFormLineEdit = new QLineEdit(layoutWidget1_3);
        password_RegFormLineEdit->setObjectName(QStringLiteral("password_RegFormLineEdit"));
        password_RegFormLineEdit->setMinimumSize(QSize(0, 30));
        password_RegFormLineEdit->setMaximumSize(QSize(16777215, 30));
        password_RegFormLineEdit->setStyleSheet(QLatin1String("background-color:#ffffff;\n"
"color: #333;"));
        password_RegFormLineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(password_RegFormLineEdit);

        passwordConfirm_RegFormLineEdit = new QLineEdit(layoutWidget1_3);
        passwordConfirm_RegFormLineEdit->setObjectName(QStringLiteral("passwordConfirm_RegFormLineEdit"));
        passwordConfirm_RegFormLineEdit->setMinimumSize(QSize(0, 30));
        passwordConfirm_RegFormLineEdit->setMaximumSize(QSize(16777215, 30));
        passwordConfirm_RegFormLineEdit->setStyleSheet(QLatin1String("background-color:#ffffff;\n"
"color: #333;"));
        passwordConfirm_RegFormLineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(passwordConfirm_RegFormLineEdit);

        email_RegForm = new QLabel(layoutWidget1_3);
        email_RegForm->setObjectName(QStringLiteral("email_RegForm"));
        email_RegForm->setFont(font1);
        email_RegForm->setStyleSheet(QStringLiteral("background-color:none;"));

        verticalLayout_2->addWidget(email_RegForm);

        confirmEmail_RegFormLineEdit_2 = new QLineEdit(layoutWidget1_3);
        confirmEmail_RegFormLineEdit_2->setObjectName(QStringLiteral("confirmEmail_RegFormLineEdit_2"));
        confirmEmail_RegFormLineEdit_2->setMinimumSize(QSize(0, 30));
        confirmEmail_RegFormLineEdit_2->setMaximumSize(QSize(16777215, 30));
        confirmEmail_RegFormLineEdit_2->setStyleSheet(QLatin1String("background-color:#ffffff;\n"
"color: #333;"));

        verticalLayout_2->addWidget(confirmEmail_RegFormLineEdit_2);

        email_RegFormLineEdit = new QLineEdit(layoutWidget1_3);
        email_RegFormLineEdit->setObjectName(QStringLiteral("email_RegFormLineEdit"));
        email_RegFormLineEdit->setMinimumSize(QSize(0, 30));
        email_RegFormLineEdit->setMaximumSize(QSize(16777215, 30));
        email_RegFormLineEdit->setStyleSheet(QLatin1String("background-color:#ffffff;\n"
"color: #333;"));

        verticalLayout_2->addWidget(email_RegFormLineEdit);

        personalInfogroupBox = new QGroupBox(personInfo);
        personalInfogroupBox->setObjectName(QStringLiteral("personalInfogroupBox"));
        personalInfogroupBox->setGeometry(QRect(0, 20, 371, 241));
        personalInfogroupBox->setMinimumSize(QSize(371, 181));
        personalInfogroupBox->setMaximumSize(QSize(16777215, 16777215));
        personalInfogroupBox->setStyleSheet(QLatin1String("color:#666;\n"
"background: transparent;\n"
""));
        firstName_RegForm = new QLabel(personalInfogroupBox);
        firstName_RegForm->setObjectName(QStringLiteral("firstName_RegForm"));
        firstName_RegForm->setGeometry(QRect(11, 42, 75, 16));
        firstName_RegForm->setFont(font1);
        firstName_RegForm->setStyleSheet(QStringLiteral("background-color:none;"));
        firstName_RegFormLineEdit = new QLineEdit(personalInfogroupBox);
        firstName_RegFormLineEdit->setObjectName(QStringLiteral("firstName_RegFormLineEdit"));
        firstName_RegFormLineEdit->setGeometry(QRect(11, 66, 341, 30));
        firstName_RegFormLineEdit->setMinimumSize(QSize(0, 30));
        firstName_RegFormLineEdit->setMaximumSize(QSize(16777215, 30));
        firstName_RegFormLineEdit->setStyleSheet(QLatin1String("background-color:#ffffff;\n"
"color: #333;"));
        middleName_RegFormLineEdit = new QLineEdit(personalInfogroupBox);
        middleName_RegFormLineEdit->setObjectName(QStringLiteral("middleName_RegFormLineEdit"));
        middleName_RegFormLineEdit->setEnabled(true);
        middleName_RegFormLineEdit->setGeometry(QRect(11, 139, 341, 30));
        middleName_RegFormLineEdit->setMinimumSize(QSize(0, 30));
        middleName_RegFormLineEdit->setMaximumSize(QSize(16777215, 30));
        middleName_RegFormLineEdit->setStyleSheet(QLatin1String("background-color:#ffffff;\n"
"color: #333;"));
        lastName_RegForm = new QLabel(personalInfogroupBox);
        lastName_RegForm->setObjectName(QStringLiteral("lastName_RegForm"));
        lastName_RegForm->setGeometry(QRect(11, 179, 72, 16));
        lastName_RegForm->setFont(font1);
        lastName_RegForm->setStyleSheet(QStringLiteral("background-color:none;"));
        lastName_RegFormLineEdit = new QLineEdit(personalInfogroupBox);
        lastName_RegFormLineEdit->setObjectName(QStringLiteral("lastName_RegFormLineEdit"));
        lastName_RegFormLineEdit->setGeometry(QRect(11, 203, 341, 30));
        lastName_RegFormLineEdit->setMinimumSize(QSize(0, 30));
        lastName_RegFormLineEdit->setMaximumSize(QSize(16777215, 30));
        lastName_RegFormLineEdit->setStyleSheet(QLatin1String("background-color:#ffffff;\n"
"color: #333;"));
        middleNamecheckBox = new QCheckBox(personalInfogroupBox);
        middleNamecheckBox->setObjectName(QStringLiteral("middleNamecheckBox"));
        middleNamecheckBox->setGeometry(QRect(10, 110, 111, 20));
        middleNamecheckBox->setFont(font1);
        middleNamecheckBox->setChecked(true);
        accountTypegroupBox = new QGroupBox(personInfo);
        accountTypegroupBox->setObjectName(QStringLiteral("accountTypegroupBox"));
        accountTypegroupBox->setGeometry(QRect(410, 20, 371, 100));
        accountTypegroupBox->setMinimumSize(QSize(0, 100));
        accountTypegroupBox->setMaximumSize(QSize(371, 100));
        accountTypegroupBox->setStyleSheet(QLatin1String("color:#666;\n"
"background-color:none;"));
        studentIdRegFormLineEdit = new QLineEdit(accountTypegroupBox);
        studentIdRegFormLineEdit->setObjectName(QStringLiteral("studentIdRegFormLineEdit"));
        studentIdRegFormLineEdit->setEnabled(true);
        studentIdRegFormLineEdit->setGeometry(QRect(20, 60, 341, 30));
        studentIdRegFormLineEdit->setMinimumSize(QSize(0, 30));
        studentIdRegFormLineEdit->setMaximumSize(QSize(16777215, 30));
        studentIdRegFormLineEdit->setStyleSheet(QLatin1String("background-color:#ffffff;\n"
"color: #333;"));
        layoutWidget = new QWidget(accountTypegroupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 30, 161, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        studentRadioButton = new QRadioButton(layoutWidget);
        studentRadioButton->setObjectName(QStringLiteral("studentRadioButton"));
        studentRadioButton->setChecked(true);

        horizontalLayout_4->addWidget(studentRadioButton);

        lecturerRadioButton = new QRadioButton(layoutWidget);
        lecturerRadioButton->setObjectName(QStringLiteral("lecturerRadioButton"));

        horizontalLayout_4->addWidget(lecturerRadioButton);

        Footer = new QGroupBox(personInfo);
        Footer->setObjectName(QStringLiteral("Footer"));
        Footer->setGeometry(QRect(-10, 600, 800, 60));
        Footer->setMinimumSize(QSize(800, 60));
        Footer->setMaximumSize(QSize(800, 60));
        Footer->setStyleSheet(QStringLiteral("background:#3a444c;"));
        layoutWidget1_6 = new QWidget(Footer);
        layoutWidget1_6->setObjectName(QStringLiteral("layoutWidget1_6"));
        layoutWidget1_6->setGeometry(QRect(220, 10, 251, 42));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1_6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        cancelSignUpButton = new QPushButton(layoutWidget1_6);
        cancelSignUpButton->setObjectName(QStringLiteral("cancelSignUpButton"));
        cancelSignUpButton->setStyleSheet(QLatin1String("color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons White/Icons/White/Passsword.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelSignUpButton->setIcon(icon);

        horizontalLayout_3->addWidget(cancelSignUpButton);

        signUpNextButton = new QPushButton(layoutWidget1_6);
        signUpNextButton->setObjectName(QStringLiteral("signUpNextButton"));
        signUpNextButton->setStyleSheet(QLatin1String("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons White/Icons/White/Double Arrow RIGHT.png"), QSize(), QIcon::Normal, QIcon::Off);
        signUpNextButton->setIcon(icon1);
        signUpNextButton->setAutoDefault(false);

        horizontalLayout_3->addWidget(signUpNextButton);

        stackedWidgetRegister->addWidget(personInfo);
        academic = new QWidget();
        academic->setObjectName(QStringLiteral("academic"));
        academicGroupBox = new QGroupBox(academic);
        academicGroupBox->setObjectName(QStringLiteral("academicGroupBox"));
        academicGroupBox->setGeometry(QRect(0, 10, 771, 63));
        academicGroupBox->setMinimumSize(QSize(0, 0));
        academicGroupBox->setMaximumSize(QSize(16777215, 16777215));
        academicGroupBox->setStyleSheet(QLatin1String("color:#666;\n"
"background:#f1f1f1;"));
        horizontalLayout_6 = new QHBoxLayout(academicGroupBox);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        facultyLabel = new QLabel(academicGroupBox);
        facultyLabel->setObjectName(QStringLiteral("facultyLabel"));
        facultyLabel->setFont(font1);
        facultyLabel->setStyleSheet(QStringLiteral("background-color:none;"));
        facultyLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(facultyLabel);

        facultyComboBox = new QComboBox(academicGroupBox);
        facultyComboBox->setObjectName(QStringLiteral("facultyComboBox"));

        horizontalLayout_2->addWidget(facultyComboBox);


        horizontalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        programLabel = new QLabel(academicGroupBox);
        programLabel->setObjectName(QStringLiteral("programLabel"));
        programLabel->setFont(font1);
        programLabel->setStyleSheet(QStringLiteral("background-color:none;"));
        programLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(programLabel);

        programComboBox = new QComboBox(academicGroupBox);
        programComboBox->setObjectName(QStringLiteral("programComboBox"));

        horizontalLayout_5->addWidget(programComboBox);


        horizontalLayout_6->addLayout(horizontalLayout_5);

        filterSearchButton = new QPushButton(academicGroupBox);
        filterSearchButton->setObjectName(QStringLiteral("filterSearchButton"));
        filterSearchButton->setStyleSheet(QLatin1String("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons White/Icons/White/Search.png"), QSize(), QIcon::Normal, QIcon::Off);
        filterSearchButton->setIcon(icon2);
        filterSearchButton->setAutoDefault(false);

        horizontalLayout_6->addWidget(filterSearchButton);

        tableView = new QTableView(academic);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 80, 771, 511));
        groupBoxRegBottom = new QGroupBox(academic);
        groupBoxRegBottom->setObjectName(QStringLiteral("groupBoxRegBottom"));
        groupBoxRegBottom->setGeometry(QRect(-10, 590, 800, 60));
        groupBoxRegBottom->setMinimumSize(QSize(800, 60));
        groupBoxRegBottom->setMaximumSize(QSize(800, 60));
        groupBoxRegBottom->setStyleSheet(QStringLiteral("background:#3a444c;"));
        layoutWidget1 = new QWidget(groupBoxRegBottom);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(220, 10, 251, 42));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        backSignUpButton = new QPushButton(layoutWidget1);
        backSignUpButton->setObjectName(QStringLiteral("backSignUpButton"));
        backSignUpButton->setStyleSheet(QLatin1String("color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons White/Icons/White/Single Arrow LEFT.png"), QSize(), QIcon::Normal, QIcon::Off);
        backSignUpButton->setIcon(icon3);

        horizontalLayout->addWidget(backSignUpButton);

        signUpButton = new QPushButton(layoutWidget1);
        signUpButton->setObjectName(QStringLiteral("signUpButton"));
        signUpButton->setStyleSheet(QLatin1String("background:#fbaf01;\n"
"color: #ffffff;\n"
"border:0;\n"
"height:30px;\n"
"border-radius:5px;"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons White/Icons/White/Add User.png"), QSize(), QIcon::Normal, QIcon::Off);
        signUpButton->setIcon(icon4);
        signUpButton->setAutoDefault(false);

        horizontalLayout->addWidget(signUpButton);

        stackedWidgetRegister->addWidget(academic);

        retranslateUi(Register);

        stackedWidgetRegister->setCurrentIndex(0);
        signUpNextButton->setDefault(false);
        filterSearchButton->setDefault(false);
        signUpButton->setDefault(false);


        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Sign Up", Q_NULLPTR));
        Header->setTitle(QString());
        label->setText(QApplication::translate("Register", "Create your account", Q_NULLPTR));
        userInfogroupBox_2->setTitle(QApplication::translate("Register", "Security Questions", Q_NULLPTR));
        firstQuestion_RegForm_3->setText(QApplication::translate("Register", "Question 1:", Q_NULLPTR));
        question_1_comboBox->clear();
        question_1_comboBox->insertItems(0, QStringList()
         << QApplication::translate("Register", "Select Question", Q_NULLPTR)
        );
        firtstQuestionAnswer_RegFormLineEdit->setPlaceholderText(QApplication::translate("Register", "Answer for Question 1", Q_NULLPTR));
        secondQuestion_RegForm_3->setText(QApplication::translate("Register", "Question 2:", Q_NULLPTR));
        question_2_comboBox->clear();
        question_2_comboBox->insertItems(0, QStringList()
         << QApplication::translate("Register", "Select Question", Q_NULLPTR)
        );
        secondQuestionAnswer_RegFormLineEdit->setPlaceholderText(QApplication::translate("Register", "Answer for Question 2", Q_NULLPTR));
        thirdQuestion_RegForm_3->setText(QApplication::translate("Register", "Question 3:", Q_NULLPTR));
        question_3_comboBox->clear();
        question_3_comboBox->insertItems(0, QStringList()
         << QApplication::translate("Register", "Select Question", Q_NULLPTR)
        );
        thirdQuestionAnswer_RegFormLineEdit->setPlaceholderText(QApplication::translate("Register", "Answer for Question 3", Q_NULLPTR));
        userInfogroupBox->setTitle(QApplication::translate("Register", "Account Details", Q_NULLPTR));
        userName_RegForm->setText(QApplication::translate("Register", "User Name:", Q_NULLPTR));
        password_RegForm->setText(QApplication::translate("Register", "Password:", Q_NULLPTR));
        passwordConfirm_RegFormLineEdit->setPlaceholderText(QApplication::translate("Register", "Confirm Password", Q_NULLPTR));
        email_RegForm->setText(QApplication::translate("Register", "Email:", Q_NULLPTR));
        confirmEmail_RegFormLineEdit_2->setPlaceholderText(QString());
        email_RegFormLineEdit->setPlaceholderText(QApplication::translate("Register", "Confirm Email", Q_NULLPTR));
        personalInfogroupBox->setTitle(QApplication::translate("Register", "Personal Info", Q_NULLPTR));
        firstName_RegForm->setText(QApplication::translate("Register", "First Name:", Q_NULLPTR));
        middleName_RegFormLineEdit->setPlaceholderText(QApplication::translate("Register", "(Optional)", Q_NULLPTR));
        lastName_RegForm->setText(QApplication::translate("Register", "Last Name:", Q_NULLPTR));
        middleNamecheckBox->setText(QApplication::translate("Register", "Middle Name", Q_NULLPTR));
        accountTypegroupBox->setTitle(QApplication::translate("Register", "Academics Type", Q_NULLPTR));
        studentIdRegFormLineEdit->setPlaceholderText(QApplication::translate("Register", "Enter Student ID", Q_NULLPTR));
        studentRadioButton->setText(QApplication::translate("Register", "Student", Q_NULLPTR));
        lecturerRadioButton->setText(QApplication::translate("Register", "Lecturer", Q_NULLPTR));
        Footer->setTitle(QString());
        cancelSignUpButton->setText(QApplication::translate("Register", "Sign instead", Q_NULLPTR));
        signUpNextButton->setText(QApplication::translate("Register", "Next", Q_NULLPTR));
        academicGroupBox->setTitle(QApplication::translate("Register", "Academic Info", Q_NULLPTR));
        facultyLabel->setText(QApplication::translate("Register", "Faculty:", Q_NULLPTR));
        facultyComboBox->clear();
        facultyComboBox->insertItems(0, QStringList()
         << QApplication::translate("Register", "Select Faculty", Q_NULLPTR)
        );
        programLabel->setText(QApplication::translate("Register", "Program:", Q_NULLPTR));
        programComboBox->clear();
        programComboBox->insertItems(0, QStringList()
         << QApplication::translate("Register", "Select program", Q_NULLPTR)
         << QApplication::translate("Register", "Associates", Q_NULLPTR)
         << QApplication::translate("Register", "Bachelors", Q_NULLPTR)
        );
        filterSearchButton->setText(QApplication::translate("Register", "Filter Search", Q_NULLPTR));
        groupBoxRegBottom->setTitle(QString());
        backSignUpButton->setText(QApplication::translate("Register", "Back", Q_NULLPTR));
        signUpButton->setText(QApplication::translate("Register", "  Create", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
