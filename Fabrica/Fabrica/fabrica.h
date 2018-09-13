#ifndef FABRICA_H
#define FABRICA_H

#include <QDialog>

namespace Ui {
class fabrica;
}

class fabrica : public QDialog
{
    Q_OBJECT

public:
    explicit fabrica(QWidget *parent = nullptr);
    ~fabrica();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::fabrica *ui;
};

#endif // FABRICA_H
