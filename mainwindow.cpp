
#include "MainWindow.h"
#include "QGridLayout"
#include "QMessageBox"
#include "QPushButton"
#include "tictactoe.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) {
    QWidget *centralWidget = new QWidget(this);
    QGridLayout *layout = new QGridLayout(centralWidget);

    for (int i = 0; i < 9; ++i) {
        buttons[i] = new QPushButton(" " + QString::number(i + 1), this);
        buttons[i]->setFixedSize(100, 100);
        layout->addWidget(buttons[i], i / 3, i % 3);

        connect(buttons[i], &QPushButton::clicked, [this, i]() {
            if (game.makeMove(i / 3, i % 3)) {
                updateUI();
            }
        });
    }

    setCentralWidget(centralWidget);
}




void MainWindow::buttonClicked() {
    // not used because we're using lambda functions


}

void MainWindow::updateUI() {
    // Update the buttons based on the TicTacToe game state
    for (int i = 0; i < 9; ++i) {

            TicTacToe::Player player = game.getBoardState(i / 3, i % 3);
            if (player == TicTacToe::Player::X) {
                buttons[i]->setText("X");
                buttons[i]->setDisabled(true);
            } else if (player == TicTacToe::Player::O) {
                buttons[i]->setText("O");
                buttons[i]->setDisabled(true);
            } else {
                buttons[i]->setText(" " + QString::number(i + 1));
                buttons[i]->setEnabled(true);
            }

    }

    // sjekk on noen har vunnet og annonser vinneren
    TicTacToe::Player winner = game.winner();
    if (winner != TicTacToe::Player::None) {
        QString winnerName = (winner == TicTacToe::Player::X) ? "Player 1 (X)" : "Player 2 (O)";
        QMessageBox::information(this, "Game Over", winnerName + " wins!");
    }
}








