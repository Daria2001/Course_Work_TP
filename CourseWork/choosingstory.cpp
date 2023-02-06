/*!
\file   choosingstory.cpp
\brief  Исходный файл функционала выбора истории (интерфейс выбора истории)
\author Кожан Дарья
\date   31.12.2022
*/

#include "choosingstory.h"
#include <QMessageBox>
#include "mainwindow.h"
#include "ui_choosingstory.h"
#include "traum.h"
#include "cpm.h"


ChoosingStory::ChoosingStory(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChoosingStory)
{
    ui->setupUi(this);
    showFullScreen();
}

ChoosingStory::~ChoosingStory()
{
    delete ui;
}

void ChoosingStory::on_pushButton_3_clicked()
{
   //переход в главное меню
    hide();
    MainWindow *mainwin = new MainWindow;
    mainwin -> show();
}

void ChoosingStory::on_pushButton_clicked()
{
    //переход на выбранную историю
    hide();
    Traum *traum = new Traum;
    traum -> show();
}

void ChoosingStory::on_action_3_triggered()
{
   QMessageBox::information(this, "Информация о приложении", "version: 1.0\nautor: Даша\n2022");
}

void ChoosingStory::on_action_4_triggered()
{
    QWidget::close();
}//выход через панель инструментов


void ChoosingStory::on_pushButton_2_clicked()
{
    //переход на выбранную историю
    hide();
    Cpm *cpm = new Cpm;
    cpm -> show();
}

void ChoosingStory::on_action_5_triggered()
{
    QMessageBox::information(this, "Помощь", "Добро пожаловать! \n"
"В главном меню Вы можете выйти из игры или же перейти в меню выбора историй. Чтобы выбрать историю, нужно в меню выбора истории нажать на соответствующую кнопку. Чтобы сделать выбор, следует нажать на кнопку с выбранным Вами ответом. Иногда история не имеет вариантов ответа, поэтому, чтобы продолжить историю,нужно нажать кнопку \"далее\". Когда история будет завершена, Вы сможете перейти в главное меню. Сверху, в панели инструментов, Вы сможете выйти из игры, узнать информацию о приложении или выйти в главное меню.");
}
