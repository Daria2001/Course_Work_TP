/*!
\file   cpm_end.h
\brief  Заголовочный файл функционала последней "страницы" истории "Служба поддержки молящихся" (интерфейс с текстом и кнопокой перехода в главное меню)
\author Кожан Дарья
\date   31.12.2022
*/

#ifndef CPM_END_H
#define CPM_END_H

#include <QMainWindow>

namespace Ui {
class Cpm_End;
}

/*!
\brief  Класс интерфейсного окна конца истории
\details Открывается форма интерфейсного окна с текстом истории и кнопкой перехода в главное меню
*/
class Cpm_End : public QMainWindow
{
    Q_OBJECT

public:
    explicit Cpm_End(QWidget *parent = nullptr);
    ~Cpm_End();

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
    Ui::Cpm_End *ui;
};

#endif // CPM_END_H
