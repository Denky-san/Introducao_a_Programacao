#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *arquivo_usu, *questao3;
    char c, nome_arq_usu[100], nome_arq_questao3[100];
    int i = 0;

    gets(nome_arq_usu);
    gets(nome_arq_questao3);

    arquivo_usu = fopen(nome_arq_usu, "r");

    if (!(arquivo_usu = fopen(nome_arq_usu, "r")))
    {
        printf("Erro! Arquivo nao encontrado!\n");
        exit(1);
    }

    questao3 = fopen(nome_arq_questao3, "w");

    if (!(questao3 = fopen(nome_arq_questao3, "w")))
    {
        printf("Erro! Arquivo nao encontrado!\n");
        exit(1);
    }

    while (!feof(arquivo_usu))
    {
        c = getc(arquivo_usu);

        if (c >= 65 || c<= 90)
        {
            c = toupper(c);
            putc(c, questao3);
        }
        else
        {
            putc(c, questao3);
        }
    }

    fclose(arquivo_usu);
    fclose(questao3);

    return 0;
}
