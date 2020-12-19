#include <stdio.h>
#include <stdlib.h>

int main()
{
    int carbono, rockwell, tracao;

    scanf("%d %d %d", &carbono, &rockwell, &tracao);

    if (carbono < 7 && rockwell > 50 && tracao > 80000)
    {
        printf("Aco de grau = 10\n");
    }
    else if (carbono < 7 && rockwell > 50 && tracao <= 80000)
    {
        printf("Aco de grau = 9\n");
    }
    else if (carbono < 7 && rockwell <= 50 && tracao <= 80000)
    {
        printf("Aco de grau = 8\n");
    }
    else
    {
        printf("Aco de grau = 7\n");
    }

    return 0;
}