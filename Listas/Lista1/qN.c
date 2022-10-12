#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  if (a % 10000 == b) {
    printf("encaixa");
  } else {
    printf("nao encaixa");
  }
  return 0;
}