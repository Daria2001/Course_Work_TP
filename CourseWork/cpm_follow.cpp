#include "cpm_follow.h"
#include "ui_cpm_follow.h"
#include <QFile>
#include "cpm_end.h"
#include <QMessageBox>
#include "mainwindow.h"

Cpm_Follow::Cpm_Follow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Cpm_Follow)
{
    QFile mFile("count.txt");
    mFile.open(QIODevice::ReadWrite);
    QString var_ = QByteArray(mFile.readAll());
    mFile.close();
    count = var_.toInt();
    ui->setupUi(this);
    showFullScreen();
    QFile file("../Data/Техническая поддержка молящихся/" + QString::number(count) + ".txt");
    if(!file.open(QIODevice::ReadOnly))
        return;
    QString var = QByteArray(file.readAll());
    ui->textBrowser->setText(var);
    file.close();
}

Cpm_Follow::~Cpm_Follow()
{
    delete ui;
}

void Cpm_Follow::on_pushButton_4_clicked()
{

    if (count == 13)
    {
    QFile::remove("count.txt");
    QFile mFile("count.txt");
    mFile.open(QIODevice::WriteOnly);
    QByteArray new1;
    count = 14;
    new1.setNum(count);
    mFile.write(new1);
    mFile.close();
    }
    else
    if (count == 8)
    {
    QFile::remove("count.txt");
    QFile mFile("count.txt");
    mFile.open(QIODevice::WriteOnly);
    QByteArray new1;
    count = 14;
    new1.setNum(count);
    mFile.write(new1);
    mFile.close();
    }
    Cpm_End *cpm = new Cpm_End();
    cpm -> show();
    hide();
}

void Cpm_Follow::on_action_3_triggered()
{
   QMessageBox::information(this, "Информация о приложении", "Троечку(((\nДаша, напиши сюда что-то полезное");
}

void Cpm_Follow::on_action_4_triggered()
{
    QWidget::close();
}
