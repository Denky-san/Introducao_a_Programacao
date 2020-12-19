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
        if (i % 2 == 0)
        {
            vetorC[i] = vetorA[i];
            printf("%d ", vetorC);
        }
        else
        {
            vetorC[i] = vetorB[i];
            printf("%d ", vetorC);
        }
    }
    return 0;
}