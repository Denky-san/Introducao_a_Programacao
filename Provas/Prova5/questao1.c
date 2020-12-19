#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *arquivo, *arquivo2;
    char c, nome[30], nome2[30], buffer[1000];
    int i = 0, tamanho;

    gets(nome);
    gets(nome2);

    arquivo = fopen(nome, "r");

    if (!(arquivo = fopen(nome, "r")))
    {
        printf("Erro! Impossivel abrir o arquivo!\n");
        exit(1);
    }

    arquivo2 = fopen(nome2, "w");

    if (!(arquivo2 = fopen(nome2, "w")))
    {
        printf("Erro! Impossivel abrir o arquivo!\n");
        exit(1);
    }

    while (!feof(arquivo))
    {
        c = getc(arquivo);
        buffer[i] = c;
        i++;     
    }

    tamanho = strlen(buffer);

    for (i = tamanho - 3; i >= 0; i--)
    {
        fprintf(arquivo2, "%c",buffer[i]);
    }
    
    fclose(arquivo);
    fclose(arquivo2);

    return 0;
}