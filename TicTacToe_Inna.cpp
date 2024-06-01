#include"TicTacToe_Inna.h"
#include"TictactoeAlina.h"

bool GetRow(string player, int& row)
{
    cout << player << "\nenter line coordinates (1-3):     ";
    cin >> row;
    if (row != 1 && row != 2 && row != 3)
        return false;
    return true;
}
bool GetCol(char& col)
{
    cout << "enter column coordinates (A-C):    ";
    cin.ignore();
    col = getchar();
    col = toupper(col);
    if (col != 'A' && col != 'B' && col != 'C')
        return false;
    return true;
}

void GetMove(string player, int& row, char& col)
{
    while (!GetRow(player, row));
    while (!GetCol(col));
}
bool PlayerMove(int playerNumber, char mark)
{
    int row1;
    char col1;
    GetMove(playerNumber == 1 ? "Player 1:" : "Player 2:", row1, col1);
    player = mark;
    while (!Move(col1, row1))
    {
        GetMove(playerNumber == 1 ? "Player 1:" : "Player 2:", row1, col1);
    }
    system("cls");
    Board();
    return WinLogic(mark);
}
