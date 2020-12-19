#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct jogos
{
    int num_jogo;
    int numero[6];
} cartela;

typedef struct sorteio
{
    int num_concurso;
    int numero[6];
} vencedor;

int main()
{
    int qtd_jogos, i, j, k, l, cont = 0, acertou = 0;
    int numeros_acertados[6];

    cartela *palpites;
    vencedor winner;

    scanf("%d", &qtd_jogos);

    palpites = (cartela *)malloc(qtd_jogos * sizeof(cartela));

    for (i = 0; i < qtd_jogos; i++)
    {
        scanf("%d", &palpites[i].num_jogo);

        for (j = 0; j < 6; j++)
        {
            scanf("%d", &palpites[i].numero[j]);
        }
    }

    scanf("%d", &winner.num_concurso);

    for (i = 0; i < 6; i++)
    {
        scanf("%d", &winner.numero[i]);
    }

    for (i = 0; i < qtd_jogos; i++)
    {
        cont = 0;

        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                if (winner.numero[k] == palpites[i].numero[j])
                {
                    numeros_acertados[cont] = palpites[i].numero[j];
                    cont++;
                }
            }
        }
        switch (cont)
        {
        case (6):
            printf("SENA %d:", palpites[i].num_jogo);
            for (l = 0; l < cont; l++)
            {
                printf(" %d", numeros_acertados[l]);
            }
            puts("");
            break;
        case (5):
            printf("QUINA %d:", palpites[i].num_jogo);
            for (l = 0; l < cont; l++)
            {
                printf(" %d", numeros_acertados[l]);
            }
            puts("");
            break;
        case (4):
            printf("QUADRA %d:", palpites[i].num_jogo);
            for (l = 0; l < cont; l++)
            {
                printf(" %d", numeros_acertados[l]);
            }
            puts("");
            break;
        default:
            acertou++;
            break;
        }
    }

    if (acertou == qtd_jogos)
    {
        printf("NENHUMA CARTELA PREMIADA PARA O CONCURSO %d", winner.num_concurso);
    }

    free(palpites);

    return 0;
}
