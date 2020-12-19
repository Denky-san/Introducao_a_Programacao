#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double hora, minuto, segundo;

    scanf("%lf %lf %lf", &hora, &minuto, &segundo);

    printf("O TEMPO EM SEGUNDOS E = %.2lf\n", (hora * 3600) + (minuto * 60) + segundo);

    return 0;
}