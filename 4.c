#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int num, espacos, i, j;

	printf("\n\nDigite um numero ímpar\n");
	scanf("%d", &num);

	if ((num % 2) != 0){
		for (espacos = 0; espacos <= (num/2); espacos++){
			
			for (j = 0; j < espacos; j++){
				printf(" ");
			}

			for (i = j+1; i <= (num-j); i++){
				printf("%d", i);
			}

			printf("\n");
		}
	} else{
		printf("Voce digitou um numero PAR!!!");
	}

	return 0;
}