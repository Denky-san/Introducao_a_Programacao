#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetorV[10], vetorV1[10], vetorV2[10], cont1 = 0, cont2 = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetorV[i]);

        if (vetorV[i] % 2 == 0)
        {
            vetorV2[cont1] = vetorV[i];
            cont1++;
        }
        else
        {
            vetorV1[cont2] = vetorV[i];
            cont2++;
        }
    }

    for (int i = 0; i < cont1; i++)
    {
        printf("%d ", vetorV1[i]);
    }
    for (int i = 0; i < cont2; i++)
    {
        printf("%d ", vetorV2[i]);
    }

    return 0;
}