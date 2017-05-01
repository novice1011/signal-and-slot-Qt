#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ///new way to make signal and slot
    connect(this, &MainWindow::runOnPushButton, ui->widget, &Form::receiveFromMain);
    connect(ui->widget, &Form::ok, this, &MainWindow::receiveOk);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::receiveOk(){
    ui->pushButtonMain->setText("received from Form");
}

void MainWindow::on_pushButtonMain_clicked()
{
    ui->pushButtonMain->setText("I transfer command to Form");
    ///direct access to function, this function is created to access private variable Ui::Form *ui;
    ui->widget->changePBname();
    ///OR use the slot and signal
//    emit runOnPushButton();

}
