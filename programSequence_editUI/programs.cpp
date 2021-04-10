#include "programs.h"
#include "ui_programs.h"

programs::programs(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::programs)
{
    ui->setupUi(this);
}

programs::~programs()
{
    delete ui;
}

void programs::on_sequenceSearchPushButton_2_clicked()
{
//    sequencePtr->show();

}

void programs::on_pushButton_2_clicked()
{
    this->close();
}

void programs::on_sequenceComboBox_2_currentIndexChanged(int index)
{

}

void programs::on_sequenceClearPushButton_2_clicked()
{
    ui->FacultyComboBox->setCurrentIndex(0);
    ui->sequenceLineEdit_2->clear();
}
