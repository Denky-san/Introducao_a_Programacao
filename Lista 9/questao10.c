#include <stdio.h>
#include <stdlib.h>

int main()
{
    double vetor[15], soma = 0;

    for (int i = 0; i < 15; i++)
    {
        scanf("%lf", &vetor[i]);
    }

    for (int i = 0; i < 15; i++)
    {
        soma = soma + vetor[i];
    }

    printf("A media geral dos alunos eh: %.2lf", soma / 15.00);

    return 0;
}