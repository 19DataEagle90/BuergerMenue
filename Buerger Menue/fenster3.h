#ifndef FENSTER3_H
#define FENSTER3_H

#include <QMainWindow>

namespace Ui {
class fenster3;
}

class fenster3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit fenster3(QWidget *parent = nullptr);
    ~fenster3();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::fenster3 *ui;
};

#endif // FENSTER3_H
