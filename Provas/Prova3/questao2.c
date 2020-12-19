#include <stdio.h>

int ehPermutacao(int matriz[500][500], int n, int *soma)
{
    int i, j, cont_zeros = 0;

    for (i = 0; i < n; i++)
    {
        cont_zeros = 0;

        for (j = 0; j < n; j++)
        {
            if (matriz[i][j] == 0)
            {
                cont_zeros++;
            }
        }
        if (cont_zeros != (n - 1))
        {
            return 0;
        }
    }
    for (j = 0; j < n; j++)
    {
        cont_zeros = 0;

        for (i = 0; i < n; i++)
        {

            if (matriz[i][j] == 0)
            {
                cont_zeros++;
            }
        }
        if (cont_zeros != (n - 1))
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int tamanho, j, i, final, *soma, soma_total = 0;

    soma = &soma_total;

    scanf("%d", &tamanho);

    int matrix[500][500];

    for (i = 0; i < tamanho; i++)
    {
        for (j = 0; j < tamanho; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < tamanho; i++)
    {
        for (j = 0; j < tamanho; j++)
        {
            soma_total = soma_total + matrix[i][j];
        }
    }

    final = ehPermutacao(matrix, tamanho, *soma);

    printf("%d\n", tamanho);

    if (final == 1)
    {
        printf("PERMUTACAO\n");
    }
    else if (final == 0)
    {
        printf("NAO EH PERMUTACAO\n");
    }

    printf("%d", *soma);

    return 0;
}