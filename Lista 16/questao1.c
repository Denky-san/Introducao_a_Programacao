#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *arquivo;
    char c, string[1000];
    int i;

    arquivo = fopen("arq.txt", "w");

    if (!(arquivo = fopen("arq.txt", "w")))
    {
        printf("Erro! Arquivo nao encontrado!\n");
        exit(1);
    }

    gets(string);

    for (i = 0; i < 1000; i++)
    {
        if (string[i] == '0')
        {
            fclose(arquivo);
        }

        putc(string[i], arquivo);
    }

    arquivo = fopen("arq.txt", "r");

    while ((c = fgetc(arquivo)) != EOF)
    {
        printf("%c", c);
    }

    fclose(arquivo);

    return 0;
}
