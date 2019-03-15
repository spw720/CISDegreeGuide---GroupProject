#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "database.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow();
    Database db;

private slots:
    void on_ENTER_CLASS_clicked();

    void on_NEXT_TERM_clicked();

    void on_REMAINING_clicked();

    void on_TRACK_PATH_clicked();

    void on_SUBJECT_currentIndexChanged(const QString &arg1);

    void on_DELETE_COURSE_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
