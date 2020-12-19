#include <stdio.h>

int main()
{
    float a;

    printf("Digite o valor do lado do seu quadrado\n");
    scanf("%f", &a);
    
    printf("\nO valor do dobro da area de um quadrado com lado %.1f e: %.2f\n\n", a, (a * a) * 2);

    return 0;
}
