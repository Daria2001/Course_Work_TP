#include "traum_end.h"
#include "ui_traum_end.h"
#include "mainwindow.h"
#include <QFile>

Traum_End::Traum_End(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Traum_End)
{
    QFile mFile("count.txt");
    mFile.open(QIODevice::ReadWrite);
    QString var_ = QByteArray(mFile.readAll());
    mFile.close();
    int count = var_.toInt();
    ui->setupUi(this);
    QFile file("../Data/Traum/" + QString::number(count) + ".txt");
    if(!file.open(QIODevice::ReadOnly))
        return;
    QString var = QByteArray(file.readAll());
    ui->textBrowser->setText(var);
    file.close();
    QFile::remove("count.txt");
}

Traum_End::~Traum_End()
{
    delete ui;
}

void Traum_End::on_pushButton_3_clicked()
{
    MainWindow *mainwin = new MainWindow;
    mainwin -> show();
    hide();
}
