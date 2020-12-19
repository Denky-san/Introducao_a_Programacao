#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double custo_fabrica, pct_distribuidor, pct_impostos, preco_dist, preco_impost;

    scanf("%lf %lf %lf", &custo_fabrica, &pct_distribuidor, &pct_impostos);

    preco_dist = (custo_fabrica / 100) * pct_distribuidor;
    preco_impost = (custo_fabrica / 100) * pct_impostos;

    printf(" O VALOR DO CARRO E = %.2lf\n", custo_fabrica + preco_impost + preco_dist);

    return 0;
}