#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	float H, R, C, QLAT, AREA, LITRO;

	printf("Entre com o valor da altura e do raio\n");

	scanf("%f %f", &H, &R);

	AREA = (3.14 * (R * R)) + (2 * 3.14 * R * H);

	LITRO = AREA / 3.0;

	QLAT = LITRO / 5.0;

	C = QLAT * 10.0;

	printf("O Custo da Pintura é de R$%f\n", C);
	printf("O Gasto total de latas é de %f\n", QLAT);

	return 0;
}