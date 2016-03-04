#include <stdio.h>

int main(){

  int a, b, c, d, i, j, k, w, x, z;
  scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &i, &j, &w, &x);
  printf("Letra a\n");
  z = a + b * c;
  printf("%d\n", z);

  printf("Letra b\n");
  z = x - a + b * c / d;
  printf("%d\n", z);

  printf("Letra c\n");
  z = x - (a + b) * c / d;
  printf("%d\n", z);

  printf("Letra d\n");
  z = 2 * i % 5 * 4 + (j - 3) / (k + 2);
  printf("%d\n", z);

}
