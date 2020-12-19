#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2;

    scanf("%d %d", &numero1, &numero2);

    printf("O numero %d %s por %d ",numero1, numero1 % numero2 == 0 ? "eh divisivel" : "nao eh divisivel", numero2);

    return 0;
}
