#include "chessgame.h"
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Move(char b[][8], int cifra, int cifra1, int bukv, int bukv1)
{
    b[cifra1][bukv1] = b[cifra][bukv];
    b[cifra][bukv] = ' ';
}
int correct_input(char step[])
{
    if (strcmp(step, "exit") == 0) {
        printf( "You exited the programm \n";
        exit(0);
    }
    int bukv = step[0] - 'a';
    int cifra = step[1] - '0';
    cifra -= 1;
    int bukv1 = step[3] - 'a';
    int cifra1 = step[4] - '0';
    cifra1 -= 1;
    if ((bukv > 8) || (cifra > 8) || (cifra1 > 8) || (bukv1 > 8)) {
        printf("Incorrect input, please try again\n");
        return 1;
    } else {
        return 0;
    }
}

void figure_step_rule(
        int bukv, int cifra, int bukv1, int cifra1, char b[][8], char step[])
{
    bool peshka = false;
    char pawn = 'P';
    char hod = b[cifra][bukv];
    puts("\n");
    printf("%d \n\n", b[cifra][bukv]);

    if (strcmp(b[cifra][bukv], 'P') == 0) {
        if ((bukv == 2) && (cifra1 == cifra + 2)) {
            if (peshka == false) {
                peshka == true;
                Move(b, cifra, cifra1, bukv, bukv1);
            } else {
                printf( "Incorrect input pawn, please try again\n";
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
    char step[5];
    fgets(step, 6, stdin);

    int bukv = step[0] - 'a';
    int cifra = step[1] - '0';
    cifra -= 1;
    int bukv1 = step[3] - 'a';
    int cifra1 = step[4] - '0';
    cifra1 -= 1;
    printf("koord %d %d\n", bukv, cifra);
    printf("koord_end %d %d \n", bukv1, cifra1);
    printf("%d ", step);
    correct_input(step);
    if (correct_input == 0) {
        figure_step_rule(bukv, cifra, bukv1, cifra1, b, step);
    } else {
        return chessgame(b);
    }
}
