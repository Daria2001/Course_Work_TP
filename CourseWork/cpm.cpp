#include "cpm.h"
#include "ui_cpm.h"
#include <QFile>
#include "cpm_end.h"
#include "cpm_follow.h"
#include <QMessageBox>
#include "mainwindow.h"

Cpm::Cpm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Cpm)
{
    QFile mFile("count.txt");
    mFile.open(QIODevice::ReadWrite);
    QString var_ = QByteArray(mFile.readAll());
    mFile.close();
    if(var_ == "")
        count = 1;
    else
        count = var_.toInt();
    ui->setupUi(this);
    showFullScreen();
    QFile file("../Data/Техническая поддержка молящихся/" + QString::number(count) + ".txt");
    if(!file.open(QIODevice::ReadOnly))
        return;
    QString var = QByteArray(file.readAll());
    ui->textBrowser->setText(var);
    count++;

    QFile file1("../Data/Техническая поддержка молящихся/" + QString::number(count) + ".txt");
    if(!file1.open(QIODevice::ReadOnly))
        return;
    QString var1 = QByteArray(file1.readAll());
    ui->pushButton_2->setText(var1);
    count++;

    QFile file2("../Data/Техническая поддержка молящихся/" + QString::number(count) + ".txt");
    if(!file2.open(QIODevice::ReadOnly))
        return;
    QString var2 = QByteArray(file2.readAll());
    ui->pushButton_3->setText(var2);

    file.close();
    file1.close();
    file2.close();
}

Cpm::~Cpm()
{
    delete ui;
}

void Cpm::on_pushButton_2_clicked()
{
    if (count == 6)
    {
        QFile::remove("count.txt");
        QFile mFile("count.txt");
        mFile.open(QIODevice::WriteOnly);
        QByteArray new1;
        count = 9;
        new1.setNum(count);
        mFile.write(new1);
        mFile.close();
        Cpm_End *cpm = new Cpm_End();
        cpm -> show();
        hide();
    }
    else
    if (count == 12)
    {
        QFile::remove("count.txt");
        QFile mFile("count.txt");
        mFile.open(QIODevice::WriteOnly);
        QByteArray new1;
        count = 7;
        new1.setNum(count);
        mFile.write(new1);
        mFile.close();
        Cpm_End *cpm = new Cpm_End();
        cpm -> show();
        hide();
    }
    else
    {
    QFile::remove("count.txt");
    QFile mFile("count.txt");
    mFile.open(QIODevice::WriteOnly);
    QByteArray new1;
    count++;
    new1.setNum(count);
    mFile.write(new1);
    mFile.close();
    Cpm *cpm = new Cpm();
    cpm -> show();
    hide();
    }
}


void Cpm::on_pushButton_3_clicked()
{
    if (count == 6)
    {
        QFile::remove("count.txt");
        QFile mFile("count.txt");
        mFile.open(QIODevice::WriteOnly);
        QByteArray new1;
        count = 13;
        new1.setNum(count);
        mFile.write(new1);
        mFile.close();
        Cpm_Follow *cpm = new Cpm_Follow();
        cpm -> show();
        hide();
    }
    else
    if (count == 12)
    {
        QFile::remove("count.txt");
        QFile mFile("count.txt");
        mFile.open(QIODevice::WriteOnly);
        QByteArray new1;
        count = 8;
        new1.setNum(count);
        mFile.write(new1);
        mFile.close();
        Cpm_Follow *cpm = new Cpm_Follow();
        cpm -> show();
        hide();
    }
    else
    {
    QFile::remove("count.txt");
    QFile mFile("count.txt");
    mFile.open(QIODevice::WriteOnly);
    QByteArray new1;
    count += 7;
    new1.setNum(count);
    mFile.write(new1);
    mFile.close();
    Cpm *cpm = new Cpm();
    cpm -> show();
    hide();
    }


}

void Cpm::on_action_3_triggered()
{
   QMessageBox::information(this, "Информация о приложении", "Троечку(((\nДаша, напиши сюда что-то полезное");
}

void Cpm::on_action_4_triggered()
{
    QWidget::close();
}

