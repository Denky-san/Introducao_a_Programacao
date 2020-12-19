#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matricula, dependetes;
    double salario_min, salario_func, taxa_imposto, imposto_bruto, imposto_liquido, resultado, imposto_normal;

    scanf("%d %lf %d %lf %lf", &matricula, &salario_min, &dependetes, &salario_func, &taxa_imposto);

    if (salario_func > salario_min * 12)
    {
        imposto_bruto = salario_func * 0.2;
    }
    else if (salario_func > salario_min * 5 && salario_func <= salario_min * 12)
    {
        imposto_bruto = salario_func * 0.08;
    }
    else if (salario_func <= salario_min * 5)
    {
        imposto_bruto = salario_func * 0;
    }

    imposto_liquido = imposto_bruto - (300 * dependetes);
    imposto_normal = (salario_func / 100) * taxa_imposto;
    resultado = imposto_liquido - imposto_normal;

    printf("MATRICULA = %d\n", matricula);
    printf("IMPOSTO BRUTO = %.2lf\n", imposto_bruto);
    printf("IMPOSTO LIQUIDO = %.2lf\n", imposto_liquido);
    printf("RESULTADO = %.2lf\n", resultado);

    if (resultado == 0)
    {
        printf("IMPOSTO QUITADO\n");
    }
    else if (resultado > 0)
    {
        printf("IMPOSTO A PAGAR\n");
    }
    else
    {
        printf("IMPOSTO A RECEBER\n");
    }

    return 0;
}