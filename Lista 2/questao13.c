#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, d, e, f, X, Y, G, H;

    scanf("%lf %lf %lf%lf %lf %lf", &a, &b, &c, &d, &e, &f);

    if (d == 0 || ((-1) * H + b) == 0)
    {
        printf("ERRO 404 ALGUEM ME DESCONFIGUROU");
    }
    else
    {
        G = (a * f) / d;
        H = (a * e) / d;
        Y = (c - G) / ((-1) * H + b);
        X = (f - (e * Y)) / d;

        printf("O VALOR DE X E = %.2lf\n", X);
        printf("O VALOR DE Y E = %.2lf\n", Y);
    }
    return 0;
}