#include "chessgame.h"
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
void Move(char b[][8], int cifra, int cifra1, int bukv, int bukv1)
{
    b[cifra1][bukv1] = b[cifra][bukv];
    b[cifra][bukv] = ' ';
}
int correct_input(string step)
{
    if (step == "exit") {
        cout << "You exited the programm \n";
        exit(0);
    }
    int bukv = step[0] - 'a';
    int cifra = step[1] - '0';
    cifra -= 1;
    int bukv1 = step[3] - 'a';
    int cifra1 = step[4] - '0';
    cifra1 -= 1;
    if ((bukv > 8) || (cifra > 8) || (cifra1 > 8) || (bukv1 > 8)) {
        cout << "Incorrect input, please try again\n";
        return 1;
    } else {
        return 0;
    }
}

void figure_step_rule(
        int bukv, int cifra, int bukv1, int cifra1, char b[][8], string step)
{
    bool peshka = false;
    char pawn = 'P';
    char hod = b[cifra][bukv];
    cout << endl << endl;
    cout << b[cifra][bukv] << endl << endl;

    if (b[cifra][bukv] == 'P') {
        if ((bukv == 2) && (cifra1 == cifra + 2)) {
            if (peshka == false) {
                peshka == true;
                Move(b, cifra, cifra1, bukv, bukv1);
            } else {
                cout << "Incorrect input pawn, please try again\n";
                return chessgame(b);
            }
        }

        if (cifra1 == cifra - 1) {
            Move(b, cifra, cifra1, bukv, bukv1);
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
    correct_input(step);
    if (correct_input == 0) {
        figure_step_rule(bukv, cifra, bukv1, cifra1, b, step);
    } else {
        return chessgame(b);
    }
}
