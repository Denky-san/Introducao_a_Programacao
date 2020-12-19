#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[100], natural = 0, cont = 0;

    while (vetor[99] == NULL)
    {
        if (natural % 7 != 0 && natural % 10 != 7)
        {
            vetor[cont] = natural;
            printf("%d ", vetor[cont]);
            cont++;
        }

        natural++;
    }

    return 0;
}