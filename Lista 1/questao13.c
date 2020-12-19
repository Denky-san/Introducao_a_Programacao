#include <stdio.h>

int main()
{
    float a;

    printf("Digite a sua altura\n");
    scanf("%f", &a);

    printf("Seu peso ideal sera: %f\n", (72.7 * a) - 58.2);

    return 0;
}
