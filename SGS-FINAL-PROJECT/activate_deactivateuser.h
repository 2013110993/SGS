#ifndef ACTIVATE_DEACTIVATEUSER_H
#define ACTIVATE_DEACTIVATEUSER_H
#include "databaseconnection.h"
#include <QDialog>

namespace Ui {
class Activate_DeactivateUser;
}

class Activate_DeactivateUser : public QDialog
{
    Q_OBJECT

public:
    explicit Activate_DeactivateUser(QWidget *parent = nullptr);

    void ActivateDeactivateUserAccount(databaseconnection *); //friend function with sgsapp class

    ~Activate_DeactivateUser();

private slots:
    void on_accountLostResetButton_clicked();

    void on_lectureSearchButton_clicked();

    void on_activateResetButton_clicked();

    void on_disactivateResetButton_clicked();

private:
    Ui::Activate_DeactivateUser *ui;
    databaseconnection *databaseExtern;
};

#endif // ACTIVATE_DEACTIVATEUSER_H
