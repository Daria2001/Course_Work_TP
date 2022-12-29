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
    MainWindow *mainwin = new MainWindow;
    mainwin -> show();
    hide();
}

void ChoosingStory::on_pushButton_clicked()
{
    Traum *traum = new Traum;
    traum -> show();
    hide();
}

void ChoosingStory::on_action_3_triggered()
{
   QMessageBox::information(this, "Информация о приложении", "Троечку(((\nДаша, напиши сюда что-то полезное");
}

void ChoosingStory::on_action_4_triggered()
{
    QWidget::close();
}


void ChoosingStory::on_pushButton_2_clicked()
{
    Cpm *cpm = new Cpm;
    cpm -> show();
    hide();
}
