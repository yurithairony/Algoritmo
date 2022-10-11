#include <stdio.h>

int main () {
  int h1, m1, h2, m2, hora, min, tempo;
  int fim = 1;
  while (fim != 0) {
  scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

  // fim do programa
  if (h1 + m1 + h2 + m2 == 0) {
    fim = 0; break;
  }

  // hora
  hora = h2 * 60 - h1 * 60;
  if (h2 <= h1) {
    hora = (h2 + 24) * 60 - h1 * 60;
  }

  // minutos
  min = m2 - m1;

  // resposta
  printf("%d\n", hora + min);
    
  }
  return 0;
}