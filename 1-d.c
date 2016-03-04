#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int i, j, k, w;

	printf("\n\nEXPRESSAO: w = 2 * i percentagem 5 * 4 + (j-3) / (k + 2)\n");

	printf("Valor de I:\n");
	scanf("%d", &i);

	printf("Valor de J:\n");
	scanf("%d", &j);

	printf("Valor de K:\n");
	scanf("%d", &k);

	w = 2 * i%5 * 4 + (j-3) / (k+2);

	printf("W = %d\n\n", w);

}