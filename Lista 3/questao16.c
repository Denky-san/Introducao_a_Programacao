#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, sup, sup_1, sup_2, sup_3;

    scanf("%d", &numero);

    if (numero >= 0 && numero < 10)
    {
        printf("PALINDROMO\n");
    }
    else if (numero >= 10 && numero < 100)
    {
        if (numero % 11 == 0)
        {
            printf("PALINDROMO\n");
        }
        else
        {
            printf("NAO PALINDROMO\n");
        }
    }
    else if (numero > 100 && numero <= 1000)
    {
        sup = numero % 10;
        sup_1 = numero / 100;

        if (sup == sup_1)
        {
            printf("PALINDROMO\n");
        }
        else
        {
            printf("NAO PALINDROMO\n");
        }
    }
    else if (numero >= 1000 && numero < 10000)
    {
        sup = numero % 100;
        sup_1 = sup % 10;
        sup_2 = sup / 10;
        sup_3 = (numero / 100) % 10;

        if (numero / 1000 == sup_1 && sup_3 == sup_2)
        {
            printf("PALINDROMO\n");
        }
        else
        {
            printf("NAO PALINDROMO\n");
        }
    }
    else if (numero >= 10000 && numero < 100000)
    {
        sup = numero % 100;
        sup_1 = sup % 10;
        sup_2 = sup / 10;
        sup_3 = (numero / 1000) % 10;

        if (numero / 10000 == sup_1 && sup_3 == sup_2)
        {
            printf("PALINDROMO\n");
        }
        else
        {
            printf("NAO PALINDROMO\n");
        }
    }
    else
    {
        printf("NAO PALINDROMO\n");
    }

    return 0;
}