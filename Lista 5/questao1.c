#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    scanf("%d", &numero);

    printf("O numero %d eh %s ",numero, numero % 2 == 0 ? "par" : "impar");

    return 0;
}
