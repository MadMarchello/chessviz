#include "chessgame.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Move(char b[][8], int cifra, int cifra1, int bukv, int bukv1)
{
    b[cifra1][bukv1] = b[cifra][bukv];
    b[cifra][bukv] = ' ';
}
int exit_prog(char step[5])
{
    if (step[0] == 'e' && step[1] == 'x' && step[2] == 'i' && step[3] == 't') {
        return 0;
    } else {
        return 1;
    }
}
int correct_input(char step[5])
{
    int count;
    count = exit_prog(step);
    if (count == 0) {
        exit(count);
    }

    int bukv = step[0] - 'a';
    int cifra = step[1] - '0';
    cifra -= 1;
    int bukv1 = step[3] - 'a';
    int cifra1 = step[4] - '0';
    cifra1 -= 1;
    int str = strlen(step);
    printf("%d\n", str);
    printf("%d %d\n", bukv, cifra);
    printf("%d %d \n", bukv1, cifra1);
    if ((bukv > 8) || (cifra > 8) || (cifra1 > 8) || (bukv1 > 8) || str != 5) {
        printf("Incorrect input, please try again\n");
        return 1;
    } else {
        printf("COMPLETE\n");
        return 0;
    }
}

int figure_step_rule(
        int bukv, int cifra, int bukv1, int cifra1, char b[][8], char step[])
{
    int peshka = 0;
    puts("\n");
    printf("%c \n\n", b[cifra][bukv]);

    if (b[cifra][bukv] == 'P') {
        if ((cifra == 6) && (cifra1 == cifra - 1)) {
            if (peshka == 0) {
                peshka = 1;
                return 0;
            } else if (b[cifra + 1][bukv] != ' ') {
                printf("Incorrect input pawn, please try again\n");
                return 1;
            }
        }
        if (cifra1 == cifra - 1 && b[cifra][bukv + 1] != ' ') {
            return 0;
        }
    }
    return 1;
}
void chessgame(char b[][8])
{
    char step[5];
    gets(step);
    int check;
    int bukv = step[0] - 'a';
    int cifra = step[1] - '0';
    cifra -= 1;
    int bukv1 = step[3] - 'a';
    int cifra1 = step[4] - '0';
    cifra1 -= 1;
    printf("koord %d %d\n", bukv, cifra);
    printf("koord_end %d %d \n", bukv1, cifra1);
    printf("%s \n", step);
    // Move(b, cifra, cifra1, bukv, bukv1);
    check = correct_input(step);
    if (check == 0) {
        check = figure_step_rule(bukv, cifra, bukv1, cifra1, b, step);
        if (check == 0) {
            Move(b, cifra, cifra1, bukv, bukv1);
        }
    } else {
        return chessgame(b);
    }
}
