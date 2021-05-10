#ifndef ACTIVATE_DEACTIVATEUSER_H
#define ACTIVATE_DEACTIVATEUSER_H

#include <QDialog>

namespace Ui {
class Activate_DeactivateUser;
}

class Activate_DeactivateUser : public QDialog
{
    Q_OBJECT

public:
    explicit Activate_DeactivateUser(QWidget *parent = nullptr);
    ~Activate_DeactivateUser();

private slots:
    void on_accountLostResetButton_clicked();

    void on_lectureSearchButton_clicked();

private:
    Ui::Activate_DeactivateUser *ui;
};

#endif // ACTIVATE_DEACTIVATEUSER_H
