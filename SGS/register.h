#ifndef REGISTER_H
#define REGISTER_H

#include <QDialog>

namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();

private slots:
    void on_signUpNextButton_clicked();

    void on_backSignUpButton_clicked();

    void on_cancelSignUpButton_clicked();

    void on_studentRadioButton_clicked();

    void on_lecturerRadioButton_clicked();

private:
    Ui::Register *ui;
};

#endif // REGISTER_H
