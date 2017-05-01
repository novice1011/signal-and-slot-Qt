#ifndef FORM_H
#define FORM_H

#include <QWidget>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = 0);
    ~Form();
    void changePBname();        ///this function is created to access private variable Ui::Form *ui;

private:
    Ui::Form *ui;

public slots:
    void receiveFromMain();
signals:
    void ok();
private slots:
    void on_pushButtonForm_clicked();
};

#endif // FORM_H
