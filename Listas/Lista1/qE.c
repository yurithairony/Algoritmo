#include <stdio.h>

int media(int n1, int n2) {
  int media;
  media = ((n1 * 2) + (n2 * 3)) / 5;
  return media;
}

int main(void) {
  int n1, n2, m;
  scanf("%d %d", &n1, &n2);
  m = media(n1, n2);
  printf("%d\n", m);
  return 0;
}