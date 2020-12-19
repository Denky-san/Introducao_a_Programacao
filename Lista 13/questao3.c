#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void muda_posicao(double *posicaoA, double *posicaoB)
{
    double temporario;
    temporario = *posicaoA;
    *posicaoA = *posicaoB;
    *posicaoB = temporario;
}

void ordenacao(double vet_des[], int tam_vet)
{
    int i, j, posicao_min;
    for (i = 0; i < (tam_vet - 1); i++)
    {
        posicao_min = i;
        for (j = (i + 1); j < tam_vet; j++)
        {
            if (vet_des[j] < vet_des[posicao_min])
            {
                posicao_min = j;
            }
        }
        if (i != posicao_min)
        {
            muda_posicao(&vet_des[i], &vet_des[posicao_min]);
        }
    }
}

typedef struct
{
    double u, x, y, z;
    double norma;

} vetor_ordenado;

int main()
{
    int qtd = 0, i, cont = 0, j;
    vetor_ordenado cord[20];

    scanf("%d", &qtd);

    double vetor[qtd];
    double matriz[qtd][5];

    for (i = 0; i < qtd; i++)
    {
        scanf("%lf %lf %lf %lf", &cord[i].u, &cord[i].x, &cord[i].y, &cord[i].z);

        cord[i].norma = sqrt((pow(cord[i].u, 2) + pow(cord[i].x, 2) + pow(cord[i].y, 2) + pow(cord[i].z, 2)));
    }

    for (i = 0; i < qtd; i++)
    {
        vetor[i] = cord[i].norma;
    }

    ordenacao(vetor, qtd);

    for (i = 0; i < qtd; i++)
    {
        for (j = 0; j < qtd; j++)
        {
            if (vetor[i] == cord[j].norma)
            {
                matriz[i][0] = cord[j].u;
                matriz[i][1] = cord[j].x;
                matriz[i][2] = cord[j].y;
                matriz[i][3] = cord[j].z;
                matriz[i][4] = cord[j].norma;
            }
        }
    }

    for (i = 0; i < qtd; i++)
    {
        printf("Vetor: (%0.2lf, %0.2lf, %0.2lf, %0.2lf) Norma: %0.2lf\n", matriz[i][0], matriz[i][1], matriz[i][2], matriz[i][3], matriz[i][4]);
    }

    return (0);
}