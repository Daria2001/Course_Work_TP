/*!
\file   mainwindow.cpp
\brief  Исходный файл функционала главного меню (интерфейс главного меню)
\author Кожан Дарья
\date   31.12.2022
*/

#include "mainwindow.h"
#include "choosingstory.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QFile>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    showFullScreen();
    QFile mFile("count.txt"); //Создастся qfile при вызове функции open
    QFile::remove("count.txt"); //удаление qfile
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_3_clicked()
{
    //кнопка выхода
    QWidget::close();
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::information(this, "Помощь", "Добро пожаловать! \n"
"В главном меню Вы можете выйти из игры или же перейти в меню выбора историй. Чтобы выбрать историю, нужно в меню выбора истории нажать на соответствующую кнопку. Чтобы сделать выбор, следует нажать на кнопку с выбранным Вами ответом. Иногда история не имеет вариантов ответа, поэтому, чтобы продолжить историю,нужно нажать кнопку \"далее\". Когда история будет завершена, Вы сможете перейти в главное меню. Сверху, в панели инструментов, Вы сможете выйти из игры, узнать информацию о приложении или выйти в главное меню.");
}

void MainWindow::on_pushButton_clicked()
{
    //переход на окно выбора историй
    ChoosingStory *choostory = new ChoosingStory;
    choostory -> show();
    hide();
}

void MainWindow::on_action_3_triggered()
{
   QMessageBox::information(this, "Информация о приложении", "version: 1.0\nautor: Даша\n2022");
}

void MainWindow::on_action_4_triggered()
{
    //выход через панель настроек
    QWidget::close();
}
