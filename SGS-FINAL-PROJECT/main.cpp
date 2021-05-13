#include "sgsapp.h"
#include <QTranslator>
#include <QApplication>
#include <QMessageBox>
#include <QPushButton>
using namespace std;

databaseconnection * connection;
QApplication *a;
QTranslator *translator;
int main(int argc, char *argv[])
{


    a = new QApplication (argc, argv);
    translator = new QTranslator;
    translator->load(":/language_es.qm");


    QMessageBox messageBox(NULL);
          messageBox.addButton(QObject::tr("English"), QMessageBox::ActionRole);
    QAbstractButton *SpanishButton =
          messageBox.addButton(QObject::tr("Spanish"), QMessageBox::ActionRole);

    messageBox.setWindowIcon(QIcon(QPixmap(":/images/Icon for Taskbar.png")));
    messageBox.setWindowTitle("Select Language:");
    messageBox.setInformativeText("Please choose one of the following languages: ");




    messageBox.exec();
    if (messageBox.clickedButton() == SpanishButton)
    {
         a->installTranslator(translator);
    }



    connection = new databaseconnection;
    connection->connect();
    sgsApp login;
    login.show();
    return a->exec();
}

