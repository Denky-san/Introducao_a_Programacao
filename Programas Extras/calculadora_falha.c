#include <stdio.h>
#include <stdlib.h>

void main()
{
  int a = 45, b = 2;
  float var = a / b;

  //soma
  printf("A soma de %d e %d = %d\n\n", a, b, a + b);

  //subtra�ao
  printf("A subtracao de %d menos %d = %d\n\n", a, b, a - b);

  // multiplica��o
  printf("A multiplicacao de %d vezes %d = %d\n\n", a, b, a * b);

  //divisao
  printf("A divisao de %d dividido %d = %.2f\n\n", a, b, var = (float)a / b);

  //resto da divis�o
  printf("O resto da divisao de %d por %d = %d\n\n", a, b, a % b);

  //valor absoluto
  printf("O valor absoluto de -3 = %d\n\n", abs(-3));

  system("pause");
}
