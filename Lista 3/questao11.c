#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a, b, c, delta, x1, x2;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = (b * b) - 4 * a * c;

    if (delta == 0)
    {
        x1 = (b * (-1)) / (2 * a);

        printf("RAIZ UNICA\n");
        printf("X1 = %.2lf\n", x1);
    }
    else if (delta > 0)
    {
        x1 = ((b * (-1)) - sqrt(delta)) / (2 * a);
        x2 = ((b * (-1)) + sqrt(delta)) / (2 * a);

        printf("RAIZES DISTINTAS\n");
        printf("X1 = %.2lf\n", x1);
        printf("X2 = %.2lf\n", x2);
    }
    else
    {
        printf("RAIZES IMAGINARIAS\n");
    }

    return 0;
}