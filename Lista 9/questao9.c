#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[6], aux, cont = 0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &aux);

        if (aux % 2 == 0)
        {
            vetor[cont] = aux;
            cont++;
        }
    }

    for (int i = 0; i < cont; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}