#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num1, num2, num3, sup, ordenado1, ordenado2, ordenado3;
  char char1, char2, char3, charsup;

  scanf("%d %d %d\n", &num1, &num2, &num3);
  scanf("%c%c%c", &char1, &char2, &char3);

  // ordenando os numeros //

  if (num1 > num2)
  {
    sup = num1;
    num1 = num2;
    num2 = sup;
  }
  if (num1 > num3)
  {
    sup = num1;
    num1 = num3;
    num3 = sup;
  }
  if (num2 > num3)
  {
    sup = num2;
    num2 = num3;
    num3 = sup;
  }

  if (char1 == 'A')
  {
    ordenado1 = num1;
  }
  if (char1 == 'B')
  {
    ordenado1 = num2;
  }
  if (char1 == 'C')
  {
    ordenado1 = num3;
  }

  if (char2 == 'A')
  {
    ordenado2 = num1;
  }
  if (char2 == 'B')
  {
    ordenado2 = num2;
  }
  if (char2 == 'C')
  {
    ordenado2 = num3;
  }

  if (char3 == 'A')
  {
    ordenado3 = num1;
  }
  if (char3 == 'B')
  {
    ordenado3 = num2;
  }
  if (char3 == 'C')
  {
    ordenado3 = num3;
  }

  printf("%d %d %d\n", ordenado1, ordenado2, ordenado3);

  return 0;
}
