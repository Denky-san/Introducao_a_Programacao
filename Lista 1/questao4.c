#include <stdio.h>

int main()
{
    float a, b, c, d;

    printf("Digite os 4 valores correspondentes a suas notas bimestrais\n");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    
    printf("\nA media das notas inseridas e %f:\n\n", (a + b + c + d) / 4);

    return 0;
}
