#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    double vetor[5], media = 0;
    int cont, maior = INT_MIN, menor = INT_MAX;

    for (int i = 0; i < 5; i++)
    {
        scanf("%lf", &vetor[i]);
        media = media + vetor[i];
    }

    for (int i = 0; i < 5; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%.2lf \n", vetor[i]);
    }

    printf("O maior valor, o menor valor e a media dos valores sao respectivamente: %d, %d e %.2lf\n", maior, menor, media / 5);

    return 0;
}