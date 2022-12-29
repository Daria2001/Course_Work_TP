#ifndef CPM_H
#define CPM_H

#include <QMainWindow>

namespace Ui {
class Cpm;
}

class Cpm : public QMainWindow
{
    Q_OBJECT

public:
    explicit Cpm(QWidget *parent = nullptr);
    ~Cpm();
    int count;

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_action_3_triggered();

    void on_action_4_triggered();

private:
    Ui::Cpm *ui;
};

#endif // CPM_H
