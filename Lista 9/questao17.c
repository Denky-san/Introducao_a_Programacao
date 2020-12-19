#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10], multiplos[10], numX, a = 0;

    printf("Digite o numero X: ");
    scanf("%d", &numX);

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);

        if (vetor[i] % numX == 0)
        {
            multiplos[a] = vetor[i];
            a++;
        }
    }

    for (int i = 0; i < a; i++)
    {
        printf("%d ", multiplos[i]);
    }
    return 0;
}