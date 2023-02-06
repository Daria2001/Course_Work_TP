/*!
\file   mainwindow.h
\brief  Заголовочный файл функционала главноего меню (интерфейс главного меню)
\author Кожан Дарья
\date   31.12.2022
*/


#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/*!
\brief  Класс интерфейсного окна главного меню
\details Открывается форма интерфейсного окна главного меню
*/

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /*!
        \brief Конструктор класса MainWindow
        */
    MainWindow(QWidget *parent = nullptr);
    /*!
        \brief Деструктор класса MainWindow
        */
    ~MainWindow();

private slots:

    /*!
        \brief Выход
        \details По нажатию кнопки выполняется выход из приложения
        */

    void on_pushButton_3_clicked();

    /*!
        \brief Помощь
        \details По нажатию кнопки открывается окно с описанием приложения, которое помогает разобраться в функционале программы
        */

    void on_pushButton_2_clicked();

    /*!
        \brief Выбор истории
        \details По нажатию кнопки открывается форма интерфейсного окна с выбором историй
        */

    void on_pushButton_clicked();

    /*!
        \brief Информация о приложении
        \details Действие, открывающее окно с информацией о приложении
        */

    void on_action_3_triggered();

    /*!
        \brief Выход
        \details Действие, позволяющее выйти из приложения
        */

    void on_action_4_triggered();


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
