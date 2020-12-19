#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    float b, c;

    printf("Ola! Eu sou a calculadora simples, como posso te ajudar?\n\n");
    printf("Para fazer uma adicao digite 1, subtracao 2, multiplicacao 3, e caso for uma divisao 4\n");
    scanf("%d", &a);

    if (a == 1)
    {
        printf("\nDigite dois valores para voce somar\n");
        scanf("%f %f", &b, &c);
        printf("\nO valor de %.2f + %.2f eh: %.2f\n\n", b, c, b + c);
    }
    else if (a == 2)
    {
        printf("\nDigite dois valores para voce subtrair\n");
        scanf("%f %f", &b, &c);
        printf("\nO valor de %.2f - %.2f eh: %.2f\n\n", b, c, b - c);
    }
    else if (a == 3)
    {
        printf("\nDigite dois valores para voce multiplicar\n");
        scanf("%f %f", &b, &c);
        printf("\nO valor de %.2f * %.2f eh: %.2f\n\n", b, c, b * c);
    }
    else if (a == 4)
    {
        printf("\nDigite dois valores para voce dividir\n");
        scanf("%f %f", &b, &c);
        printf("\nO valor de %.2f / %.2f eh: %.3f\n\n", b, c, b / c);
    }
    else
    {
        printf("\nObrigado por utilizar nossos servicos!\n\n");
    }

    system("pause");
    return 0;
}
