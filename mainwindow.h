
#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QPushButton>
#include "TicTacToe.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

private slots:
    void buttonClicked();




private:
    Ui::MainWindow *ui;
    TicTacToe game;
    QPushButton* buttons[9];

    void updateUI();
};

#endif // MAINWINDOW_H
