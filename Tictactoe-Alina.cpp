#include <iostream>
#include <string>
#include <conio.h>
#include <Windows.h>
#include "TictactoeAlina.h"
using namespace std;

const int Size = 3;
char board[Size][Size] = { {' ',' ',' '}, {' ',' ',' '}, {' ',' ',' '} };
char player = 'X';


void Board() {
    cout << "  A  B  C" << endl;
    for (int i = 0; i < Size; i++) {
        cout << i + 1 << " ";
        for (int j = 0; j < Size; j++) {
            cout << board[i][j];
            if (j < Size - 1) cout << " |";
        }
        cout << endl;
        if (i < Size - 1) cout << "  --+--+--" << endl;
    }
    cout << endl;
}

void Player() {
    if (player == 'X') {
        player = 'O';
    }
    else {
        player = 'X';
    }
}

bool Move(char col, int row) {
    int c = col - 'A';
    int r = row - 1;
    if (c < 0 || c >= Size || r < 0 || r >= Size || board[r][c] == 'X' || board[r][c] == 'O') {
        cout << "This place is taken" << endl;
        return false;
    }
    board[r][c] = player;
    return true;
}

bool Draw() {
    for (int i = 0; i < Size; i++) {
        for (int j = 0; j < Size; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false;
            }
        }
    }
    return true;
}



