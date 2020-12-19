#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    double somatorio = 0;

    scanf("%d", &numero);

    if (numero < 1)
    {
        printf("Numero invalido!");
    }
    else
    {
        for (double i = 1; i <= numero; i++)
        {
            somatorio = (1 / i) + somatorio;
        }
        printf("%.6lf\n", somatorio);
    }
    return 0;
}