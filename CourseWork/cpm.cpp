/*!
\file   cpm.cpp
\brief  Исходный файл функционала истории "Техническая поддержка молящихся" с выбором ответа (интерфейс истории с выбором ответа)
\author Кожан Дарья
\date   31.12.2022
*/

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
    //создание файла
    QFile mFile("count.txt");
    mFile.open(QIODevice::ReadWrite);
    //запись в переменную содержимое файла
    QString var_ = QByteArray(mFile.readAll());
    mFile.close();
    if(var_ == "")
        count = 1;
    else
        count = var_.toInt();
    ui->setupUi(this);
    showFullScreen();
    QFile file("../../Data/Cpm/" + QString::number(count) + ".txt"); //путь к нужному файлу
    if(!file.open(QIODevice::ReadOnly))
        return;
    QString var = QByteArray(file.readAll());
    ui->textBrowser->setText(var); //записываем в текстовое поле текст из файла
    count++;

    QFile file1("../../Data/Cpm/" + QString::number(count) + ".txt"); //путь к нужному файлу
    if(!file1.open(QIODevice::ReadOnly))
        return;
    QString var1 = QByteArray(file1.readAll());
    ui->pushButton_2->setText(var1); //Записываем текст кнопки
    count++;

    QFile file2("../../Data/Cpm/" + QString::number(count) + ".txt"); //путь к нужному файлу
    if(!file2.open(QIODevice::ReadOnly))
        return;
    QString var2 = QByteArray(file2.readAll());
    ui->pushButton_3->setText(var2); //Записываем текст кнопки

    file.close();
    file1.close();
    file2.close();
}

Cpm::~Cpm()
{
    delete ui;
}

//нажатие верхней кнопки, определяется чему должен быть равен count, чтоб верно указать нужный нам путь
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

//нажатие нижней кнопки, определяется чему должен быть равен count, чтоб верно указать нужный нам путь
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
   QMessageBox::information(this, "Информация о приложении", "version: 1.0\nautor: Даша\n2022");
}

void Cpm::on_action_4_triggered()
{
    QWidget::close();
}

void Cpm::on_action_triggered()
{
   //переход в главное меню
    hide();
    MainWindow *mainwin = new MainWindow;
    mainwin -> show();
}

void Cpm::on_action_5_triggered()
{
    QMessageBox::information(this, "Помощь", "Добро пожаловать! \n"
"В главном меню Вы можете выйти из игры или же перейти в меню выбора историй. Чтобы выбрать историю, нужно в меню выбора истории нажать на соответствующую кнопку. Чтобы сделать выбор, следует нажать на кнопку с выбранным Вами ответом. Иногда история не имеет вариантов ответа, поэтому, чтобы продолжить историю,нужно нажать кнопку \"далее\". Когда история будет завершена, Вы сможете перейти в главное меню. Сверху, в панели инструментов, Вы сможете выйти из игры, узнать информацию о приложении или выйти в главное меню.");
}
