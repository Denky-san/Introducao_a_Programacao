#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double altura, aresta, area_base, volume;

    scanf("%lf %lf", &altura, &aresta);

    area_base = sqrt(3) * (aresta * aresta) * (3.0 / 2.0);
    volume = area_base * altura * (1.0 / 3.0);

    printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n", volume);

    return 0;
}