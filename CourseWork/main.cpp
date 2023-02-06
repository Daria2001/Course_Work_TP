/*!
\file   main.cpp
\brief  Основной исходный файл, с которого запускается приложение
\author Кожан Дарья
\date   31.12.2022
*/

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    return a.exec();
}
