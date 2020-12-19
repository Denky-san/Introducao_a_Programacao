#include <stdio.h>
#include <stdlib.h>

int main()
{
    double vetor[5];
    int codigo;

    for (int i = 0; i < 5; i++)
    {
        scanf("%lf", &vetor[i]);
    }

    printf("Digite o codigo: ");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case (0):
        exit(0);
        break;

    case (1):
        for (int i = 0; i < 5; i++)
        {
            printf("%.2lf ", vetor[i]);
        }
        break;

    case (2):
        for (int i = 4; i >= 0; i--)
        {
            printf("%.2lf ", vetor[i]);
        }
        break;

    default:
        printf("Codigo invalido!");
        break;
    }
    return 0;
}