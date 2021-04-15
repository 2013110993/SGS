#ifndef DASHBOARDSTUDENT_H
#define DASHBOARDSTUDENT_H

#include <QWidget>

namespace Ui {
class dashboardStudent;
}

class dashboardStudent : public QWidget
{
    Q_OBJECT

public:
    explicit dashboardStudent(QWidget *parent = nullptr);
    ~dashboardStudent();

private:
    Ui::dashboardStudent *ui;
};

#endif // DASHBOARDSTUDENT_H
