#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	
	char tv;
	int conv = 0, ct = 0, cb = 0, cr = 0;
	float pt, pb, pr;

	do {
		printf("\n\n(T)into\n");
		printf("(B)ranco\n");
		printf("(R)ose\n");
		printf("(F)im\n");

		printf("Entre com a opcao\n");
		scanf("%c", &tv);

		if (tv != 'f'){
			conv++;
			switch(tv){
				case 't': ct++; break;
				case 'b': cb++; break;
				case 'r': cr++; break;
				default: conv = conv - 1;
			}
		}
		
	} while (tv != 'f');

	if (conv > 0){
		pt = (ct * 100) / conv;
		pb = (cb * 100) / conv;
		pr = (cr * 100) / conv;

		printf("Porcentagem de Tintos = %f\n", pt);
		printf("Porcentagem de Brancos = %f\n", pt);
		printf("Porcentagem de Roses = %f\n\n", pt);
	} else {
		printf("Nenhum tipo foi fornecido\n\n");
	}

	return 0;
}