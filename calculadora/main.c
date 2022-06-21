#include <stdio.h>
#include <stdlib.h>

int main()
{
struct fracao {
int numerador, denominador;
};
float resultado;

struct fracao x;
scanf("%d", &x.numerador);
printf("--\n");
scanf("%d", &x.denominador);
resultado=x.numerador/x.denominador;
printf("resultado = %.2f", resultado);

    return 0;
}
