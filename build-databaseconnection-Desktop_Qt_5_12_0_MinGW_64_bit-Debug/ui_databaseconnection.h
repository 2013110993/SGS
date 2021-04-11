/********************************************************************************
** Form generated from reading UI file 'databaseconnection.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASECONNECTION_H
#define UI_DATABASECONNECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_databaseconnection
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *databaseconnection)
    {
        if (databaseconnection->objectName().isEmpty())
            databaseconnection->setObjectName(QString::fromUtf8("databaseconnection"));
        databaseconnection->resize(400, 300);
        centralWidget = new QWidget(databaseconnection);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        databaseconnection->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(databaseconnection);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 26));
        databaseconnection->setMenuBar(menuBar);
        mainToolBar = new QToolBar(databaseconnection);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        databaseconnection->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(databaseconnection);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        databaseconnection->setStatusBar(statusBar);

        retranslateUi(databaseconnection);

        QMetaObject::connectSlotsByName(databaseconnection);
    } // setupUi

    void retranslateUi(QMainWindow *databaseconnection)
    {
        databaseconnection->setWindowTitle(QApplication::translate("databaseconnection", "databaseconnection", nullptr));
        pushButton->setText(QApplication::translate("databaseconnection", "DATABASE CONNECT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class databaseconnection: public Ui_databaseconnection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASECONNECTION_H
