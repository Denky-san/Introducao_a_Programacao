#include <stdio.h>

int main()
{
    double salario;

    scanf("%lf", &salario);

    if (salario <= 280)
    {
        printf("O valor do salario antes do reajuste eh: %.2lf\n", salario);
        printf("O percentual de aumento aplicado eh: %d por cento\n", 20);
        printf("O valor do aumento eh: %.2lf\n", salario * 0.2);
        printf("O novo salario apos o aumento eh: %.2lf\n", salario * 1.2);
    }
    else if (salario > 280 && salario <= 700)
    {
        printf("O valor do salario antes do reajuste eh: %.2lf\n", salario);
        printf("O percentual de aumento aplicado eh: %d por cento\n", 15);
        printf("O valor do aumento eh: %.2lf\n", salario * 0.15);
        printf("O novo salario apos o aumento eh: %.2lf\n", salario * 1.15);
    }
    else if (salario > 700 && salario <= 1500)
    {
        printf("O valor do salario antes do reajuste eh: %.2lf\n", salario);
        printf("O percentual de aumento aplicado eh: %d por cento\n", 10);
        printf("O valor do aumento eh: %.2lf\n", salario * 0.10);
        printf("O novo salario apos o aumento eh: %.2lf\n", salario * 1.10);
    }
    else
    {
        printf("O valor do salario antes do reajuste eh: %.2lf\n", salario);
        printf("O percentual de aumento aplicado eh: %d por cento\n", 5);
        printf("O valor do aumento eh: %.2lf\n", salario * 0.05);
        printf("O novo salario apos o aumento eh: %.2lf\n", salario * 1.05);
    }

    return 0;
}
