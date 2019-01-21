#include "pch.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//Draws the playerboard
void drawboard(int board[4][4]) {
	for (int i = 0; i < 4; i++) {
		cout << " -----------------\n";
		for (int j = 0; j < 4; j++) {
			cout << " | " << board[i][j];
			if (j == 3) cout << " |\n";
		}
	}
	cout << " -----------------\n\n\n";
}

//Tests to see if selected character can be prosessed
bool aCharacter(char move) {
	switch (move)
	{
	case 'w': return true;
	case 'a': return true;
	case 's': return true;
	case 'd': return true;
	case 'x': return true;

	default: return false;
		break;
	}
}


//sets empty square to 2 every time player makes a move.
void spawnNew(int board[4][4]) {

	bool assigned = false;
	int x, y;
	while (!assigned)
	{
		x = rand() % 4;
		y = rand() % 4;

		if (board[x][y] == 0) assigned = true;
	}
	board[x][y] = 2;
}

bool gameOver(int board[4][4]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (board[i][j] == 0) return false;
		}
	}
	cout << "Game over!\n";
	return true;
}

//Performes chosen move
void moveboard(int board[4][4], char move) {

	int slide;

	switch (move)
	{
	case 'd':
		for (int i = 0; i < 4; i++) {
			for (int j = 2; j >= 0; j--) {
				slide = j + 1;
				//If square is not 0, test for movement
				if (board[i][j] != 0) {
					//If next square is 0, move and make current square 0
					while (board[i][slide] == 0 && slide < 4) {
						board[i][slide] = board[i][slide - 1];
						board[i][slide - 1] = 0;
						slide++;
					}
					//If next square is equal to current, double it and make current 0
					if (board[i][slide - 1] == board[i][slide]) {
						board[i][slide] *= 2;
						board[i][slide - 1] = 0;
					}
				}
			}
		}
		break;

	case 'a':
		for (int i = 0; i < 4; i++) {
			for (int j = 1; j < 4; j++) {
				slide = j - 1;
				if (board[i][j] != 0) {
					while (board[i][slide] == 0 && slide >= 0) {
						board[i][slide] = board[i][slide + 1];
						board[i][slide + 1] = 0;
						slide--;
					}
					if (board[i][slide + 1] == board[i][slide]) {
						board[i][slide] *= 2;
						board[i][slide + 1] = 0;
					}
				}
			}
		}
		break;

	case 'w':
		for (int i = 1; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				slide = i - 1;
				if (board[i][j] != 0) {
					while (board[slide][j] == 0 && slide >= 0) {
						board[slide][j] = board[slide + 1][j];
						board[slide + 1][j] = 0;
						slide--;
					}
					if (board[slide + 1][j] == board[slide][j]) {
						board[slide][j] *= 2;
						board[slide + 1][j] = 0;
					}
				}
			}
		}
		break;

	case 's':
		for (int i = 2; i >= 0; i--) {
			for (int j = 0; j < 4; j++) {
				slide = i + 1;
				if (board[i][j] != 0) {
					while (board[slide][j] == 0 && slide < 4) {
						board[slide][j] = board[slide - 1][j];
						board[slide - 1][j] = 0;
						slide++;
					}
					if (board[slide - 1][j] == board[slide][j]) {
						board[slide][j] *= 2;
						board[slide + 1][j] = 0;
					}
				}
			}
		}
		break;
	}
}


int main()
{
	srand(time(NULL));

	//Initialize 2d array and give all indexes value 0.
	int board[4][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			board[i][j] = 0;
		}
	}


	
	char move = '0';
	int x, y;

	x = rand() % 4;
	y = rand() % 4;
	board[x][y] = 2;

	while (move != 'x')
	{
		system("CLS");

		//Testing purposes
		cout << "You selected " << move << endl;

		drawboard(board);
		cout << "Select direction (w,a,s,d) or press 'x' to exit\n\n";
		move = _getch();
		while (!aCharacter(move))
		{
			cout << "Unassigned character\n";
			move = _getch();
		}

		//Performes chosen move
		moveboard(board, move);
		if (gameOver(board)) {
			break;
		}
		spawnNew(board);
	}
	
	
	return 0;
}