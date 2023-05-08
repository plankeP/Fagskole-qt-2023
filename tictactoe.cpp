#include "TicTacToe.h"

TicTacToe::TicTacToe()
    : board{}, current{Player::X}, lastWinner{Player::None} {}

bool TicTacToe::makeMove(int row, int col) {
    if (board[row][col] == Player::None) {
        board[row][col] = current;
        if (checkWinner()) {
            lastWinner = current;
        }
        current = (current == Player::X) ? Player::O : Player::X;
        return true;
    }
    return false;
}

TicTacToe::Player TicTacToe::getBoardState(int row, int col) const {
    return board[row][col];
}

bool TicTacToe::checkWinner() const {
    // sjekk horisontalt
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != Player::None) {
            return true;
        }
    }

    // Sjekk vertikalt
    for (int i = 0; i < 3; ++i) {
        if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != Player::None) {
            return true;
        }
    }

    // Sjekk på skrått
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != Player::None) {
        return true;
    }
    if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != Player::None) {
        return true;
    }

    return false;
}

