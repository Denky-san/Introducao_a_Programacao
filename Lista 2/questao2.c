#include <stdio.h>
#include <stdlib.h>

int main()
{
    double fahrenheit, polegadas;
    scanf("%lf %lf", &fahrenheit, &polegadas);

    printf("O VALOR EM CELSIUS = %.2lf\n", ((fahrenheit - 32) * 5) / 9);
    printf("A QUANTIDADE DE CHUVA E = %.2lf\n", polegadas * 25.4);

    return 0;
}