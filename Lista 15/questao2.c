#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *arquivo;
    char c, letra, str[30];
    int i, cont = 0;

    gets(str);
    scanf("%c", &letra);

    arquivo = fopen(str, "r");

    if (!(arquivo = fopen(str, "r")))
    {
        printf("Erro! Arquivo nao encontrado!\n");
        exit(1);
    }

    while (!feof(arquivo))
    {
        c = getc(arquivo);

        if ((letra == c))
        {
            cont++;
        }
    }

    printf("O caracterre '%c' ocorre %d vezes\n", letra, cont);

    fclose(arquivo);

    return 0;
}
