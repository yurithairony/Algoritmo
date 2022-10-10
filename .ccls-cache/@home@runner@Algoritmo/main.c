#include <stdio.h>

int main(void) {
  int x, y, i, mdc;
  scanf("%d %d", &x, &y);
  for (i=1; i<= x && i<= y; i = i + 1){
    if (x % i == 0 && y % i == 0) {
        mdc = i;
    }
  }
  printf("%d\n", mdc);
}