#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double lado1, lado2, lado3, T, area;

    scanf("%lf %lf %lf", &lado1, &lado2, &lado3);

    T = (lado1 + lado2 + lado3) / 2;
    area = sqrt(T * (T - lado1) * (T - lado2) * (T - lado3));

    printf("A AREA DO TRIANGULO E = %.2lf\n", area);

    return 0;
}