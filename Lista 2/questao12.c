#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero, nota_100, nota_50, nota_10, moeda_1;

    scanf("%d", &numero);

    nota_100 = numero / 100;
    numero = numero % 100;
    nota_50 = numero / 50;
    numero = numero % 50;
    nota_10 = numero / 10;
    numero = numero % 10;
    moeda_1 = numero;

    printf("NOTAS DE 100 = %d\n", nota_100);
    printf("NOTAS DE 50 = %d\n", nota_50);
    printf("NOTAS DE 10 = %d\n", nota_10);
    printf("MOEDAS DE 1 = %d\n", moeda_1);

    return 0;
}