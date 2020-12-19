#include <stdio.h>
#include <string.h>

//Recebe uma string e compacta num único caracetere qualquer conjunto de caracteres repetidos
char NomeCompacto[50] = {0};

char strpack(char a[])
{
    char aux;

    int count = 0;

    for (int i = 0; i < strlen(a); i++, count++)
    {
        NomeCompacto[count] = a[i];

        while (a[i + 1] == NomeCompacto[count])
        {
            i++;
        }
    }

    return (NomeCompacto);
}

int main()
{

    char Nome[50] = {0};

    gets(Nome);

    strpack(Nome);

    printf("%s", NomeCompacto);
}