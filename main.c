#include <stdio.h>

int main() {
  int populacao, dias;
  dias = 1;
  scanf("%d", &populacao);
  for (int i=1; i<populacao; i*=2) {
    dias ++;
  }
  printf("%d dias\n", dias);
  return 0;
}