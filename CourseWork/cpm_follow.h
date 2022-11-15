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

private:
    Ui::Cpm_Follow *ui;
};

#endif // CPM_FOLLOW_H
