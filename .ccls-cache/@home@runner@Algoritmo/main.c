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

  printf("%d\n", tempo);


  }
  return 0;
}