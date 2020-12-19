#include <stdio.h>

int main()
{
    float a, b, c, d;

    printf("Digite respectivamente os 4 valores correspondentes a suas notas bimestrais\n");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    
    printf("\nA media das notas inseridas e %f:\n\n", ((a * 1) + (b * 2) + (c * 3) + (d * 4)) / 10);

    return 0;
}
