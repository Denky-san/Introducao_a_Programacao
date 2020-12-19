#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetorA[10], vetorB[10], vetorC[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetorA[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetorB[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        vetorC[i] = vetorA[i] - vetorB[i];

        printf("Numeros do vetor C: %d ", vetorC[i]);
    }
    return 0;
}