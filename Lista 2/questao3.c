#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main()
{
    double raio, altura, area_circulo, area_lado, area_total;

    scanf("%lf %lf", &raio, &altura);

    area_circulo = PI * (raio * raio);
    area_lado = 2 * PI * (raio * altura);
    area_total = (2 * area_circulo) + area_lado;

    printf("O VALOR DO CUSTO E = %.2lf\n", area_total * 100);

    return 0;
}