#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor_x, valor_y;

    scanf("%d", &valor_x);

    if (valor_x < 1)
    {
       valor_y = valor_x;
    }
    else if (valor_x == 1)
    {
        valor_y = 0;
    }
    else if (valor_x > 1)
    {
       valor_y = valor_x * valor_x;
    }

    printf("Y = %d", valor_y);

    return 0;
}