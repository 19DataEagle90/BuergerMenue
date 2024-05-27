#include "fenster3.h"
#include "ui_fenster3.h"
#include "fenster2.h"

fenster3::fenster3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::fenster3)
{
    ui->setupUi(this);
}

fenster3::~fenster3()
{
    delete ui;
}

void fenster3::on_pushButton_clicked()
{
    close();
}


void fenster3::on_pushButton_2_clicked()
{
    fenster* myfenster=new fenster(this);
    myfenster->show();
}

