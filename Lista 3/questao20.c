#include <stdio.h>
#include <stdlib.h>

int main()
{
    int escolha;
    double num1, num2, num3, sup;

    scanf("%d %lf %lf %lf", &escolha, &num1, &num2, &num3);

    if (num1 > num2)
    {
        sup = num1;
        num1 = num2;
        num2 = sup;
    }
    if (num1 > num3)
    {
        sup = num1;
        num1 = num3;
        num3 = sup;
    }
    if (num2 > num3)
    {
        sup = num2;
        num2 = num3;
        num3 = sup;
    }

    switch (escolha)
    {
    case (1):
        printf("%.2lf %.2lf %.2lf\n", num1, num2, num3);
        break;

    case (2):
        printf("%.2lf %.2lf %.2lf\n", num3, num2, num1);
        break;

    case (3):
        printf("%.2lf %.2lf %.2lf\n", num2, num3, num1);
        break;

    default:
        printf("TU EH BURRO PORRA????\n");
    }

    return 0;
}