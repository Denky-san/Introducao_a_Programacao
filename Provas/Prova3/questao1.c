#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, numeros[1000], tamanho, primeira_metade = 0, segunda_metade = 0;
    double media, soma = 0;

    scanf("%d", &tamanho);

    if (tamanho <= 5)
    {
        printf("QUANTIDADE DE ELEMENTOS INVALIDOS!");
        return 0;
    }

    for (i = 0; i < tamanho; i++)
    {
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < tamanho; i++)
    {
        soma = soma + numeros[i];
    }

    media = soma / tamanho;

    if (tamanho % 2 == 0)
    {
        for (i = 0; i < tamanho / 2; i++)
        {

            if (numeros[i] > media)
            {
                primeira_metade++;
            }
        }

        for (i = (tamanho / 2); i < tamanho; i++)
        {
            if (numeros[i] > media)
            {
                segunda_metade++;
            }
        }
    }
    else
    {
        for (i = 0; i < tamanho / 2; i++)
        {

            if (numeros[i] > media)
            {
                primeira_metade++;
            }
        }

        for (i = (tamanho / 2) + 1; i < tamanho; i++)
        {
            if (numeros[i] > media)
            {
                segunda_metade++;
            }
        }
    }

    printf("%.2lf %d %d ", media, primeira_metade, segunda_metade);

    if (primeira_metade > segunda_metade)
    {
        printf("PRIMEIRA METADE");
    }
    else if (segunda_metade > primeira_metade)
    {
        printf("SEGUNDA METADE");
    }
    else
    {
        printf("EMPATE");
    }

    return 0;
}