#include "sgsapp.h"
#include <QTranslator>
#include <QApplication>
databaseconnection * connection;

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

//    QTranslator translator;
//    translator.load(":/language_es.qm");
//    a.installTranslator(&translator);

    connection = new databaseconnection;
    connection->connect();
    sgsApp login;
    login.show();
    return a.exec();
}

