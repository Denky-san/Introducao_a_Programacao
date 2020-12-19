#include <stdio.h>
#include <stdlib.h>

int checagem(int n)
{
    if (n == 0)
    {
        printf("e nulo");
        return 0;
    }
    else if (n > 0)
    {
        printf("e positivo");
        return 1;
    }
    else
    {
        printf("e negativo");
        return -1;
    }
}

int main()
{
    int numero;

    scanf("%d", &numero);

    printf("O numero: %d\n", numero);

    checagem(numero);

    return 0;
}
