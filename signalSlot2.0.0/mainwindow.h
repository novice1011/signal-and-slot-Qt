#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <form.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Form widgetButton;
public slots:
    void receiveOk();

signals:
    void runOnPushButton();
private slots:
    void on_pushButtonMain_clicked();
};

#endif // MAINWINDOW_H
