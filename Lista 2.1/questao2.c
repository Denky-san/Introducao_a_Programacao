#include <stdio.h>

int main()
{
    float valor_hora, hora;

    printf("Quantos reais voce ganha por hora?\n");
    scanf("%f", &valor_hora);

    printf("Quantas horas voce trabalha por mes?\n");
    scanf("%f", &hora);

    printf("O seu salario no mes em questao e: %.2f reais\n", hora * valor_hora);

    return 0;
}
