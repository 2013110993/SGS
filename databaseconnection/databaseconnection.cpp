#include "databaseconnection.h"
#include "ui_databaseconnection.h"

databaseconnection::databaseconnection(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::databaseconnection)
{
    ui->setupUi(this);
}

databaseconnection::~databaseconnection()
{
    delete ui;
}

void databaseconnection::on_pushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setPort(3366);
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("SGS");
    if(db.open())
    {
        QMessageBox::information(this, "Connect", "database connect successfully");
    }
    else
    {
            QMessageBox::critical(this, "error", db.lastError().text() );
    }
}
