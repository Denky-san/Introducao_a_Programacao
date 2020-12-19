#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct numeros
{
    int numerador;
    int denominador;
} fracoes;

int main()
{
    int casos_teste, tamanho_fracao, i, j, k, l, cont2 = 0;

    scanf("%d", &casos_teste);

    for (i = 0; i < casos_teste; i++)
    {
        scanf("%d", &tamanho_fracao);
        fracoes vetor_fracoes[tamanho_fracao];

        for (j = 0; j < tamanho_fracao; j++)
        {
            scanf("%d/%d", &vetor_fracoes[j].numerador, &vetor_fracoes[j].denominador);
        }

        printf("Caso de teste %d\n", i + 1);

        for (k = 0; k < tamanho_fracao - 1; k++)
        {
            for (l = k + 1; l < tamanho_fracao; l++)
            {
                if ((vetor_fracoes[k].numerador * vetor_fracoes[l].denominador) - (vetor_fracoes[l].numerador * vetor_fracoes[k].denominador) == 0)
                {
                    printf("%d/%d equivalente a %d/%d\n",
                           vetor_fracoes[k].numerador, vetor_fracoes[k].denominador,
                           vetor_fracoes[l].numerador, vetor_fracoes[l].denominador);
                    cont2++;
                }
            }
        }

        if (cont2 == 0)
        {
            printf("Nao ha fracoes equivalentes na sequencia\n");
        }
    }
    return (0);
}