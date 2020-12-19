#include <stdio.h>

int main()
{
    float a, b;

    printf("Quantos reais voce ganha por hora?\n");
    scanf("%f", &a);

    printf("Quantas horas voce trabalha por mes?\n");
    scanf("%f", &b);

    printf("\nO seu salario no mes em questao e: %.2f reais\n", a * b);

    return 0;
}
