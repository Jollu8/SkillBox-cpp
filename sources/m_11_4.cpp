//
// Created by Jollu Emil
//


#include <iostream>
#include <vector>

std::string checkTicTacToe(const std::vector<std::string>& board) {
    int xCount = 0, oCount = 0;
    for (const auto& row : board) {
        for (char c : row) {
            if (c == 'X') ++xCount;
            else if (c == 'O') ++oCount;
        }
    }

    if (oCount > xCount || xCount > oCount + 1) return "Incorrect";

    bool xWin = false, oWin = false;
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            if (board[i][0] == 'X') xWin = true;
            else if (board[i][0] == 'O') oWin = true;
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            if (board[0][i] == 'X') xWin = true;
            else if (board[0][i] == 'O') oWin = true;
        }
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        if (board[0][0] == 'X') xWin = true;
        else if (board[0][0] == 'O') oWin = true;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        if (board[0][2] == 'X') xWin = true;
        else if (board[0][2] == 'O') oWin = true;
    }

    if (xWin && oWin) return "Incorrect";
    if (xWin && xCount == oCount) return "Incorrect";
    if (oWin && xCount > oCount) return "Incorrect";

    if (xWin) return "Petya won";
    if (oWin) return "Vanya won";

    return "Nobody";
}