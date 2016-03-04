#include <stdio.h>
#include <math.h>

int main(){

  float h, r, c, qlat, area, litro;
  printf("Entre com o valor da Altura e do Raio\n");
  scanf("%f %f", &h, &r );
  area = (3.14 * (pow(r,2))) + (2 * 3.14 * r * h);
  litro = area/3.0;
  qlat = litro/5.0;
  c = qlat * 10.00;
  printf("O custo da pintura eh de R$ %f\n", c);
  printf("O gasto total de latas eh de R$ %f\n", qlat);

}
