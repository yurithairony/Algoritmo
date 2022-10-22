#include <stdio.h>

int soma(int a, int b) {
  int s;
  s = a + b;
  return s;
}


int main(void) {
  int a, b, s;
  scanf("%d", &a);
  scanf("%d", &b);
  s = soma(a, b);
  printf("%d", s);
  return 0;
}
