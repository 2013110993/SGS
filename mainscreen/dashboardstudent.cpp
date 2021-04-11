#include "dashboardstudent.h"
#include "ui_dashboardstudent.h"

dashboardStudent::dashboardStudent(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dashboardStudent)
{
    ui->setupUi(this);
}

dashboardStudent::~dashboardStudent()
{
    delete ui;
}
