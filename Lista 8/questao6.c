#include <stdio.h>
#include <stdlib.h>

void dobra(int *num1, int *num2)
{
    *num1 = *num1 * 2;
    *num2 = *num2 * 2;
}

int main()
{
    int A, B, *ponteiro_int, *ponteiro_int2;

    ponteiro_int = &A;
    ponteiro_int2 = &B;

    scanf("%d %d", &A, &B);

    dobra(ponteiro_int, ponteiro_int2);

    printf("O dobro dos valores de A e B sao: %d %d\n", A, B);

    return 0;
}