#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario_minimo, kw;
    scanf("%lf %lf", &salario_minimo, &kw);

    printf("Custo por kW: R$%.2lf\n", (salario_minimo * 0.7) / 100);
    printf("Custo do consumo: R$%.2lf\n", ((salario_minimo * 0.7) / 100) * kw);
    printf("Custo com desconto: R$%.2lf\n", (((salario_minimo * 0.7) / 100) * kw) * 0.9);

    return 0;
}