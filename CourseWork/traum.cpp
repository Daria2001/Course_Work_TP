#include "traum.h"
#include "ui_traum.h"
#include <QFile>
#include "traum_end.h"
#include "traum_follow.h"


Traum::Traum(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Traum)
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
    QFile file("../Data/Traum/" + QString::number(count) + ".txt");
    if(!file.open(QIODevice::ReadOnly))
        return;
    QString var = QByteArray(file.readAll());
    ui->textBrowser->setText(var);
    count++;

    QFile file1("../Data/Traum/" + QString::number(count) + ".txt");
    if(!file1.open(QIODevice::ReadOnly))
        return;
    QString var1 = QByteArray(file1.readAll());
    ui->pushButton->setText(var1);
    count++;

    QFile file2("../Data/Traum/" + QString::number(count) + ".txt");
    if(!file2.open(QIODevice::ReadOnly))
        return;
    QString var2 = QByteArray(file2.readAll());
    ui->pushButton_3->setText(var2);

    file.close();
    file1.close();
    file2.close();
}

Traum::~Traum()
{
    delete ui;
}



void Traum::on_pushButton_clicked()
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
        Traum_End *traum = new Traum_End();
        traum -> show();
        hide();
    }
    else if (count == 15)
        {
            QFile::remove("count.txt");
            QFile mFile("count.txt");
            mFile.open(QIODevice::WriteOnly);
            QByteArray new1;
            count = 16;
            new1.setNum(count);
            mFile.write(new1);
            mFile.close();
            Traum_End *traum = new Traum_End();
            traum -> show();
            hide();
        }
        else if (count == 12)
            {
                QFile::remove("count.txt");
                QFile mFile("count.txt");
                mFile.open(QIODevice::WriteOnly);
                QByteArray new1;
                count = 7;
                new1.setNum(count);
                mFile.write(new1);
                mFile.close();
                Traum_Follow *traum = new Traum_Follow();
                traum -> show();
                hide();
            }
            else {
                    QFile::remove("count.txt");
                    QFile mFile("count.txt");
                    mFile.open(QIODevice::WriteOnly);
                    QByteArray new1;
                    count++;
                    new1.setNum(count);
                    mFile.write(new1);
                    mFile.close();
                    Traum *traum = new Traum();
                    traum -> show();
                    hide();
    }
}

void Traum::on_pushButton_3_clicked()
{
    if (count == 15)
    {
        QFile::remove("count.txt");
        QFile mFile("count.txt");
        mFile.open(QIODevice::WriteOnly);
        QByteArray new1;
        count = 17;
        new1.setNum(count);
        mFile.write(new1);
        mFile.close();
        Traum_End *traum = new Traum_End();
        traum -> show();
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
            Traum_Follow *traum = new Traum_Follow();
            traum -> show();
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
            Traum *traum = new Traum();
            traum -> show();
            hide();
        }
}
