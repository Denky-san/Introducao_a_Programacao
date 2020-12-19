#include <stdio.h>
#include <string.h>

//Recebe uma string, retirando-lhe todos os caracteres que não se encontram repetidos.
char letraRepetida[50];

char repeticoes(char a[])
{
    int temp = strlen(a);

    int count = 0;

    for (int i = 0; i < temp; i++)
    {
        for (int j = 0; j < temp; j++)
        {
            if (a[i] == a[j] && i != j && a[i] != ' ')
            {
                letraRepetida[count] = a[i];
                count++;
                break;
            }
        }
    }

    return (letraRepetida);
}

int main()
{
    char Nome[50] = {0};

    gets(Nome);

    repeticoes(Nome);

    printf("%s", letraRepetida);

    return (0);
}