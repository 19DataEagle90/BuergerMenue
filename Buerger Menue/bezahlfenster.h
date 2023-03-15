#ifndef BEZAHLFENSTER_H
#define BEZAHLFENSTER_H

#include <QMainWindow>

namespace Ui {
class MainWindow2;
}

class MainWindow2 : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow2(QWidget *parent = nullptr);
    ~MainWindow2();


private:
    Ui::MainWindow2 *ui;
};

#endif // BEZAHLFENSTER_H
