/*!
\file   traum_end.h
\brief  Заголовочный файл функционала последней "страницы" истории "Traum" (интерфейс с текстом и кнопокй перехода в главное меню)
\author Кожан Дарья
\date   31.12.2022
*/

#ifndef TRAUM_END_H
#define TRAUM_END_H

#include <QMainWindow>

namespace Ui {
class Traum_End;
}

/*!
\brief  Класс интерфейсного окна конца истории
\details Открывается форма интерфейсного окна с текстом истории и кнопкой перехода в главное меню
*/
class Traum_End : public QMainWindow
{
    Q_OBJECT

public:
    explicit Traum_End(QWidget *parent = nullptr);
    ~Traum_End();

private slots:

    /*!
        \brief Переход в главное меню
        \details При нажатии на кнопку, пользователь переходит в главное меню
        */
    void on_pushButton_3_clicked();

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
    Ui::Traum_End *ui;
};

#endif // TRAUM_END_H
