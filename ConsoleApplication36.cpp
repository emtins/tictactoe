#include <iostream>
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

