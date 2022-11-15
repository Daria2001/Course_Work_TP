#include "cpm_end.h"
#include "ui_cpm_end.h"

Cpm_End::Cpm_End(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Cpm_End)
{
    ui->setupUi(this);
}

Cpm_End::~Cpm_End()
{
    delete ui;
}
