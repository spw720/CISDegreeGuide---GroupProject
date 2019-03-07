#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>

//QString class_list[48][2] = {{"CIS"," 210"},{"MTH"," 251"}};
typedef QVector<QString> inner;
typedef QVector<inner> outer;
outer v2(3, inner(5));

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ENTER_CLASS_clicked()
{
    v2[0][0] = ui->SUBJECT->currentText();
    v2[0][1] = ui->COURSE_NUM->currentText();
    ui->CLASS_LIST->addItem(v2[0][0] + " " + v2[0][1]);
}
