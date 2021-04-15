#include "dashboard.h"
#include "ui_dashboard.h"
#include <QDebug>
#include "databaseconnection.h"
#include "register.h"
#include "sgsapp.h"

//databaseconnection * database;
 sgsApp * sgs;
Dashboard::Dashboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dashboard)
{
    ui->setupUi(this);

}

Dashboard::~Dashboard()
{
    delete ui;
    //delete database;
   //delete  sgs;

}

QLabel * Dashboard::getUserLabel()
{
    return ui->userLabel;

}

void Dashboard::on_logout_pushButton_clicked()
{
    qDebug()<<"testing";
    sgs  = new sgsApp;// needs debugging
    connect(this, SIGNAL(userLogOut()),
            sgs, SLOT(logout()));

    emit userLogOut();
     qDebug()<<"testing";
     this->close();
   // dataconfig->logoutUser(this);

}

void Dashboard::on_dashboard_pushButton_2_clicked()
{
    Register * registerNewStudent = new Register;
    //Modal approach
    registerNewStudent->setModal(true);
    registerNewStudent->show();
}


void Dashboard::on_suspendAccount_pushButton_clicked()
{

}

void Dashboard::on_resetPasswd_pushButton_clicked()
{

}



