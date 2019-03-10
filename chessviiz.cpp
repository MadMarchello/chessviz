#include <stdlib.h>
#include <stdio.h>
#include <iostream>
const int z = 9;
using namespace std;

void cleanchess(char b[z][z])
{
    for(int i = 0; i <= 8; i++){
        for(int j = 0; j <= 8; j++){
            b[i][j] = ' ';
		}
	}
}

void printchess(char b[z][z])
{
	for(int i = 0; i <= 8; i++){
		for(int j = 0; j <= 8; j++){
			cout << b[i][j] << " ";
		}
			cout << endl;
	}
}
void chessboard(char b[z][z])
{
	char g = '8', y = 'a';
	for(int i = 0, j = 1; i < z - 1; i++, j++){
		b[i][0] = g;
		g--; 
		b[8][j] = y;
		y++;
	}
	//blackfigure
	b[0][1] = 'r';
	b[0][2] = 'n';
	b[0][3] = 'b';
	b[0][4] = 'q';
	b[0][5] = 'k';
	b[0][6] = 'b';
	b[0][7] = 'n';
	b[0][8] = 'r';
	b[1][1] = 'p';
	b[1][2] = 'p';
	b[1][3] = 'p';
	b[1][4] = 'p';
	b[1][5] = 'p';
	b[1][6] = 'p';
	b[1][7] = 'p';
	b[1][8] = 'p';
	//whitefigure
	b[7][1] = 'R';
	b[7][2] = 'N';
	b[7][3] = 'B';
	b[7][4] = 'Q';
	b[7][5] = 'K';
	b[7][6] = 'B';
	b[7][7] = 'N';
	b[7][8] = 'R';
	b[6][1] = 'P';
	b[6][2] = 'P';
	b[6][3] = 'P';
	b[6][4] = 'P';
	b[6][5] = 'P';
	b[6][6] = 'P';
	b[6][7] = 'P';
	b[6][8] = 'P';
}
int main()
{	
	
	char b[z][z];
	
	cleanchess(b);
	chessboard(b);
	printchess(b);
}
