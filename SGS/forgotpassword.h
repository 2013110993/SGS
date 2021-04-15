#ifndef FORGOTPASSWORD_H
#define FORGOTPASSWORD_H

#include <QDialog>

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

    void on_searchAccountButton_clicked();

private:
    Ui::forgotPassword *ui;
};

#endif // FORGOTPASSWORD_H
