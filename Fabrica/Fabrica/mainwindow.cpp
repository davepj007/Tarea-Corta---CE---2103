#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "fabrica.h"
#include <QStyle>
#include <QDesktopWidget>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    fabrica *ventana = new fabrica;
    ventana->setGeometry(QStyle::alignedRect(Qt::LeftToRight, Qt::AlignCenter, ventana->size(), qApp->desktop()->availableGeometry()));
    ventana->show();
    close();
}
