
#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <array>

class TicTacToe {
public:
    enum class Player { None, X, O };

    TicTacToe();

    Player currentPlayer() const { return current; }
    bool makeMove(int row, int col);
    Player winner() const { return lastWinner; }
    Player getBoardState(int row, int col) const;

private:
    std::array<std::array<Player, 3>, 3> board;
    Player current;
    Player lastWinner;

    bool checkWinner() const;
};

#endif // TICTACTOE_H
