#include <stdio.h>
#include <stdlib.h>

void main()
{
    //variaveis
    int a = 5, b = 10, c = 15;

    //Maior
    if (a > 2)
    {
        printf("%d eh maior que 2!\n\n", a);
    }

    //Maior ou igual
    if (c >= b)
    {
        printf("%d eh maior ou igual a %d!\n\n", c, b);
    }

    //Menor
    if (a < 10)
    {
        printf("%d eh menor que 10!\n\n", a);
    }

    //Menor igual
    if (b <= c)
    {
        printf("%d eh menor ou igual a %d!\n\n", b, c);
    }

    //Diferente
    if (c != 10)
    {
        printf("%d nao eh 10!\n\n", c);
    }

    system("pause");
}
