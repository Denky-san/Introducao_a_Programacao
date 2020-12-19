#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A, B, C;

    scanf("%lf %lf %lf", &A, &B, &C);

    printf("O VALOR DE DELTA E = %.2lf\n", (B * B) - 4 * A * C);

    return 0;
}