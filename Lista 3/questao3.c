#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    scanf("%lf", &numero);

    printf("%s\n", (numero % 15 == 0) ? "O NUMERO E DIVISIVEL" : "O NUMERO NAO E DIVISIVEL");

    return 0;
}