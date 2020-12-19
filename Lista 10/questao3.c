#include <stdio.h>
#include <string.h>

//Devolve o n° de caracteres alfabeticos em s.
int strcounta(char a[], char b[])
{
    int count = 0;

    int tamanho = strlen(a);

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < 27; j++)
        {
            if (a[i] == b[j])
            {
                count++;
            }
        }
    }

    return (count);
}

int main()
{
    char string[25], Alfabeto[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'w', 'y', 'z'};

    gets(string);

    printf("%d ", strcounta(string, Alfabeto));

    return (0);
}