#ifndef FORGOTPASSWORD_H
#define FORGOTPASSWORD_H

#include <QDialog>
#include "databaseconnection.h"

namespace Ui {
class forgotPassword;
}

class forgotPassword : public QDialog
{
    Q_OBJECT

public:
    explicit forgotPassword(QWidget *parent = nullptr);
    ~forgotPassword();

private slots:
    void on_forgotPasswordResetButton_clicked();

    void on_forgotPasswordCancelButton_clicked();

    void on_studentAccountTypeRadioButton_clicked();

    void on_lecturerAccountTypeRadioButton_clicked();

    void on_accountLostResetButton_clicked();

    void on_checkAnswerResetButton_clicked();

    void on_forgotPassword_accepted();

private:
    Ui::forgotPassword *ui;
    QString correctanswer[3];
    databaseconnection connect;
};

#endif // FORGOTPASSWORD_H
