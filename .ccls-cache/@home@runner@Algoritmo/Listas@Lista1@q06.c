#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);
  if (a / 2 == 0) {
    a = a + 2;
  }
  else {
    a = a + 1;
  }
  printf("%d\n", a);
  return 0;
}