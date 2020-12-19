#include <stdio.h>

int main()
{
    int i, j, linha = -1, coluna = -1, linhas = 1;

    while (linha <= 0 || linha > 10)
    {
        scanf("%d", &linha);
    }
    while (coluna <= 0 || coluna > 10)
    {
        scanf("%d", &coluna);
    }

    int matrix[linha][coluna];

    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < linha; i++)
    {
        printf("linha %d: %d", linhas, matrix[i][0]);
        linhas++;

        for (j = 1; j < coluna; j++)
        {
            printf(",%d", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
