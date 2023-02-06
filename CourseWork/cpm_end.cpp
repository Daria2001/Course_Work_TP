/*!
\file   cpm_end.cpp
\brief  Исходный файл функционала  конца истории "Tехническая поддержка молящихся" (интерфейс конца истории)
\author Кожан Дарья
\date   31.12.2022
*/

#include "cpm_end.h"
#include "ui_cpm_end.h"
#include <QFile>
#include <QMessageBox>
#include "mainwindow.h"

//устанавливается завершающий текст
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
    QFile file("../../Data/Cpm/" + QString::number(count) + ".txt");
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

//переход в главное меню
void Cpm_End::on_pushButton_3_clicked()
{
    MainWindow *mainwin = new MainWindow;
    mainwin -> show();
    hide();
}

void Cpm_End::on_action_3_triggered()
{
   QMessageBox::information(this, "Информация о приложении", "version: 1.0\nautor: Даша\n2022");
}

void Cpm_End::on_action_4_triggered()
{
    QWidget::close();
}

void Cpm_End::on_action_5_triggered()
{
    QMessageBox::information(this, "Помощь", "Добро пожаловать! \n"
"В главном меню Вы можете выйти из игры или же перейти в меню выбора историй. Чтобы выбрать историю, нужно в меню выбора истории нажать на соответствующую кнопку. Чтобы сделать выбор, следует нажать на кнопку с выбранным Вами ответом. Иногда история не имеет вариантов ответа, поэтому, чтобы продолжить историю,нужно нажать кнопку \"далее\". Когда история будет завершена, Вы сможете перейти в главное меню. Сверху, в панели инструментов, Вы сможете выйти из игры, узнать информацию о приложении или выйти в главное меню.");
}
