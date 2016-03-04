#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int a, b, c, d, x;

	printf("\n\nEXPRESSAO: x - (a+b) * c / d\n");

	printf("Valor de X:\n");
	scanf("%d", &x);

	printf("Valor de A:\n");
	scanf("%d", &a);

	printf("Valor de B:\n");
	scanf("%d", &b);

	printf("Valor de C:\n");
	scanf("%d", &c);

	printf("Valor de D:\n");
	scanf("%d", &d);

	printf("Resultado = %d\n\n", x - (a+b) * c / d);

}