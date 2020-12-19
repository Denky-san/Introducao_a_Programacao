#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Digite dois numeros inteiros e um numero real respectivamente\n");
    scanf("%f %f %f", &a, &b, &c);

    printf("O produto do dobro de %.0f com metade de %.0f e: %.2f\n", a, b, (a * 2) * (b / 2));
    printf("A soma do triplo de %.2f com %.2f e: %.2f\n", a, c, (a * 3) + c);
    printf("%.2f elevado ao cubo e igual a: %.2f\n", c, c * c * c);
    return 0;
}
