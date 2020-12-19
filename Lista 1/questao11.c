#include <stdio.h>

int main()
{
    float c;

    printf("Digite o valor da temperatura em graus Celcius\n");
    scanf("%f", &c);
    
    printf("%.2f em graus Celcius e igual a %.2f em graus Fahrenheit\n", c, c * 1.8 + 32);

    return 0;
}
