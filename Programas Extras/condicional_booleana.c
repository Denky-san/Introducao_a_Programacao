#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main()
{
    bool a = true, b = false;

    //Se A eh verdadeiro
    if (a)
    {
        printf("A eh verdadeiro\n");
    }

    //Comparando o B
    if (b)
    {
        printf("B eh verdadeiro\n");
    }
    else
    {
        printf("B eh falso\n");
    }
    //Comparando uma falsidade
    if (!b)
    {
        printf("B eh falso\n");
    }

    // if (a) significa "se A for verdadeiro", if (!a) significa "se A n�o for verdadeiro"

    system("pause");
}
