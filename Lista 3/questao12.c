#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3, num4, tecna, soma;

    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if (num1 > num4)
    {
        tecna = num1;
        num1 = num4;
        num4 = tecna;
    }
    if (num2 > num4)
    {
        tecna = num2;
        num2 = num4;
        num4 = tecna;
    }
    if (num3 > num4)
    {
        tecna = num3;
        num3 = num4;
        num4 = tecna;
    }

    soma = num1 + num2 + num3;
    printf("%d\n", soma);

    return 0;
}