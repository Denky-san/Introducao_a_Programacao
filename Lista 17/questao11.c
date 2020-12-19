#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num_alunos, tamanho, i, j;
    char **nomes, buffer[10000];
    float *notas_finais;
    FILE *arquivo;

    scanf("%d", &num_alunos);

    arquivo = fopen("Aluno_notas.txt", "w");

    if (!(arquivo = fopen("Aluno_notas.txt", "w")))
    {
        printf("Erro! Arquivo nao encontrado!\n");
        exit(1);
    }

    nomes = (char **)malloc(num_alunos * sizeof(char *));
    notas_finais = (float *)malloc(num_alunos * sizeof(float));

    for (i = 0; i < num_alunos; i++)
    {
        scanf(" %[^\n]s", buffer);
        scanf("%f", &notas_finais[i]);
        tamanho = strlen(buffer);
        nomes[i] = (char *)malloc((tamanho + 1) * sizeof(char));
        strcpy(nomes[i], buffer);
    }

    for (i = 0; i < num_alunos; i++)
    {
        fprintf(arquivo, "%s", nomes[i]);
        
        for ( j = 0; j <= 40 - tamanho; j++)
        {
            fprintf(arquivo, " ");
        }

        fprintf(arquivo, "%.2f", notas_finais[i]);
        fprintf(arquivo, "\n");
    }

    free(nomes);
    free(notas_finais);
    fclose(arquivo);

    return 0;
}
