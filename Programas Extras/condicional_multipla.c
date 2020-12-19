#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a = 10;

    //Conectivo l�gico E (AND), se uma compara��o for falsa n�o vai funcionar
    if (a > 5 && a < 15)
    {
        printf("A esta entre 5 e 15\n");
    }
    else if (a > 5 && a > 15)
    {
        printf("A esta entre 5 e 15\n"); // essa n�o funciona
    }

    //Conectivo l�gico OU (OR), se uma compara��o for verdadeira j� vai funcionar
    if (a > 5 || a < 15)
    {
        printf("A esta entre 5 ou 15\n");
    }

    //Misturando conectivos
    if ((a > 5 && a < 15) || a == 20)
    {
        printf("A esta entre 5 ou 15 ou ela vale 20\n");
    }

    system("pause");
    return 0;
}
