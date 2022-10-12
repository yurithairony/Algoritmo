#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  if (a % 10000 == b % 10000) {
    printf("encaixa\n");
  } else {
    printf("nao encaixa\n");
  }
  return 0;
}