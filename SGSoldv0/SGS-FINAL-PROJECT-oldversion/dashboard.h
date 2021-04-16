#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QDialog>

#include <QLabel>
//#include "databaseconnection.h"


namespace Ui {
class Dashboard;
}

class Dashboard : public QDialog
{
    Q_OBJECT

public:
    explicit Dashboard(QWidget *parent = nullptr);
    ~Dashboard();
    QLabel *getUserLabel();
signals:
    void userLogOut();

private slots:
    void on_logout_pushButton_clicked();

    void on_dashboard_pushButton_2_clicked();

    void on_suspendAccount_pushButton_clicked();

    void on_resetPasswd_pushButton_clicked();


private:
    Ui::Dashboard *ui;
  //  databaseconnection * databaseconfig;
};

#endif // DASHBOARD_H
