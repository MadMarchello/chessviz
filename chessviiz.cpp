#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

void printchess(char b[8][8]) {
  for (int i = 0; i < 8; i++) {
    cout << i + 1 << " ";
    for (int j = 0; j < 8; j++) {
      cout << b[i][j] << " ";
    }
    cout << endl;
  }
  cout << "  a b c d e f g h";
}
void chessboard(char b[8][8]) {
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      b[i][j] = ' ';
    }
  }

  // blackfigure
  b[0][0] = 'r';
  b[0][1] = 'n';
  b[0][2] = 'b';
  b[0][3] = 'q';
  b[0][4] = 'k';
  b[0][5] = 'b';
  b[0][6] = 'n';
  b[0][7] = 'r';
  b[1][0] = 'p';
  b[1][1] = 'p';
  b[1][2] = 'p';
  b[1][3] = 'p';
  b[1][4] = 'p';
  b[1][5] = 'p';
  b[1][6] = 'p';
  b[1][7] = 'p';
  // whitefigure
  b[7][0] = 'R';
  b[7][1] = 'N';
  b[7][2] = 'B';
  b[7][3] = 'Q';
  b[7][4] = 'K';
  b[7][5] = 'B';
  b[7][6] = 'N';
  b[7][7] = 'R';
  b[6][0] = 'P';
  b[6][1] = 'P';
  b[6][2] = 'P';
  b[6][3] = 'P';
  b[6][4] = 'P';
  b[6][5] = 'P';
  b[6][6] = 'P';
  b[6][7] = 'P';
}
int main() {
  char b[8][8];
  chessboard(b);
  printchess(b);
  return 0;
}
