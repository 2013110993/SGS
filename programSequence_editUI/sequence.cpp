#include "sequence.h"
#include "ui_sequence.h"

sequence::sequence(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sequence)
{
    ui->setupUi(this);
//    ui->courseLabel1->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
//    ui->courseLabel1->setOpenExternalLinks(true);
//    ui->courseLabel1->setTextFormat(Qt::RichText);
//    ui->courseLabel1->setText("<a href =\"https://registration.ub.edu.bz/searchResults.cfm?searchId=3\">Algebra</a>");
//    ui->courseLabel1->setText(this->close());
    //label2
    ui->courseLabel_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
    ui->courseLabel_2->setOpenExternalLinks(true);
    ui->courseLabel_2->setTextFormat(Qt::RichText);
    ui->courseLabel_2->setText("<a href =\"https://registration.ub.edu.bz/searchResults.cfm?searchId=3\">AUDITING & INVESTIGATION II</a>");

}

sequence::~sequence()
{
    delete ui;

}

void sequence::on_backButton_clicked()
{

    this->close();

}



void sequence::on_courseLabel_2_linkActivated(const QString &link)
{

}

void sequence::on_courseLabel1_linkActivated(const QString &link)
{

    this->close();
}
