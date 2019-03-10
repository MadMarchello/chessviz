#include <stdlib.h>
#include <stdio.h>
#include <iostream>
const int z = 9;
using namespace std;

void cleanchess(char b[z][z])
{
    for(int i = 0; i <= 8; i++){
        for(int j = 0; j <= 8; j++){
            b[i][j] = ' ';
		}
	}
}

