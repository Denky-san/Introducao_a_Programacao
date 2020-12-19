#include <stdio.h>
#include <stdlib.h>

int main()
{
    double metros;

    scanf("%lf", &metros);

    printf("%.2lf em centimetros equivale a: %.2lf\n", metros, metros * 100);
    
    return 0;
}