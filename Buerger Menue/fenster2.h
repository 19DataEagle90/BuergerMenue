#ifndef FENSTER2_H
#define FENSTER2_H

#include <QMainWindow>

namespace Ui {
class fenster;
}

class fenster : public QMainWindow
{
    Q_OBJECT

public:
    explicit fenster(QWidget *parent = nullptr);
    ~fenster();

private slots:
    void on_pushButton_clicked();

private:
    Ui::fenster *ui;
};

#endif // FENSTER2_H
