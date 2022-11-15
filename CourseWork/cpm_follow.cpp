#include "cpm_follow.h"
#include "ui_cpm_follow.h"

Cpm_Follow::Cpm_Follow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Cpm_Follow)
{
    ui->setupUi(this);
}

Cpm_Follow::~Cpm_Follow()
{
    delete ui;
}
