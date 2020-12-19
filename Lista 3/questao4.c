#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas;
    
    scanf("%d", &horas);

    printf("O VALOR A PAGAR E = %d\n", (horas % 3 == 0) ? 10 * horas : (horas % 3 * 5) + ((horas / 3) * 10));

    return 0;
}