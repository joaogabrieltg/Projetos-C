#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, indice, vezes;
    scanf("%d %d %d", &n1, &indice, &vezes);
    system("cls");
    printf("%d\n", n1);
    vezes--;
    while(vezes>0){
    n1=n1*indice;
    printf("%d\n", n1);

    vezes--;
    }

}
