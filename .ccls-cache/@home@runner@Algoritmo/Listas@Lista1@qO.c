#include <stdio.h>

int main() {
  int t, n, i, j; 
  int c[n];
  scanf("%d", &t);
  for (i = 1; i <= t; i++) {
    scanf("%d", &n);
    for (j = 0; j < n; j++) {
      scanf("%d", &c[j]);
    }
  }
  printf("%d\n", c[j]);
  
  return 0;
}