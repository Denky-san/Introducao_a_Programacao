#include <stdio.h>

int main()
{
    int i, j, k, linha, coluna;

    scanf("%d %d", &linha, &coluna);

    int normal[coluna], oposto[coluna];

    for (i = 0; i < coluna; i = i + 2)
    {
        normal[i] = 1;
        normal[i + 1] = 0;
    }
    for (i = 0; i < coluna; i = i + 2)
    {
        oposto[i] = 0;
        oposto[i + 1] = 1;
    }

    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            printf("%d", normal[j]);
        }
        printf("\n");

        i++;

        if (i < linha)
        {
            for (k = 0; k < coluna; k++)
            {
                printf("%d", oposto[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
