#include <stdio.h>
#include <stdlib.h>

int main()
{

    double peso_peixes, excesso, multa;

    scanf("%lf", &peso_peixes);

    if (peso_peixes > 50)
    {
        excesso = peso_peixes - 50;
        multa = excesso * 4;

        printf("O valor a ser pago e: %.2lf reais\n", multa);
    }
    else
    {
        printf("Nao e nescessario pagar nenhuma multa\n");
    }

    return 0;
}