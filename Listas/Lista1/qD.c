#include <stdio.h>


int main(void) {
  int a, b, hora, min;
  scanf("%d", &a);
  scanf("%d", &b);
  hora = (b - a) / 60;
  min = (b - a) % 60;
  printf("%d:%d\n", hora, min);
  return 0;
}