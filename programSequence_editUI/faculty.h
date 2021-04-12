#ifndef FACULTY_H
#define FACULTY_H

#include <QWidget>
#include <sequence.h>
#include <programs.h>

QT_BEGIN_NAMESPACE
namespace Ui { class faculty; }
QT_END_NAMESPACE

class faculty : public QWidget
{
    Q_OBJECT

public:
    faculty(QWidget *parent = nullptr);
    ~faculty();

private slots:

    void on_clearPushButton_clicked();

    void on_searchpushButton_clicked();

    void on_conitnuepushButton_clicked();

    void on_conitnuepushButton_toggled(bool checked);

private:
    Ui::faculty *ui;
    sequence *seqPtr;
    programs *progPtr;

};
#endif // FACULTY_H
