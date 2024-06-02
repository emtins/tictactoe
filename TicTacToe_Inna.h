#pragma once
#include <iostream>
using namespace std;

bool WinLogic(char);
bool GetRow(string, int&);
bool GetCol(char&);
void GetMove(string, int&, char&);
bool PlayerMove(int, char);
void Game();
