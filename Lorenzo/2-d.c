#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	
	int x, y;

	float z;

	printf("Entre com o valor de x:\n");
	scanf("%d", &x);
	printf("X ao cubo = %d\n\n", x*x*x);

	printf("Entre com o valor de y:\n");
	scanf("%d", &y);
	printf("O resultado de x+y = %d\n\n", x+y);

	z = x+y;

	printf("%f", z);

	z = (int)(z);

	printf("%f", z);

	z = z + 1;

	x = (y + (int)(z)) % 2;	

	printf("%d\n", x);

	return 0;
}