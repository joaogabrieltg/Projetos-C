#include <stdio.h>
#include <stdlib.h>

int main()
/**4. Fa�a um c�digo em C que verifica e informa
 *se um n�mero informado pelo usu�rio � m�ltiplo de
 *dois outros n�meros informados pelo usu�rio.
 */

{
    int n1, n2, n3;
    printf("informe tres numeros, verei se o primeiro e multiplo dos outros dois\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1%n2==0 && n1%n3==0){
        printf("%d e multiplo de %d e %d", n1, n2, n3);
    }
   else if(n1%n2==0 && n1%n3!=0){
        printf("%d e multiplo de %d mas nao de %d", n1, n2, n3);
    }
    else if(n1%n2!=0 && n1%n3==0){
        printf("%d e multiplo de %d mas nao de %d", n1, n3, n2);
    }
    else{
        printf("%d nao e multiplo de %d nem de %d", n1, n3, n2);
    }
    return 0;
}
