#include <stdio.h>

int main()
{
    float sh, h;

    printf("Quantos reais voce ganha por hora?\n");
    scanf("%f", &sh);

    printf("Quantas horas voce trabalha por mes?\n");
    scanf("%f", &h);
    
    printf("\nO seu salario bruto no mes em questao e: %.2f reais\n", sh * h);
    printf("\nVoce pagou: %.2f reais para o INSS\n", ((sh * h) * 0.08));
    printf("\nVoce pagou: %.2f reais para o Sindicato\n", ((sh * h) * 0.05));
    printf("\nO seu salario liquido e: %.2f reais\n", ((sh * h) - ((sh * h) * 0.08) - ((sh * h) * 0.05) - ((sh * h) * 0.11)));

    return 0;
}
