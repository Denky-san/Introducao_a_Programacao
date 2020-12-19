#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, aux1 = 0, aux2 = 0, aux3  = 0, aux4 = 0;

    scanf("%d", &numero);

    while (numero >= 0)
    {
        if (numero >= 0 && numero <= 25)
        {
            aux1++;
        }
        else if (numero >= 26 && numero <= 50)
        {
            aux2++;
        }
        else if (numero >= 51 && numero <= 75)
        {
            aux3++;
        }
        else if (numero >= 76 && numero <= 100)
        {
            aux4++;
        }

        scanf("%d", &numero);
    }
    printf("Existem %d numeros no intervalo [0-25], %d no intervalo [26-50], %d no intervalo [51-75] e %d no intervalo [76-100]\n", aux1, aux2, aux3, aux4);

    return 0;
}
