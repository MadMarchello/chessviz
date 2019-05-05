#ifndef CHESSGAME_H
#define CHESSGAME_H
#include <string>
using namespace std;
void chessgame(char b[][8]);
void figure_step_rule(
        int bukv, int cifra, int bukv1, int cifra1, char b[][8], string step);
void Move(char b[][8], int cifra, int cifra1, int bukv, int bukv1);
#endif
