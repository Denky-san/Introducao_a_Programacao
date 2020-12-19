#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma;

    soma = A[0] + A[1] + A[5];

    printf(" a soma dos valores eh: %d\n", soma);

    A[4] = 100;

    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", A[i]);
    }

    return 0;
}
