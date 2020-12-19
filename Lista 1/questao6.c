#include <stdio.h>

int main()
{
    float a;

    printf("Digite a quantidade de metros que voce deseja converter\n");
    scanf("%f", &a);
    
    printf("\nO valor de %.1f metros em centimetros e: %.1f centimetros\n\n", a, a * 100);

    return 0;
}
