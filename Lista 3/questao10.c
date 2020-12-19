#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1, num2, num3, sup;

    scanf("%lf %lf %lf", &num1, &num2, &num3);

    if (num1 < num2)
    {
        sup = num1;
        num1 = num2;
        num2 = sup;
    }
    if (num1 < num3)
    {
        sup = num1;
        num1 = num3;
        num3 = sup;
    }
    if (num2 < num3)
    {
        sup = num2;
        num2 = num3;
        num3 = sup;
    }

    printf("%.2lf, %.2lf, %.2lf\n", num1, num2, num3);

    return 0;
}