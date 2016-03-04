#include <stdio.h>

int main(){

  float p1, p2, p3, mf;
  printf("Entre com o valor das Parciais P1, P2, P3\n");
  scanf("%f %f %f", &p1, &p2, &p3);
  mf = (p1 + p2 + p3) / 3.0;
  printf("A Media Final eh %f\n", mf);
  
}
