#include "chessgame.h"
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
void figure_step_rule(
        int bukv, int cifra, int bukv1, int cifra1, char b[][8], string step)
{
    bool peshka;
    char pawn = 'P';
    char hod = b[cifra][bukv];
    cout << endl << endl;
    cout << b[cifra][bukv] << endl << endl;

    if (step == "exit") {
        cout << "You exited the programm \n";
        exit(0);
    }
    if ((bukv > 8) || (cifra > 8) || (cifra1 > 8) || (bukv1 > 8)) {
        cout << "Incorrect input, please try again\n";
        return chessgame(b);
    }
    if (b[cifra][bukv] == 'P') {
        if (cifra1 == cifra - 1) {
            b[cifra1][bukv1] = b[cifra][bukv];
            b[cifra][bukv] = ' ';
        }
    }
}
void chessgame(char b[][8])
{
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
    cout << "koord " << bukv << " " << cifra << endl;
    cout << "koord_end " << bukv1 << cifra1 << endl;
    cout << step << endl;
    figure_step_rule(bukv, cifra, bukv1, cifra1, b, step);
}
