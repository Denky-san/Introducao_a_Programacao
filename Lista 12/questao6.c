#include <stdio.h>

int main()
{
    int i, j;
    float matriz[2][2], quadrado_matriz[2][2];

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%f", &matriz[i][j]);
        }
    }

    quadrado_matriz[0][0] = (matriz[0][0] * matriz[0][0]) + (matriz[0][1] * matriz[1][0]);
    quadrado_matriz[0][1] = (matriz[0][0] * matriz[0][1]) + (matriz[0][1] * matriz[1][1]);
    quadrado_matriz[1][0] = (matriz[1][0] * matriz[0][0]) + (matriz[1][1] * matriz[1][0]);
    quadrado_matriz[1][1] = (matriz[1][0] * matriz[0][1]) + (matriz[1][1] * matriz[1][1]);

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%.3f ", quadrado_matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
