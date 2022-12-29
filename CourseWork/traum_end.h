#ifndef TRAUM_END_H
#define TRAUM_END_H

#include <QMainWindow>

namespace Ui {
class Traum_End;
}

class Traum_End : public QMainWindow
{
    Q_OBJECT

public:
    explicit Traum_End(QWidget *parent = nullptr);
    ~Traum_End();

private slots:
    void on_pushButton_3_clicked();

    void on_action_3_triggered();

    void on_action_4_triggered();

private:
    Ui::Traum_End *ui;
};

#endif // TRAUM_END_H
