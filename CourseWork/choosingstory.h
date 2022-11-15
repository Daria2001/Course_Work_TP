#ifndef CHOOSINGSTORY_H
#define CHOOSINGSTORY_H

#include <QMainWindow>

namespace Ui {
class ChoosingStory;
}

class ChoosingStory : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChoosingStory(QWidget *parent = nullptr);
    ~ChoosingStory();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ChoosingStory *ui;
};

#endif // CHOOSINGSTORY_H
