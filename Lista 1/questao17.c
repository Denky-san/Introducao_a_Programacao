#include <stdio.h>
#include <math.h>

int main()
{
    int metros_lata = 54, valor_lata = 80;
    float areaPintada;

    printf("Qual o valor em metros quadrados da area a ser pintada?\n\n");
    scanf("%f", &areaPintada);
    printf("\nQuantidade de latas a serem compradas: %.0f\n", ceil(areaPintada / metros_lata));
    printf("\nPreco total: %.0f\n", valor_lata * ceil(areaPintada / metros_lata));

    return 0;
}
