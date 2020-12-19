#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, trapezio;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (abs(b - c) < a && a < b + c &&
        abs(a - c) < b && b < a + c &&
        abs(a - b) < c && c < a + b)
    {
        printf("Perimetro = %.1lf\n", a + b + c);
    }
    else
    {
        trapezio = ((a + b) * c) / 2;
        printf("Area = %.1lf\n", trapezio);
    }

    return 0;
}