#include "traum_end.h"
#include "ui_traum_end.h"
#include <QMessageBox>
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
    showFullScreen();
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

void Traum_End::on_action_3_triggered()
{
   QMessageBox::information(this, "Информация о приложении", "Троечку(((\nДаша, напиши сюда что-то полезное");
}

void Traum_End::on_action_4_triggered()
{
    QWidget::close();
}

