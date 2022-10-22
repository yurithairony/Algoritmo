#include <stdio.h>

int main() {
  int teste, numCarneiros, carneiros, i1, i2, i3;
  int somador;
  int sonho[numCarneiros];
  int verif = 0;
  i2 = 0;
  scanf("%d", &teste);
  for (i1 = 1; i1 <= teste; i1++) {
    scanf("%d", &numCarneiros);
    while (i2 < numCarneiros) {
      scanf("%d", &carneiros);
      for (i3 = 0; i3 <= numCarneiros; i3++) {
        if (carneiros == sonho[i3]) verif++;
      }
      if (verif == 0) {
        sonho[i2] = carneiros;
        somador++;
        i2++;
      }
    }
  printf("%d", somador);
  }
  return 0;
}