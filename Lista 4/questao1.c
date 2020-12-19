#include <stdio.h>

int main()
{
    unsigned int valor, soma = 0, soma2 = 0;

    scanf("%d", &valor);

    while (valor <= 1000)
    {
        if (valor % 2 == 0)
        {
            soma = soma + valor;
        }
        else if (valor % 2 != 0)
        {
            soma2 = soma2 + valor;
        }

        scanf("%d", &valor);
    }

    printf("a soma dos valores pares eh: %d\n", soma);
    printf("a soma dos valores impares eh: %d\n", soma2);

    return 0;
}
