#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *arquivo1, *arquivo2, *arquivo_final;
    char c, nome_arq1[100], nome_arq2[100], nome_arq_final[100];
    int i = 0;

    gets(nome_arq1);
    gets(nome_arq2);
    gets(nome_arq_final);

    arquivo1 = fopen(nome_arq1, "r");

    if (!(arquivo1 = fopen(nome_arq1, "r")))
    {
        printf("Erro! Arquivo nao encontrado!\n");
        exit(1);
    }

    arquivo2 = fopen(nome_arq2, "r");

    if (!(arquivo2 = fopen(nome_arq2, "r")))
    {
        printf("Erro! Arquivo nao encontrado!\n");
        exit(1);
    }

    arquivo_final = fopen(nome_arq_final, "w");

    if (!(arquivo_final = fopen(nome_arq_final, "w")))
    {
        printf("Erro! Arquivo nao encontrado!\n");
        exit(1);
    }

    while (!feof(arquivo1))
    {
        c = getc(arquivo1);

        putc(c, arquivo_final);
    }

    fprintf(arquivo_final, "\n");

    while (!feof(arquivo2))
    {
        c = getc(arquivo2);

        putc(c, arquivo_final);
    }

    fclose(arquivo1);
    fclose(arquivo2);
    fclose(arquivo_final);

    return 0;
}
