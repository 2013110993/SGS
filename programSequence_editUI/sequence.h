#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <QWidget>


namespace Ui {
class sequence;
}

class sequence : public QWidget
{
    Q_OBJECT

public:
    explicit sequence(QWidget *parent = nullptr);
    ~sequence();

private slots:
    void on_backButton_clicked();

    void on_courseLabel_2_linkActivated(const QString &link);

    void on_courseLabel1_linkActivated(const QString &link);

private:
    Ui::sequence *ui;

};

#endif // SEQUENCE_H
