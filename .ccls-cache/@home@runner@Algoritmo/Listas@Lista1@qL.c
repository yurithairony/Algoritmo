#include <stdio.h>

int main() {
  int n, i, div;
  scanf("%d", &n);
  for (i=1 ; i<=n ; i++) {
    if (n % i == 0) {
      div++;
    }
  }
  if (div == 2) {
    printf("Sim");
  } else {
    printf("Não");
  }
  
  
  return 0;
}