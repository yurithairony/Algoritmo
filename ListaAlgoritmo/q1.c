#include <stdio.h>

int main() {
  int a, b;
  int r = 1;
  scanf("%d %d", &a, &b);
  for (int i = 1; i <= b; i++) {
    r *= a;
  }
  printf("%d\n", r);
  return 0;
}