#include <stdio.h>
#include <stdlib.h>

void troca_valores(int *num1, int *num2)
{
    int aux;
    aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}

int main()
{
    int A, B, *ponteiro_int, *ponteiro_int2;

    ponteiro_int = &A;
    ponteiro_int2 = &B;

    printf("Escreva dois valores sendo eles um impar e um par respectivamente\n");

    scanf("%d %d", &A, &B);

    troca_valores(ponteiro_int, ponteiro_int2);

    printf("Os valores de A e B sao: %d %d\n", *ponteiro_int, *ponteiro_int2);

    return 0;
}