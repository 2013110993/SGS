#include "databaseconnection.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    databaseconnection w;
    w.show();

    return a.exec();
}
