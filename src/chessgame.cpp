#include "chessgame.h"
#include <iostream>
#include <string>
using namespace std;
void chessgame(char b[][8]) {
  string step;
  cout << endl;
  cout << "Please, step youre figure: " << endl;
  cin >> step;
  int bukv = step[0] - 'a';
  int cifra = step[1] - '0';
  cifra -= 1;
  int bukv1 = step[3] - 'a';
  int cifra1 = step[4] - '0';
  cifra1 -= 1;
  char temp;
  cout << "koord " << bukv << " " << cifra << endl;
  cout << "koord_end " << bukv1 << cifra1 << endl;

  temp = b[cifra][bukv];
  b[cifra][bukv] = b[cifra1][bukv1];
  b[cifra1][bukv1] = temp;
  cout << endl;
}
