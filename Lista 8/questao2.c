#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inteiro, inteiro2, *ponteiro_int, *ponteiro_int2;

    ponteiro_int = &inteiro;
    ponteiro_int2 = &inteiro2;

    scanf("%d %d", &inteiro, &inteiro2);

    if (ponteiro_int > ponteiro_int2)
    {
        printf("O maior endereco e: %p", ponteiro_int);
    }
    else
    {
        printf("O maior endereco e: %p", ponteiro_int2);
    }

    return 0;
}
