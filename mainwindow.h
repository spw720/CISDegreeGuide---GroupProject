#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_ENTER_CLASS_clicked();

private:
    Ui::MainWindow *ui;

//private slots:
//    void AddClassPressed();
//    void NextTermPressed();
//    void RequiredPressed();
//    void PathsPressed();
};

#endif // MAINWINDOW_H
