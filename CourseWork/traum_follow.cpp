/*!
\file   traum_follow.cpp
\brief  Исходный файл функционала "страницы" истории "Traum" без выбора (интерфейс "страницы" без выбора)
\author Кожан Дарья
\date   31.12.2022
*/

#include "traum_follow.h"
#include "ui_traum_follow.h"
#include "traum_end.h"
#include <QFile>
#include <QMessageBox>
#include "mainwindow.h"

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
    showFullScreen();
    QFile file("../../Data/Traum/" + QString::number(count) + ".txt");
    if(!file.open(QIODevice::ReadOnly))
        return;
    QString var = QByteArray(file.readAll());
    ui->textBrowser->setText(var);
    file.close();
}

Traum_Follow::~Traum_Follow()
{
    delete ui;
}

//устанавливается значение count и переходит в конец истории
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

void Traum_Follow::on_action_3_triggered()
{
   QMessageBox::information(this, "Информация о приложении", "version: 1.0\nautor: Даша\n2022");
}

void Traum_Follow::on_action_4_triggered()
{
    QWidget::close();
}

void Traum_Follow::on_action_triggered()
{
   //переход в главное меню
    hide();
    MainWindow *mainwin = new MainWindow;
    mainwin -> show();
}

void Traum_Follow::on_action_5_triggered()
{
    QMessageBox::information(this, "Помощь", "Добро пожаловать! \n"
"В главном меню Вы можете выйти из игры или же перейти в меню выбора историй. Чтобы выбрать историю, нужно в меню выбора истории нажать на соответствующую кнопку. Чтобы сделать выбор, следует нажать на кнопку с выбранным Вами ответом. Иногда история не имеет вариантов ответа, поэтому, чтобы продолжить историю,нужно нажать кнопку \"далее\". Когда история будет завершена, Вы сможете перейти в главное меню. Сверху, в панели инструментов, Вы сможете выйти из игры, узнать информацию о приложении или выйти в главное меню.");
}
