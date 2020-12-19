#include <stdio.h>

int main()
{
    float raio;

    printf("Digite o valor do raio do circulo\n");
    scanf("%f", &raio);
    
    printf("O valor da area de um circulo com raio %.1f e: %.2f\n", raio, 3.14 * (raio * raio));

    return 0;
}
