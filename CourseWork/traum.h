/*!
\file   traum.h
\brief  Заголовочный файл функционала выбора ответов истории "Traum" (интерфейс с тектом и выбором из двух ответов)
\author Кожан Дарья
\date   31.12.2022
*/

#ifndef TRAUM_H
#define TRAUM_H

#include <QMainWindow>

namespace Ui {
class Traum;
}

/*!
\brief  Класс интерфейсного окна выбора ответов
\details Открывается форма интерфейсного окна с текстом истории и двумя вариантами ответов
*/
class Traum : public QMainWindow
{
    Q_OBJECT

public:
    explicit Traum(QWidget *parent = nullptr);
    ~Traum();
    int count;

private slots:

    /*!
    \brief  Верхняя кнопка с ответом
    \details Нажав на эту кнопку, пользователь делает выбор ответа и переходит далее по сюжету
    */
    void on_pushButton_clicked();

    /*!
    \brief  Нижняя кнопка с ответом
    \details Нажав на эту кнопку, пользователь делает выбор ответа и переходит далее по сюжету
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

    void on_action_triggered();

    void on_action_5_triggered();

private:
    Ui::Traum *ui;
};

#endif // TRAUM_H
