#include "programs.h"
#include "ui_programs.h"
#include <QDebug>
#include <QString>
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
    int currIndex = ui->FacultyComboBox->currentIndex();
   QString originalText = ui->sequenceTextEdit->toPlainText();
   if( originalText.isEmpty() &&  currIndex == 0)
   {

       qDebug()<<"is empty";
   }
   else
   {
       sequencePtr = new sequence;
       sequencePtr->show();
   }

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
    ui->sequenceTextEdit->clear();
}
