#include <stdio.h>

int main()
{
    int vetor[6], vetor_par[6], vetor_impar[6], a = 0, cont = 0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0)
        {
            vetor_par[a] = vetor[i];
            a++;
        }
        else
        {
            vetor_impar[cont] = vetor[i];
            cont++;
        }
    }

    printf("Os numeros pares sao : %d, sendo eles :\n", a);

    for (int i = 0; i < a; i++)
    {
        printf("%d ", vetor_par[i]);
    }

    printf("\nOs numeros impares sao : %d, sendo eles :\n", cont);

    for (int i = 0; i < cont; i++)
    {
        printf("%d ", vetor_impar[i]);
    }

    return (0);
}