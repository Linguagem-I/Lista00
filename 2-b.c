#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	
	printf("\n\nALGORITMO PARA CALCULO DE MEDIA FINAL\n");

	float P1, P2, P3, MF;

	printf("Entre com os valores das parciais P1 P2 P3\n");

	scanf("%f %f %f", &P1, &P2, &P3);

	MF = (P1+P2+P3)/3.0;

	printf("A Media Final e: %f\n\n", MF);

	return 0;
}