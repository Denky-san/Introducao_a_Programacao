#include <stdio.h>
#include <stdlib.h>

int par_impar(int n)
{
    int resto = n % 2;

    if (resto == 1)
    {
        printf("e impar");
        return 0;
    }
    else
    {
        printf("e par");
        return 1;
    }
}

int main()
{
    int numero;

    scanf("%d", &numero);

    printf("O numero: %d\n", numero);

    par_impar(numero);

    return 0;
}
