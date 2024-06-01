#pragma once

const int Size = 3;
char board[Size][Size] = { {' ',' ',' '}, {' ',' ',' '}, {' ',' ',' '} };
char player = 'X';

	void Board();
	void Player();
	bool Move(char,int);
	bool Draw();

