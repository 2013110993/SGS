#include "sgsapp.h"

#include <QApplication>
databaseconnection * connection;

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    connection = new databaseconnection;
    connection->connect();
    sgsApp login;
    login.show();
    return a.exec();
}
