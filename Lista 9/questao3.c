#include <stdio.h>
#include <stdlib.h>

int main()
{
    double vetor[10];
    double quadradoVetor[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%lf", &vetor[i]);

        quadradoVetor[i] = vetor[i] * vetor[i];
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%.2lf\n", quadradoVetor[i]);
    }

    return 0;
}
