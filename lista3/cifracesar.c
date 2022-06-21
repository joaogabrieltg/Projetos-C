#include <stdio.h>
#include <stdlib.h>
int main()
{
    char texto[200], cifra[200];
    int  pos;
    scanf("%s", texto);

    pos = 0;
    while(texto[pos] != 0)
    {
        cifra[pos] = texto[pos] + 3;
        if((texto[pos] + 3) > 122 && (texto[pos] + 3) < 126)
        {
            cifra[pos] -=26;
        }
        if((texto[pos] + 3) > 57 && (texto[pos] + 3) < 61)
        {
            cifra[pos] -=9;
        }
        pos++;
    }
    cifra[pos] = 0;
    printf("%s", cifra);

    printf("\n");
    return 0;
}
