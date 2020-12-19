#include <stdio.h>
#include <stdlib.h>

int main()
{
    double vetor[8];
    int x, y;

    for (int i = 0; i < 8; i++)
    {
        scanf("%lf", &vetor[i]);
    }

    printf("digite os valores de x e y\n");
    scanf("%d %d", &x, &y);

    printf("a soma do vetor[%d] e vetor[%d] eh :%.2lf\n", x - 1, y - 1, vetor[x] + vetor[y]);

    return 0;
}