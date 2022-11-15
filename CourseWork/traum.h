#ifndef TRAUM_H
#define TRAUM_H

#include <QMainWindow>

namespace Ui {
class Traum;
}

class Traum : public QMainWindow
{
    Q_OBJECT

public:
    explicit Traum(QWidget *parent = nullptr);
    ~Traum();
    int count;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Traum *ui;
};

#endif // TRAUM_H
