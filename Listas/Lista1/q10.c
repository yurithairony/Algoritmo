#include <stdio.h>

int main () {
  int h1, m1, h2, m2, hora, min, tempo;
  while (h1 != 0 && m1 != 0 && h2 != 0 && m2 != 0) {
  scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
  }
  // hora 
  hora = h2 - h1;
  if (hora < 0) {
    hora = hora + 24;
  }

  // minuto
  min = m2 - m1;
  if (min < 0) {
    min = min + 60 * hora;
  }

  // converter em minutos
  tempo = min + hora * 60;

  printf("%d", tempo);
  return 0;
}