#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, n4;
		printf("Por favor, digite 4 numeros, e lembre-se de que o segundo deve ser o maior deles\n");
			scanf("%d", &n1);
			scanf("%d", &n2);
			scanf("%d", &n3);
			scanf("%d", &n4);

	if(n2>n1 && n2>n3 && n2>n4){
		printf("%d, ", n2);

			if(n1>=n3 && n1>=n4 && n3>=n4){
			printf("%d, %d, %d", n1, n3, n4);}

			else if(n1>=n3 && n1>=n4 && n4>=n3){
			printf("%d, %d, %d", n1, n4, n3);}

			else if(n3>=n1 && n3>=n4 && n1>=n4){
			printf("%d, %d, %d", n3, n1, n4);}

			else if(n3>=n1 && n3>=n4 && n4>=n1){
			printf("%d, %d, %d", n3, n4, n1);}

			else if(n4>=n1 && n4>=n3 && n3>=n1){
			printf("%d, %d, %d", n4, n3, n1);}

			else if(n4>=n1 && n4>=n3 && n1>=n3){
			printf("%d, %d, %d", n4, n1, n3);}
	}
	else{
		printf("O segundo numero nao e o maior, por favor, refaca.");
	}
	}
