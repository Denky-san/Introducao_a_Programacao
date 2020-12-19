#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int M, N, somando, i, tamanho;
    char soma[11];

    scanf("%d %d", &M, &N);
    somando = M + N;
    sprintf(soma, "%d", somando);
    tamanho = strlen(soma);

    while (N != 0 && M != 0)
    {
        for (i = 0; i < tamanho; i++)
        {
            if (soma[i] != '0')
            {
                printf("%c", soma[i]);
            }
        }
        printf("\n");

        scanf("%d %d", &M, &N);
        somando = M + N;
        sprintf(soma, "%d", somando);
        tamanho = strlen(soma);
    }

    return 0;
}
