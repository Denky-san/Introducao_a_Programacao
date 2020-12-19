#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int conta_cliente;
    double consumo_agua;
    char tipo_consumidor;

    scanf("%d %lf %c", &conta_cliente, &consumo_agua, &tipo_consumidor);

    printf("CONTA = %d\n", conta_cliente);

    switch (tipo_consumidor)
    {
    case ('R'):

        printf("VALOR DA CONTA = %.2lf\n", (consumo_agua * 0.05) + 5);

        break;

    case ('C'):

        printf("VALOR DA CONTA = %.2lf", 500 + (double)((consumo_agua > 80) ? (consumo_agua - 80) * 0.25 : 0));

        break;

    case ('I'):

        printf("VALOR DA CONTA = %.2lf", 800 + (double)((consumo_agua > 100) ? (consumo_agua - 100) * 0.04 : 0));

        break;

    default:
        printf("ERROR");
    }
    return 0;
}