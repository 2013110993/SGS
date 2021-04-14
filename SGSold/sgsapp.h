#ifndef SGSAPP_H
#define SGSAPP_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class sgsApp; }
QT_END_NAMESPACE

class sgsApp : public QMainWindow
{
    Q_OBJECT

public:
    sgsApp(QWidget *parent = nullptr);
    ~sgsApp();

private:
    Ui::sgsApp *ui;
};
#endif // SGSAPP_H
