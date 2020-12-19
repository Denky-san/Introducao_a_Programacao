#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Dados_alunos
{
    char nomes[40];
    float notas_finais;
} data;

int main()
{
    int num_alunos, i, j, maior_nota;
    char buffer[10000];
    FILE *arquivo;

    scanf("%d", &num_alunos);

    data *dados;
    dados = (data *)malloc(num_alunos * sizeof(data));

    arquivo = fopen("Aluno_notas_2.dat", "wb");

    if (!(arquivo = fopen("Aluno_notas_2.dat", "wb")))
    {
        printf("Erro! Arquivo nao encontrado!\n");
        exit(1);
    }

    for (i = 0; i < num_alunos; i++)
    {
        scanf(" %[^\n]s", buffer);
        scanf("%f", &dados[i].notas_finais);

        if (dados[i].notas_finais > dados[i - 1].notas_finais)
        {
            maior_nota = i;
        }
        
        strcpy(dados[i].nomes, buffer);
    }

    for (i = 0; i < num_alunos; i++)
    {
        fprintf(arquivo, "%s ", dados[i].nomes);
        fprintf(arquivo, "%.2f", dados[i].notas_finais);
        fprintf(arquivo, "\n");
    }

    printf("O aluno com maior nota eh: %s", dados[maior_nota].nomes);
    
    free(dados);
    fclose(arquivo);

    return 0;
}
