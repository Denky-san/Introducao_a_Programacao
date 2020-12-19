#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int vetor[10], maior = INT_MIN, posicao;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);

        if (vetor[i] > maior)
        {
            maior = vetor[i];
            posicao = i;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\nO maior elemento e sua posicao respectivamente eh: %d e %d\n", maior, posicao);

    return 0;
}