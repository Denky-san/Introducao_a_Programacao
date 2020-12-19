#include <stdio.h>
#include <stdlib.h>

int main()
{
    double vetor[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%lf", &vetor[i]);

        if (vetor[i] < 0)
        {
            vetor[i] = 0;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%.2lf ", vetor[i]);
    }
    return 0;
}