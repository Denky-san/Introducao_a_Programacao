#include <stdio.h>

int main()
{
    double A, B, C;

    scanf("%lf %lf %lf", &A, &B, &C);

    if (A + B < C)
    {
        printf("A soma de A + B eh: %.2f\n", A + B);
    }
    else
    {
        printf("ERROR");
    }

    return 0;
}
