#include "cpm_end.h"
#include "ui_cpm_end.h"
#include <QFile>
#include <QMessageBox>
#include "mainwindow.h"

Cpm_End::Cpm_End(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Cpm_End)
{

    QFile mFile("count.txt");
    mFile.open(QIODevice::ReadWrite);
    QString var_ = QByteArray(mFile.readAll());
    mFile.close();
    int count = var_.toInt();
    ui->setupUi(this);
    showFullScreen();
    QFile file("../Data/Техническая поддержка молящихся/" + QString::number(count) + ".txt");
    if(!file.open(QIODevice::ReadOnly))
        return;
    QString var = QByteArray(file.readAll());
    ui->textBrowser->setText(var);
    file.close();
    QFile::remove("count.txt");
}

Cpm_End::~Cpm_End()
{
    delete ui;
}

void Cpm_End::on_pushButton_3_clicked()
{
    MainWindow *mainwin = new MainWindow;
    mainwin -> show();
    hide();
}

void Cpm_End::on_action_3_triggered()
{
   QMessageBox::information(this, "Информация о приложении", "Троечку(((\nДаша, напиши сюда что-то полезное");
}

void Cpm_End::on_action_4_triggered()
{
    QWidget::close();
}

