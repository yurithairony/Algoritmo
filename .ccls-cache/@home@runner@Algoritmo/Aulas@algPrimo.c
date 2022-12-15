#include <stdio.h>
#include <time.h>

int primo(long long n){
long long i,qtdDivisores = 1;
for (i=2 ; i<=n ; ++i)
  if (n%i==0) qtdDivisores++;
return qtdDivisores==2?1:0;
}

int main() {
clock_t inicio,fim;
long long n; scanf("%lld",&n);
inicio = clock();
int p = primo(n);
fim = clock();
double tempo = ((double)(fim-inicio)) / (CLOCKS_PER_SEC/1000.0);
printf("%lld ",n);
if (p)printf("é primo");
else printf("é composto");
printf(" (%.4lfms)\n",tempo);
return 0;
}