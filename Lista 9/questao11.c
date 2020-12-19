#include <stdio.h>
#include <stdlib.h>

int main()
{
    double vetor[10], soma = 0;
    int cont;

    for (int i = 0; i < 10; i++)
    {
        scanf("%lf", &vetor[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] < 0)
        {
            cont++;
        }
        if (vetor[i] > 0)
        {
            soma = soma + vetor[i];
        }
    }

    printf("Existem %d numeros negativos nesse vetor e a soma dos numeros positivos eh: %.2lf\n", cont, soma);

    return 0;
}