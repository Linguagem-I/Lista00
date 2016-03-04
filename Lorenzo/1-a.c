#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int a, b, c, d;

	printf("\n\nEXPRESSAO: d = a + b * c\n");

	printf("Valor de A:\n");
	scanf("%d", &a);

	printf("Valor de B:\n");
	scanf("%d", &b);

	printf("Valor de C:\n");
	scanf("%d", &c);

	d = a + (b * c);
	printf("d = %d\n\n", d);

}