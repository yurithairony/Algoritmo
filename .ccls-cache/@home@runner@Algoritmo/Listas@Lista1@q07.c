#include <stdio.h>

int main(void) {
  long long a11, a12, a21, a22, m1, m2;
  int p1, p2;
  scanf("%lld %lld", &a11, &a21);
  scanf("%lld %lld", &a12, &a22);
  scanf("%d %d", &p1, &p2);
  
  m1 = (a11 * p1 + a21 * p2) / p1 + p2;
  m2 = (a12 * p1 + a22 * p2) / p1 + p2;
  if (m1 >= m2) {
    printf("1\n");
  }
  else {
    printf("2\n");
  }
  return 0;
  }