#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{

    int matriz[2][2], i, j;
    double determinante;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    determinante = (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]);

    printf("%.2lf", determinante);

    return 0;
}
