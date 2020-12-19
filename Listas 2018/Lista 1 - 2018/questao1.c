#include <stdio.h>
#include <stdlib.h>

int main()
{
    int repeat, quantidade_pessoas;
    double popular, geral, arquibancada, cadeiras, qt_popular, qt_geral, qt_arquibancada, qt_cadeiras;

    //quantidade de vezes que o for vai loopar
    scanf("%d", &repeat);

    //matriz com a quantidade de loops e quantidade de varieaveis que vou alocar
    double matriz[repeat - 1][4];

    //for para loopar o repeat e armazenar ele dentro da matriz
    for (int i = 0; i <= repeat - 1; i++)
    {
        scanf("%d %lf %lf %lf %lf", &quantidade_pessoas, &popular, &geral, &arquibancada, &cadeiras);

        matriz[i][0] = (popular / 100) * quantidade_pessoas;
        matriz[i][1] = ((geral / 100) * quantidade_pessoas) * 5;
        matriz[i][2] = ((arquibancada / 100) * quantidade_pessoas) * 10;
        matriz[i][3] = ((cadeiras / 100) * quantidade_pessoas) * 20;
    }
    //for para loopar o repeat e mostrar na tela os valores armazenados anteriormente
    for (int i = 0; i <= repeat - 1; i++)
    {
        printf("A RENDA DO JOGO NUMERO N. %d E = %.2lf\n", i + 1, matriz[i][0] + matriz[i][1] + matriz[i][2] + matriz[i][3]);
    }

    return 0;
}