#include <stdio.h>
#include <stdlib.h>

/**
 * 1. Implemente um programa na Linguagem C que recebe do usuário dois valores de ponto
 * flutuante representando o comprimento e a largura de uma sala retangular e que permite
 * inverter as entradas, imprimindo os valores de forma invertida.
 */

int main()
{
    float comp, lar, aux=0;
    char resposta;
    printf("favor inserir dois valores, primeiro o comprimento, e entao a largura\n");
    scanf("%f\n%f", &comp, &lar);
    printf("seus valores sao %.2f de comprimento e %.2f de largura\ndeseja inverter esses valores?(responda apenas com 's' ou 'n')\n", comp, lar);
    scanf("%s", &resposta);
system("cls");
    if(resposta == 's'){
        printf("seus valores eram %.2f de comprimento e %.2f de largura\n", comp, lar);
        aux=lar;
        lar=comp;
        comp=aux;
        printf("agora sao %.2f de comprimento e %.2f de largura\n", comp, lar);
    }
    else if(resposta == 'n'){
        printf("seus valores sao %.2f de comprimento e %.2f de largura\n", comp, lar);
    }
    else{
        printf("a resposta nao foi dada corretamente, favor reformule");
    }

    return 0;
}
