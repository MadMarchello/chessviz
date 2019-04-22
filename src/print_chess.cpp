#include "print_chess.h"
#include <iostream>
using namespace std;

void printchess(char b[][8])
{
    for (int i = 0; i < 8; i++) {
        cout << i + 1 << " ";
        for (int j = 0; j < 8; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    cout << "  a b c d e f g h";
}
