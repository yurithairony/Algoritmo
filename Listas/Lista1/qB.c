#include <stdio.h>

double media(double a, double b) {
  double m;
  m = (a + b) / 2;
  return m;
}

int main(void) {
  double a, b, m;
  scanf("%lf", &a);
  scanf("%lf", &b);
  m = media(a, b);
  printf("%lf", m);
  return 0;  
}