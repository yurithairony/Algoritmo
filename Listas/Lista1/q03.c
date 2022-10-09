#include <stdio.h>

int perimetro(int a, int b) {
  int p;
  p = 2 * (a + b);
  return p;
}

int main(void) {
  int a, b, p;
  scanf("%d %d", &a, &b);
  p = perimetro(a, b);
  printf("%d\n", p);
  return 0;
}