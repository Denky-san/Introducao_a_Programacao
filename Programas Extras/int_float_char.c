#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a = 15;
    float b = 2.3;
    char c = 'a';

    //escrevendo na tela
    printf("O valor de a eh: %d\n", a);
    printf("O valor de b eh: %.1f\n", b);
    printf("O valor de c eh: %c\n\n", c);
    printf("Insira o novos valores para A,B e C sendo eles respectivamente um numero inteiro, um numero decimal e uma letra\n");

    //lendo valores
    scanf("%d", &a);
    scanf("%f", &b);
    scanf(" %c", &c);

    //escrevendo na tela
    printf("O valor de a eh: %d\n", a);
    printf("O valor de b eh: %.1f\n", b);
    printf("O valor de c eh: %c\n", c);
    system("pause");
}
