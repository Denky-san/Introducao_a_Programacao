#include <stdio.h>

int main()
{
    float a;

    printf("Digite a sua altura\n");
    scanf("%f", &a);
    
    printf("Seu peso ideal sera: %f se voce for homem\n", (72.7 * a) - 58.2);
    printf("Seu peso ideal sera: %f se voce for mulher\n", (62.1 * a) - 44.7);

    return 0;
}
