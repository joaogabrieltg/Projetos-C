#include <stdio.h>
#include <stdlib.h>

int main()
{

    int l1, l2, l3;

    printf("\ninsira os lados de um triangulo: ");
    scanf("%d", &l1);
    scanf("%d", &l2);
    scanf("%d", &l3);

    (l2-l3 < l1 < l2+l3 && (l1-l3 < l2 < l1+l3) && (l1-l2 < l3 < l1+l2) && (l1>0) && (l2>0) && (l3>0))?
    printf("o triangulo existe e e um ") : printf("o triangulo nao existe, mas caso existisse seria um ");

    (l1>0)?(l1=l1):(l1=-l1);
    (l2>0)?(l2=l2):(l2=-l2);
    (l3>0)?(l3=l3):(l3=-l3);

    (l1==l2 && l1!=l3)? printf("triangulo isoceles\n"):printf("");
    (l1==l3 && l1!=l2)? printf("triangulo isoceles\n"):printf("");
    (l1==l2 && l2==l3)? printf("triangulo equilatero\n"):printf("");
    (l1!=l2 && l1!=l3)? printf("triangulo escaleno\n"):printf("");

    return 0;
}
