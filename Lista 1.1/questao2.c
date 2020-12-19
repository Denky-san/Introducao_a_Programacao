#include <stdio.h>
#include <stdlib.h>

int main()
{

    int paes, broas;
    float valor_arrecadado;

    scanf("%d %d", &paes, &broas);

    valor_arrecadado = (paes * 0.12) + (broas * 1.5);

    printf("O valor arrecado com a venda dos paes e das broas eh: %.2lf\n", valor_arrecadado);
    printf("O valor a ser guardado eh: %.2lf\n", valor_arrecadado * 0.1);

    return 0;
}