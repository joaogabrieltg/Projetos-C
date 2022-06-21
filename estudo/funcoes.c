#include <stdio.h>
#include <string.h>
#include "funcoes.h"

void tabelaASCII()
{
    unsigned char c;
    printf("Código  Letra\n");
    printf("-------------\n");
    for (c = 32; c < 255; c++)
        printf(" %4d     %c\n", c, c);
}


