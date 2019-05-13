#include "chessboard.h"
#include "chessgame.h"
#include "print_chess.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char b[8][8];
    chessboard(b);
    printchess(b);
    while (1) {
        chessgame(b);
        printchess(b);
    }
    return 0;
}
