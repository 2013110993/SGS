#include "dashboardstudent.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    dashboardStudent w;
    w.show();

    return a.exec();
}
