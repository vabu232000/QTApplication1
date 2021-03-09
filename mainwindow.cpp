#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>

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
    QMessageBox::information(this, "Vabhoosha_212218104173","This is my information");


}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::critical(this, "Vabhoosha_212218104173","This is critical");
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this, "Vabhoosha_212218104173","Is this right?",QMessageBox::Yes|QMessageBox::No);
    if(reply==QMessageBox::Yes)
    {
        QApplication::quit();

    }
}

void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::warning(this, "Vabhoosha_212218104173","This is a warning message");
}
