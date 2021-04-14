#ifndef SGSAPP_H
#define SGSAPP_H

#include <QMainWindow>
#include "register.h"

QT_BEGIN_NAMESPACE
namespace Ui { class sgsApp; }
QT_END_NAMESPACE

class sgsApp : public QMainWindow
{
    Q_OBJECT

public:
    sgsApp(QWidget *parent = nullptr);
    ~sgsApp();

private slots:
    void on_signUpButton_clicked();
    void on_signInButton_clicked();

private:
    Ui::sgsApp *ui;
    Register *reg;
};
#endif // SGSAPP_H
