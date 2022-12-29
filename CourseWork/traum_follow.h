#ifndef TRAUM_FOLLOW_H
#define TRAUM_FOLLOW_H

#include <QMainWindow>

namespace Ui {
class Traum_Follow;
}

class Traum_Follow : public QMainWindow
{
    Q_OBJECT

public:
    explicit Traum_Follow(QWidget *parent = nullptr);
    ~Traum_Follow();

private slots:
    void on_pushButton_4_clicked();

    void on_action_3_triggered();

    void on_action_4_triggered();

private:
    Ui::Traum_Follow *ui;
    int count;
};

#endif // TRAUM_FOLLOW_H
