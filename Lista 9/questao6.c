#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int vetor[10], maior = INT_MIN, menor = INT_MAX;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);

        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }

    printf("O maior e o menor valor sao respectivamente: %d e %d", maior, menor);

    return 0;
}