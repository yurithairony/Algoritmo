#include <stdio.h>

int main(void) {
  int n, i;
  scanf("%d", &n);
  for (i=1; i<n; i=i+1){
    if (n % i == 0) {
      printf("%d ", i);
    }
  }
  printf("%d\n", n);
}