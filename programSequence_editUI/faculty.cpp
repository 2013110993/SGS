#include "faculty.h"
#include "ui_faculty.h"
#include "programs.h"
#include <QDebug>
#include <QString>
#include <QStringList>

#include <fstream>
using std::ostream;
using std::istream;

#include <QLineEdit>
#include<QFontDialog>
#include<QMessageBox>
#include <QTextStream>
#include<QList>
#include<QTextStream>
#include <cctype>
#include<QMessageBox>
#include<QFileDialog>
#include <QSplitter>

faculty::faculty(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::faculty)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: white"
                        );

}

faculty::~faculty()
{
    delete ui;
}




void faculty::on_clearPushButton_clicked()
{
    ui->aatextEdit->clear();
    ui->sequenceComboBox_2->setCurrentIndex(0);
    //    int a = 0;
    //    ui->seachLineEdit->setCurrentIndex(0);
}


void faculty::on_searchpushButton_clicked()
{
    int currIndex = ui->sequenceComboBox_2->currentIndex();
    QString originalText = ui->aatextEdit->toPlainText();
  // int wordCount = ui->aatextEdit->toPlainText().split(QRegExp("(\\s|\\n|\\r)+"), QString::SkipEmptyParts).count();
   if(originalText.isEmpty() &&  currIndex == 0)
   {

       qDebug()<<"is empty";
   }
   else
   {
       seqPtr = new sequence;
       seqPtr->show();
   }


}

void faculty::on_conitnuepushButton_clicked()
{
    progPtr = new programs;
    progPtr->show();

}

void faculty::on_conitnuepushButton_toggled(bool checked)
{
    this->setStyleSheet("background-color: white;"
                  "color: black");
}
