#include <stdio.h>
#include <stdlib.h>

/**
 *3. Escreva um código que defina uma função que recebe uma data (no formato DD/09/2020),
 *verifica se está correta e armazene os valores em variáveis globais. Neste programa crie
 *duas funções chamadas ontem e amanha que devem mudar a data adequadamente. Faça uma
 *função main para demonstrar o uso dessas funções.
 */
int amanha(int n){
 return n+1;
}
int ontem(int n){
 return n-1;
}


int main()
{
    int dia;
    printf("selecione o dia de setembro\n");
    scanf("%d", &dia);
    system("cls");
    printf("selecione o dia de setembro\n%d/09/2020 foi o dia selecionado\n\n", dia);

    if (dia==30){
        printf("amanha e dia 01/10/2020 e ontem foi %d/09/2020\n", ontem(dia));
    }
    else if (dia==1){
        printf("amanha e dia %d/10/2020 e ontem foi 31/08/2020\n", amanha(dia));
    }
    else{
        printf("amanha e dia %d/10/2020 e ontem foi %d/09/2020\n", amanha(dia), ontem(dia));
    }

    return 0;
}
