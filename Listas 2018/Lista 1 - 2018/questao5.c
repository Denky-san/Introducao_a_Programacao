#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor_inicial, razao, num_elementos, soma;

    soma = 0;

    scanf("%d %d %d", &valor_inicial, &razao, &num_elementos);

    for (int i = valor_inicial; i < valor_inicial + (razao * num_elementos); i = i + razao)
    {
        soma = soma + i;
    }

    printf("%d\n", soma);

    return 0;
}