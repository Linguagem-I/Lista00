#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

  int x, y;
  float z;
  printf("Entre com o valor de X\n");
  scanf("%d", &x);
  printf("%d, ao cubo = %f \n", x, pow(x,3));
  printf("Entre com o valor de Y\n");
  scanf("%d", &y);
  printf("O resultado de X + Y = %d\n", x+y);
  z = x / y;
  // z = (int)(z);
  printf("%f\n", z);
  z = z + 1.0;
  printf("%f\n", z);
  x = ( y + (int)(z) ) % 2;
  printf("%d\n", x);
}
