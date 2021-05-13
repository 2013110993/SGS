#include "sgsapp.h"
#include <QTranslator>
#include <QApplication>
databaseconnection * connection;
QApplication *a;
QTranslator *translator;
int main(int argc, char *argv[])
{



//    QTranslator translator;
//    translator.load(":/language_es.qm");
//    a.installTranslator(&translator);

    a = new QApplication (argc, argv);
    translator = new QTranslator;
    translator->load(":/language_es.qm");
    a->installTranslator(translator);

    connection = new databaseconnection;
    connection->connect();
    sgsApp login;
    login.show();
    return a->exec();
}

