#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int tetris[4][2];
int a, b;
char bloco = 177;

for(a=0;a<4; a++){
    for(b=0; b<2; b++){
    printf("%c", bloco);
    }
    printf("\n");
    }
     return 0;
}
