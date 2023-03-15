#include "fenster2.h"
#include "ui_fenster.h"

fenster::fenster(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::fenster)
{
    ui->setupUi(this);
}

fenster::~fenster()
{
    delete ui;
}

void fenster::on_pushButton_clicked()
{
    close();
}

