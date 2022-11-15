#include "mainwindow.h"
#include "choosingstory.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_3_clicked()
{
    QWidget::close();
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::information(this, "Помощь", "Даша, не забудь сюда написать что-то. Поставьте троечку, пожалуйста");
}

void MainWindow::on_pushButton_clicked()
{
    ChoosingStory *choostory = new ChoosingStory;
    choostory -> show();
    hide();
}

void MainWindow::on_action_3_triggered()
{
   QMessageBox::information(this, "Информация о приложении", "Троечку(((\nДаша, напиши сюда что-то полезное");
}

void MainWindow::on_action_4_triggered()
{
    QWidget::close();
}
