#include <stdio.h>
#include <math.h>
#define GALAO 21.6
#define PRECO_GALAO 25
#define LATA 108
#define PRECO_LATA 80

int main()
{
    double area_pintar, area_folga, qtd_latas, valor, restante;

    scanf("%lf", &area_pintar);

    printf("QUANTIDADE DE TINTA COM APENAS LATAS DE 18 LITROS = %.2lf\n", ceil(area_pintar / LATA) * 18);
    printf("PRECO COM APENAS LATAS DE 18 LITROS = %.2lf\n", ceil(area_pintar / LATA) * PRECO_LATA);

    printf("QUANTIDADE DE TINTA COM APENAS GALOES DE 3.6 LITROS = %.2lf\n", ceil(area_pintar / GALAO) * 3.6);
    printf("PRECO COM APENAS GALOES DE 3.6 LITROS = %.2lf\n", ceil(area_pintar / GALAO) * PRECO_GALAO);

    area_folga = area_pintar * 1.1;
    qtd_latas = floor(area_folga / LATA);
    valor = qtd_latas * LATA;
    restante = area_folga - valor;

    if (restante > 0 && restante <= GALAO)
    {
        printf("QUANTIDADE DE TINTA MISTURANDO GALOES E LATAS = %.2lf\n", (qtd_latas * 18) + 3.6);
        printf("PRECO MISTURANDO GALOES E LATAS = %.2lf\n", (qtd_latas * 80) + 25);
    }
    else if (restante >= GALAO && restante <= 2 * GALAO)
    {
        printf("QUANTIDADE DE TINTA MISTURANDO GALOES E LATAS = %.2lf\n", (qtd_latas * 18) + (3.6 * 2));
        printf("PRECO MISTURANDO GALOES E LATAS = %.2lf\n", (qtd_latas * 80) + 50);
    }
    else if (restante >= 2 * GALAO && restante <= 3 * GALAO)
    {
        printf("QUANTIDADE DE TINTA MISTURANDO GALOES E LATAS = %.2lf\n", (qtd_latas * 18) + (3.6 * 3));
        printf("PRECO MISTURANDO GALOES E LATAS = %.2lf\n", (qtd_latas * 80) + 75);
    }
    else if (restante == 0)
    {
        printf("QUANTIDADE DE TINTA MISTURANDO GALOES E LATAS = %.2lf\n", qtd_latas * 18);
        printf("PRECO MISTURANDO GALOES E LATAS = %.2lf\n", qtd_latas * 80);
    }
    else if (restante > 3 * GALAO)
    {
        printf("QUANTIDADE DE TINTA MISTURANDO GALOES E LATAS = %.2lf\n", (qtd_latas + 1) * 18);
        printf("PRECO MISTURANDO GALOES E LATAS = %.2lf\n", (qtd_latas + 1) * 80);
    }

    return 0;
}