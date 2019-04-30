#include "chessgame.h"
#include <iostream>
#include <string>
using namespace std;
void figure_step_rule(int bukv, int cifra, int bukv1, int cifra1, char b[][8])
{
    bool peshka;
    if ((bukv > 8) || (cifra > 8) || (cifra1 > 8) || (bukv1 > 8)) {
        cout << "Incorrect input, please try again\n";
        return chessgame(b);
    }
    if (b[bukv][cifra] == 'P') {
        if ((bukv1 == bukv + 1) && (cifra1 == cifra)) {
            if (b[bukv1][cifra1] == ' ') {
                b[cifra1][bukv1] = b[cifra][bukv];
                b[cifra][bukv] = ' ';
            } else {
                cout << "Incorrect input, please try again\n";
                return chessgame(b);
            }
        }
        if ((bukv1 == bukv + 1) && (cifra1 = cifra + 1)) {
            b[cifra1][bukv1] = b[cifra][bukv];
            b[cifra][bukv] = ' ';
        }
    }
    if (b[bukv][cifra] == 'R') {
    }
    if (b[bukv][cifra] == 'N') {
    }
    if (b[bukv][cifra] == 'B') {
    }
    if (b[bukv][cifra] == 'Q') {
    }
    if (b[bukv][cifra] == 'K') {
    }
    // white
    if (b[bukv][cifra] == 'p') {
    }
    if (b[bukv][cifra] == 'r') {
    }
    if (b[bukv][cifra] == 'n') {
    }
    if (b[bukv][cifra] == 'b') {
    }
    if (b[bukv][cifra] == 'q') {
    }
    if (b[bukv][cifra] == 'k') {
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
    figure_step_rule(bukv, cifra, bukv1, cifra1, b);
}
