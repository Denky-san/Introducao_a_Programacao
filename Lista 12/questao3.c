#include <stdio.h>

int main()
{
    int qtd_teste, j, i, linha = 0;
    scanf("%d", &qtd_teste);

    int matriz[qtd_teste][qtd_teste];

    for (i = 0; i < qtd_teste; i++)
    {
        for (j = 0; j < qtd_teste; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    qtd_teste = qtd_teste - 1;

    for (i = qtd_teste; i >= 0; i--)
    {
        printf("%d\n", matriz[linha][i]);
        linha++;
    }

    return 0;
}
