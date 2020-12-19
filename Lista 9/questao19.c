#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10], vetor_impar[10], a = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);

        if (vetor[i] < 0 || vetor[i] > 50)
        {
            exit(0);
        }
        if (vetor[i] % 2 == 1)
        {
            vetor_impar[a] = vetor[i];
            a++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
        i++;

        printf("%d", vetor[i]);
        printf("\n");
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d ", vetor_impar[i]);
        i++;

        if (i != a)
        {
            printf("%d", vetor_impar[i]);
            printf("\n");
        }
    }
    return 0;
}