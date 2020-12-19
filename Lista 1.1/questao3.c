#include <stdio.h>
#include <stdlib.h>

int main()
{
    double taxa_fixa, taxa_km_rodado, num_dias, num_km_rodados, valor_total;

    scanf("%lf %lf %lf %lf", &taxa_fixa, &taxa_km_rodado, &num_dias, &num_km_rodados);

    valor_total = ((taxa_fixa * num_dias) * 0.9) + (taxa_km_rodado * num_km_rodados);

    printf("O valor total do aluguel eh: %.2lf\n", valor_total);
    printf("O valor do desconto eh: %.2lf\n", (taxa_fixa * num_dias) * 0.1);
    printf("O numero de dias eh: %.2lf\n", num_dias);
    printf("O numero de km rodados eh: %.2lf\n", num_km_rodados);
    
    return 0;
}