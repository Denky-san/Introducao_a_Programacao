#include <stdio.h>
#include <stdlib.h>

int main()
{
  float B, b, h, A;

  printf("Digite o valor da base maior: ");
  scanf("%f", &B);

  printf("Digite o valor da base menor: ");
  scanf("%f", &b);

  printf("Digite o valor da altura: ");
  scanf("%f", &h);

  A = ((B + b) * h) / 2;

  printf("A area do trapezio eh: %.2f\n", A);

  return 0;
}
