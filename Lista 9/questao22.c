#include <stdio.h>
#include <stdlib.h>

int main()
{
    double vetor[20], alto = 0, baixo = 3, aux, aux2;

    for (int i = 0; i < 20; i++)
    {
        scanf("%lf", &vetor[i]);

        if (i % 2 != 0)
        {
            if (vetor[i] > alto)
            {
                alto = vetor[i];
                aux = vetor[i - 1];
            }
            if (vetor[i] < baixo)
            {
                baixo = vetor[i];
                aux2 = vetor[i - 1];
            }
        }
    }

    printf("O numero do aluno mais alto e sua altura sao respectivamente: %.2lf %.2lf\nO numero do aluno mais baixo e sua altura sao respectivamente: %.2lf %.2lf", aux, alto, aux2, baixo);
    return 0;
}