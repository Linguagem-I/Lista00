#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int anos, cigDia;
	float preco, resultado;

	printf("\n\nDigite o numero de Anos de dependencia:\n");
	scanf("%d", &anos);

	printf("Digite o numero cigarros fumados por dia:\n");
	scanf("%d", &cigDia);

	printf("Digite o preco da carteira:\n");
	scanf("%f", &preco);

	resultado = ((anos * 365) * cigDia) * preco;

	printf("Foi gasto R$%f em cigarros!\n\n", resultado);

	return 0;
}