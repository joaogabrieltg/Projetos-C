#include <stdio.h>
#include <stdlib.h>

int main()
{
    short i=0, l=127;

    do
    {
        printf("| %03d | %c |\n", i, i);
        i++;
    }
    while(i<=l);


return 0;
}
