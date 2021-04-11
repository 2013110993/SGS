#ifndef DATABASECONNECTION_H
#define DATABASECONNECTION_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>

namespace Ui {
class databaseconnection;
}

class databaseconnection : public QMainWindow
{
    Q_OBJECT

public:
    explicit databaseconnection(QWidget *parent = nullptr);
    ~databaseconnection();

private slots:
    void on_pushButton_clicked();


private:
    Ui::databaseconnection *ui;
};

#endif // DATABASECONNECTION_H
