#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int qtd_teste, j, i;
    scanf("%d", &qtd_teste);

    int matriz[qtd_teste][qtd_teste];

    for (i = 0; i < qtd_teste; i++)
    {
        for (j = 0; j < qtd_teste; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < qtd_teste; i++)
    {
        printf("%d\n", matriz[i][i]);
    }

    return 0;
}
