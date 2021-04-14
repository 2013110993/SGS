#include "sgsapp.h"
#include "ui_sgsapp.h"

sgsApp::sgsApp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::sgsApp)
{
    ui->setupUi(this);
}

sgsApp::~sgsApp()
{
    delete ui;
}

