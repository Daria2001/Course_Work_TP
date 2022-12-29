#ifndef CPM_FOLLOW_H
#define CPM_FOLLOW_H

#include <QMainWindow>

namespace Ui {
class Cpm_Follow;
}

class Cpm_Follow : public QMainWindow
{
    Q_OBJECT

public:
    explicit Cpm_Follow(QWidget *parent = nullptr);
    ~Cpm_Follow();

private slots:
    void on_pushButton_4_clicked();

    void on_action_3_triggered();

    void on_action_4_triggered();

private:
    Ui::Cpm_Follow *ui;
    int count;
};

#endif // CPM_FOLLOW_H
