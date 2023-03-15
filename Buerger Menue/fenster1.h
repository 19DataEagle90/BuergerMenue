#ifndef FENSTER1_H
#define FENSTER1_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_pushButton_clicked();





    void on_Next_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // FENSTER1_H
