#include <stdio.h>
#include <stdlib.h>

/**
O modelo de von neumann admite 4 acoes de manipulacao de memoria, sao elas:
declaracao de variavel
citacao ao espaco
fim do escopo
**/
int main()
{
    int a;/*declaracao de variavel*/
    a=10;/*atribuicao*/
    printf("%d", a);/*citacao da variavel*/
return 0;/*fim da funcao*/
}


