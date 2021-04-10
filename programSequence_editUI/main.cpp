#include "faculty.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    faculty w;
    w.show();
    return a.exec();
}
