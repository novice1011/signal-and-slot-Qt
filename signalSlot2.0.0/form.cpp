#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void Form::on_pushButtonForm_clicked()
{
    ui->pushButtonForm->setText(QString("I transfer command to MainWindow"));
    emit ok();
}

void Form::changePBname(){
    ui->pushButtonForm->setText(QString("received from MainWindow"));
}

void Form::receiveFromMain(){
    ui->pushButtonForm->setText(QString("received from MainWindow"));
}
