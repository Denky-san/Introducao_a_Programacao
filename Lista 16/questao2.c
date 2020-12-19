#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *arquivo_usu, *arquivo;
    char c, nome_arq_usu[100];
    int i = 0;

    gets(nome_arq_usu);

    arquivo_usu = fopen(nome_arq_usu, "r");

    if (!(arquivo_usu = fopen(nome_arq_usu, "r")))
    {
        printf("Erro! Arquivo nao encontrado!\n");
        exit(1);
    }

    arquivo = fopen("arquivo.txt", "w");

    if (!(arquivo = fopen("arquivo.txt", "w")))
    {
        printf("Erro! Arquivo nao encontrado!\n");
        exit(1);
    }

    while (!feof(arquivo_usu))
    {
        c = getc(arquivo_usu);

        if (c == 65 ||
            c == 69 ||
            c == 73 ||
            c == 79 ||
            c == 85 ||
            c == 97 ||
            c == 101 ||
            c == 105 ||
            c == 111 ||
            c == 117)
        {
            c = '*';
            putc(c, arquivo);
        }
        else
        {
            putc(c, arquivo);
        }
    }

    fclose(arquivo_usu);
    fclose(arquivo);

    return 0;
}
