#include "sgsapp.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    sgsApp login;
    login.show();
    return a.exec();
}
