#include <stdio.h>
#include <stdlib.h>

int main()
{

    //definindo variaveis
    int a = 5, opcao = 1;

    //condicional simples
    if (a == 5)
    {
        printf("A variavel a = 5\n");
    }
    //numero par ou impar
    if (a % 2 == 1)
    {
        printf("A variavel a eh impar\n");
    }
    else
    {
        printf("A variavel a eh par\n");
    }
    //condicional composta
    if (opcao == 1)
    {
        printf("A opcao eh igual a 1\n");
    }
    else if (opcao == 2)
    {
        printf("a opcao eh 2\n");
    }
    else
    {
        printf("A opcao n eh igual a 1 nem igual a 2\n");
    }

    return 0;
    system("pause");
}
