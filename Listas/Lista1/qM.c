#include <stdio.h>
 
int main() {
  int t, a;
  double g1, g2;
  long long pa, pb;
  scanf("%d", &t);
  for (int i1 = 0; i1 < t; i1++) {
    scanf("%lld", &pa);
    scanf("%lld", &pb);
    scanf("%lf", &g1);
    scanf("%lf", &g2);
    for (int i2 = 0; i2 < 102; i2++) {
      a = i2;
      if (pa > pb) break;
      else {
        pa += (long long) pa * g1 / 100;
        pb += (long long) pb * g2 / 100;
      }
    }
    if (a > 100) {
      printf("Mais de 1 seculo.\n");
    } else {
      printf("%d anos.\n", a);
    }
  }
  return 0;
}