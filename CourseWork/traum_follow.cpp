#include "traum_follow.h"
#include "ui_traum_follow.h"
#include "traum_end.h"
#include <QFile>

Traum_Follow::Traum_Follow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Traum_Follow)
{
    QFile mFile("count.txt");
    mFile.open(QIODevice::ReadWrite);
    QString var_ = QByteArray(mFile.readAll());
    mFile.close();
    count = var_.toInt();
    ui->setupUi(this);
    QFile file("../Data/Traum/" + QString::number(count) + ".txt");
    if(!file.open(QIODevice::ReadOnly))
        return;
    QString var = QByteArray(file.readAll());
    ui->textBrowser_2->setText(var);
    file.close();
}

Traum_Follow::~Traum_Follow()
{
    delete ui;
}

void Traum_Follow::on_pushButton_4_clicked()
{
    if (count == 7)
    {
    QFile::remove("count.txt");
    QFile mFile("count.txt");
    mFile.open(QIODevice::WriteOnly);
    QByteArray new1;
    count = 18;
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
            count = 19;
            new1.setNum(count);
            mFile.write(new1);
            mFile.close();
        }

    Traum_End *traum = new Traum_End();
    traum -> show();
    hide();
}
