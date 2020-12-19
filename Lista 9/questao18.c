#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[50];

    for (int i = 0; i < 50; i++)
    {
        scanf("%d", &vetor[i]);

        vetor[i] = (i + 5 * i) % (i + 1);
    }

    for (int i = 0; i < 50; i++)
    {
        printf("%d ", vetor[i]);
    }
    return 0;
}