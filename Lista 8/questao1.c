#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inteiro, *ponteiro_int;
    float flutuante, *ponteiro_flutuante;
    char letra, *ponteiro_letra;

    ponteiro_int = &inteiro;
    ponteiro_flutuante = &flutuante;
    ponteiro_letra = &letra;

    scanf("%d %f %c", &inteiro, &flutuante, &letra);

    printf("Valores antes da alteracao\nInteiro = %d\nReal = %.2f\nChar = %c\n", *ponteiro_int, *ponteiro_flutuante, *ponteiro_letra);

    *ponteiro_int = 85;
    *ponteiro_flutuante = 45.36;
    *ponteiro_letra = 'j';

    printf("Valores apos da alteracao\nInteiro = %d\nReal = %.2f\nChar = %c\n", *ponteiro_int, *ponteiro_flutuante, *ponteiro_letra);

    return 0;
}
