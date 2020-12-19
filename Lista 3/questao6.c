#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario;

    scanf("%lf", &salario);

    printf("SALARIO COM REAJUSTE = %.2lf\n", (salario <= 300) ? salario * 1.5 : salario * 1.3);

    return 0;
}