#ifndef PROGRAMS_H
#define PROGRAMS_H

#include <QWidget>
#include <sequence.h>
#include "sequence.h"

namespace Ui {
class programs;
}

class programs : public QWidget
{
    Q_OBJECT

public:
    explicit programs(QWidget *parent = nullptr);
    ~programs();



private slots:
    void on_sequenceSearchPushButton_2_clicked();

    void on_pushButton_2_clicked();

    void on_sequenceComboBox_2_currentIndexChanged(int index);

    void on_sequenceClearPushButton_2_clicked();

private:
    Ui::programs *ui;
    sequence *sequencePtr;
};

#endif // PROGRAMS_H
