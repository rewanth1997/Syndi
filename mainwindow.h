#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "network.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
    public:
        MainWindow(QWidget *parent = 0);
        ~MainWindow();
    protected:
        void showAliveHosts();
        int ping();

private slots:
        void on_pushButton_clicked();

private:
        Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
