#include "choosingstory.h"
#include "mainwindow.h"
#include "ui_choosingstory.h"
#include "traum.h"
#include "cpm.h"


ChoosingStory::ChoosingStory(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChoosingStory)
{
    ui->setupUi(this);
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

void ChoosingStory::on_pushButton_2_clicked()
{
    Cpm *cpm = new Cpm;
    cpm -> show();
    hide();
}
