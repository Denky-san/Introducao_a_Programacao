#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int qtd_nomes, tamanho, i, j;

    scanf("%d", &qtd_nomes);

    char buffer[10000];
    char **pessoas;

    pessoas = (char **)malloc(qtd_nomes * sizeof(char *));

    for (i = 0; i < qtd_nomes; i++)
    {
        scanf(" %[^\n]s", buffer);
        tamanho = strlen(buffer);
        pessoas[i] = (char *)malloc((tamanho + 1) * sizeof(char));
        strcpy(pessoas[i], buffer);
    }

    for (i = 0; i < qtd_nomes; i++)
    {
        printf("%s\n", pessoas[i]);
    }

    free(pessoas);

    return 0;
}
