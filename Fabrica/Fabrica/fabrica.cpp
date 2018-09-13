#include "fabrica.h"
#include "ui_fabrica.h"
#include "mainwindow.h"
#include <QStyle>
#include <QDesktopWidget>
#include <string>
#include <sstream>
using namespace std;

fabrica::fabrica(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fabrica)
{
    ui->setupUi(this);
}

fabrica::~fabrica()
{
    delete ui;
}

void fabrica::on_pushButton_clicked()
{
    MainWindow *ventana = new MainWindow;
    ventana->setGeometry(QStyle::alignedRect(Qt::LeftToRight, Qt::AlignCenter, ventana->size(), qApp->desktop()->availableGeometry()));
    ventana->show();
    close();
}

void fabrica::on_pushButton_3_clicked()
{
}

void fabrica::on_pushButton_2_clicked()
{
    int arr[] = {1,2,3,4,5,6};
    ui->label_9->setText(QString::number(arr[0]*10)+ " s");
    ui->label_16->setText(QString::number(arr[1]*10)+ " s");
    ui->label_18->setText(QString::number(arr[2]*10)+ " s");
    ui->label_29->setText(QString::number(arr[3]*10)+ " s");
    ui->label_28->setText(QString::number(arr[4]*10)+ " s");
    ui->label_23->setText(QString::number(arr[5]*10)+ " s");
    ui->label_14->setText("Basica 1");
    ui->label_13->setText("Obtener masa");
    ui->label_15->setText("Borde Queso 1");
    ui->label_17->setText("Obtener masa");
    ui->label_20->setText("Pizza Hawaiana 1");
    ui->label_19->setText("Obtener masa");
    ui->label_21->setText("Suprema 1");
    ui->label_22->setText("Obtener masa");
    ui->label_24->setText("Vegetaliana 1");
    ui->label_25->setText("Obtener masa");
    ui->label_26->setText("Basica 2");
    ui->label_27->setText("Obtener masa");
}
