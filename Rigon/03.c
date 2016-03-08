/* Desenvolver um programa em C que calcule a quantidade de dinheiro gasta por um
fumante. Dados de entrada: o número de anos que ele fuma, o nº de cigarros fumados
por dia e o preço de uma carteira. */

#include <stdio.h>
#include <stdlib.h>

int main(){

  float carteira, anos, cig, total;

  printf("Insira o numero de anos que ele fuma:\n");
  scanf("%f", &anos);
  printf("Numero de cigarros fumados por dia\n");
  scanf("%f", &cig);
  printf("Preco da carteira de cigarros:\n");
  scanf("%f", &carteira);
  total = cig * 365 * anos * (carteira/20);
  printf("Total de dinheiro gasto: R$ %.2f\n", total);

}
