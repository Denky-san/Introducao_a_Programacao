#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void selectionSort3(double vetorDesordenado[], int tamanhoVetor)
{ //Funçao selection recebendo vetor e tamanho
    int i, j, posicaoValorMinimo;
    for (i = 0; i < (tamanhoVetor - 1); i++)
    {                           //Loop para percorrer o vetor
        posicaoValorMinimo = i; //O valor minimo de posiçao do vetor a ser percorrido e 0
        for (j = (i + 1); j < tamanhoVetor; j++)
        { //Percorreremos o vetor da posiçao 1 ate o tamanho estimado
            if (vetorDesordenado[j] < vetorDesordenado[posicaoValorMinimo])
            {                           //Se a posiçao que vamos verificar for menos que a posiçao que temos em maos
                posicaoValorMinimo = j; //A variavel 'j' recebe esse valor
            }
        }
        if (i != posicaoValorMinimo)
        {
            trocarPosicaoValores(&vetorDesordenado[i], &vetorDesordenado[posicaoValorMinimo]); //vamos chamar uma outra funçao para trocar as posiçoes de lugares
        }
    }
}
void trocarPosicaoValores(double *posicaoA, double *posicaoB)
{ //Funçao para trocar as posiçoes que estamos olhando
    double temporario;
    temporario = *posicaoA;
    *posicaoA = *posicaoB;
    *posicaoB = temporario;
}

typedef struct
{
    double u, x, y, z;
    double Norma;

} Vetor_Ordenado;

int main()
{
    int N = 0, i, Counter = 0, j;
    Vetor_Ordenado Coord[20];

    scanf("%d", &N);

    double Vetor[N];
    double Matriz[N][5];

    for (i = 0; i < N; i++)
    {
        scanf("%lf %lf %lf %lf", &Coord[i].u, &Coord[i].x, &Coord[i].y, &Coord[i].z);

        Coord[i].Norma = sqrt((pow(Coord[i].u, 2) + pow(Coord[i].x, 2) + pow(Coord[i].y, 2) + pow(Coord[i].z, 2)));
    }

    for (i = 0; i < N; i++)
    {
        Vetor[i] = Coord[i].Norma;
    }

    selectionSort3(Vetor, N);

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (Vetor[i] == Coord[j].Norma)
            {
                Matriz[i][0] = Coord[j].u;
                Matriz[i][1] = Coord[j].x;
                Matriz[i][2] = Coord[j].y;
                Matriz[i][3] = Coord[j].z;
                Matriz[i][4] = Coord[j].Norma;
            }
        }
    }

    for (i = 0; i < N; i++)
    {
        printf("Vetor: (%0.2lf, %0.2lf, %0.2lf, %0.2lf) Norma: %0.2lf\n", Matriz[i][0], Matriz[i][1], Matriz[i][2], Matriz[i][3], Matriz[i][4]);
    }

    return (0);
}