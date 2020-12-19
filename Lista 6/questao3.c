#include <stdio.h>
#include <stdlib.h>

int main()
{
    double numero;

    for (int i = 1; i <= 10; i++)
    {
        scanf("%lf", &numero);
        printf("A metade de cada numero escrito eh: %.2lf\n", numero / 2);
    }
    return 0;
}
