/*!
\file   choosingstory.h
\brief  Заголовочный файл для меню выбора историй
\author Кожан Дарья
\date   31.12.2022
*/

#ifndef CHOOSINGSTORY_H
#define CHOOSINGSTORY_H

#include <QMainWindow>

namespace Ui {
class ChoosingStory;
}

/*!
\brief  Класс интерфейсного окна выбора истории
\details Открывается форма интерфейсного окна с выбором из двух историй
*/
class ChoosingStory : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChoosingStory(QWidget *parent = nullptr);
    ~ChoosingStory();

private slots:

    /*!
        \brief Переход в главное меню
        \details При нажатии на кнопку, пользователь переходит в главное меню
        */
    void on_pushButton_3_clicked();

    /*!
        \brief Выбор истории
        \details При нажатии кнопки, пользователю открывается интерфейс с выбранной историей
        */
    void on_pushButton_clicked();

    /*!
        \brief Выбор истории
        \details При нажатии кнопки, пользователю открывается интерфейс с выбранной историей
        */
    void on_pushButton_2_clicked();

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

    void on_action_5_triggered();

private:
    Ui::ChoosingStory *ui;
};

#endif // CHOOSINGSTORY_H
