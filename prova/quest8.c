#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int opt;
    printf("BEM VINDO!\nESCOLHA COM AS TECLAS DE 1 A 3\n1-Jogar\n2-Opcoes\n3-Sair\n");
    scanf("%d", &opt);
    switch(opt)
    {
    case 1:
        printf("O jogo nao esta pronto, volte mais tarde...\n");
        break;
    case 2:
        printf("ainda nao temos opcoes, volte mais tarde...\n");
        break;
    case 3:
        printf("pressione ENTER, e a execucao se encerrara!\n");
        break;
    default:
        printf("creio que essa opcao nao esteja no menu, tente denovo");

        return 0;
    }

}


