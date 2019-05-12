#include "print_chess.h"
#include <stdio.h>
#include <stdlib.h>
void printchess(char b[][8])
{
    for (int i = 0; i < 8; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 8; j++) {
            printf("%d ", b[i][j]);
        }
        puts("");
    }
    puts("  a b c d e f g");
}
