/*!
\file   cpm_follow.h
\brief  Заголовочный файл функционала "страницы" без выбора ответа истории "Служба поддержки молящихся" (интерфейс с текстом и кнопокой "далее")
\author Кожан Дарья
\date   31.12.2022
*/

#ifndef CPM_FOLLOW_H
#define CPM_FOLLOW_H

#include <QMainWindow>

namespace Ui {
class Cpm_Follow;
}

/*!
\brief  Класс интерфейсного окна "страницы" истории без выбора ответа
\details Открывается форма интерфейсного окна с текстом истории и кнопкой "далее"
*/
class Cpm_Follow : public QMainWindow
{
    Q_OBJECT

public:
    explicit Cpm_Follow(QWidget *parent = nullptr);
    ~Cpm_Follow();

private slots:

    /*!
        \brief Переход далее по сюжету
        \details При нажатии на кнопку, пользователь переходят на следующую "страницу" истории
        */
    void on_pushButton_4_clicked();

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

    void on_action_triggered();

    void on_action_5_triggered();

private:
    Ui::Cpm_Follow *ui;
    int count;
};

#endif // CPM_FOLLOW_H
