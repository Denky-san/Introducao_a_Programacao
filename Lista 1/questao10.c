#include <stdio.h>

int main()
{
    float f;

    printf("Digite o valor da temperatura em graus Fahrenheit\n");
    scanf("%f", &f);
    
    printf("%.2f em graus Fahrenheit e igual a %.2f em graus Celcius\n", f, (f - 32) / 1.8);

    return 0;
}
