#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x = 555;

  (x < 2) ? printf("Sim\n") : printf("Nao\n");

  printf("%s\n", (x > 2) ? "Sim" : "Não");

  printf("%.2lf", 500 + (int)((x > 80) ? (x - 80) * 0.25 : 0));

  return 0;
}