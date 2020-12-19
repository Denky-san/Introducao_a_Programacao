#include <stdio.h>
#include <string.h>

// Devolve o último indice que encontrou c em s. Caso não exista devolva -1.
int ult_ind_chr(char a[], char b)
{
    int tamanho = strlen(a);

    int pos = 0;

    for (int i = 0; i < tamanho; i++)
    {
        if (b == a[i])
        {
            pos = i;
        }
        else
        {
            pos = -1;
        }
    }

    return (pos);
}

int main()
{
    char Nome[20];

    char x;

    int pos0 = 0;

    gets(Nome);

    scanf("%c", &x);

    pos0 = ult_ind_chr(Nome, x);

    printf("%d", pos0);

    return (0);
}