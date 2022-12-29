#ifndef CPM_END_H
#define CPM_END_H

#include <QMainWindow>

namespace Ui {
class Cpm_End;
}

class Cpm_End : public QMainWindow
{
    Q_OBJECT

public:
    explicit Cpm_End(QWidget *parent = nullptr);
    ~Cpm_End();

private slots:
    void on_pushButton_3_clicked();

    void on_action_3_triggered();

    void on_action_4_triggered();

private:
    Ui::Cpm_End *ui;
};

#endif // CPM_END_H
