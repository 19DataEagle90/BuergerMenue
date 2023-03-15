#include "fenster1.h"
#include "ui_mainwindow.h"
#include "fenster2.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if (ui->radioButton->isChecked())
            ui->label_5->setText("Cheeseburger");
    if (ui->radioButton_5->isChecked())
            ui->label_5->setText("Cheeseburger mit Extra Käse");
    if (ui->radioButton_6->isChecked())
            ui->label_5->setText("Cheeseburger mit Extra Zwiebeln");
    if (ui->radioButton_7->isChecked())
            ui->label_5->setText("Cheeseburger mit Extra Ketchup");
    if (ui->radioButton_8->isChecked())
            ui->label_5->setText("Cheeseburger mit Extra Majo");

    if (ui->radioButton_2->isChecked())
            ui->label_5->setText("Hamburger");
    if (ui->radioButton_5->isChecked())
            ui->label_5->setText("Hamburger mit Extra Käse");
    if (ui->radioButton_6->isChecked())
            ui->label_5->setText("Hamburger mit Extra Zwiebeln");
    if (ui->radioButton_7->isChecked())
            ui->label_5->setText("Hamburger mit Extra Ketchup");
    if (ui->radioButton_8->isChecked())
            ui->label_5->setText("Hamburger mit Extra Majo");


    if (ui->radioButton_3->isChecked())
             ui->label_5->setText("Doppel - Cheeseburger");
    if (ui->radioButton_9->isChecked())
             ui->label_5->setText("Doppel - Cheeseburger mit Extra Fleisch");
    if (ui->radioButton_6->isChecked())
             ui->label_5->setText("Doppel - Cheeseburger mit Extra Zwiebeln");
    if (ui->radioButton_7->isChecked())
             ui->label_5->setText("Doppel - Cheeseburger mit Extra Ketchup");
    if (ui->radioButton_8->isChecked())
             ui->label_5->setText("Doppel - Cheeseburger mit Extra Majo");


    if (ui->radioButton_4->isChecked())
             ui->label_5->setText("Pommes");
    if (ui->radioButton_9->isChecked())
             ui->label_5->setText("Pommes mit Extra Fleisch ist leider nicht im Angebot");

}










void MainWindow::on_Next_clicked()
{
    fenster* myfenster=new fenster(this);
    myfenster->show();
}

