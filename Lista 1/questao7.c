#include <stdio.h>

int main()
{
    float a;

    printf("Digite o valor do raio do circulo\n");
    scanf("%f", &a);
    
    printf("\nO valor da area de um circulo com raio %.1f e: %.2f\n\n", a, 3.14 * (a * a));

    return 0;
}
