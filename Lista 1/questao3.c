#include <stdio.h>

int main()
{
    float b, c;

    printf("Digite dois valores para voce somar\n");
    scanf("%f %f", &b, &c);

    printf("\nO valor de %.2f + %.2f eh: %.2f\n\n", b, c, b + c);

    return 0;
}
