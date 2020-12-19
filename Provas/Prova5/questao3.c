#include <stdio.h>
#include <stdlib.h>

typedef struct Registro
{
    int matricula;
    char sobrenome[20];
    int nascimento;
} registro;

int main()
{
    FILE *arquivo;
    registro *regis_alunos;
    int num_alunos, i, j;
    char c;

    scanf("%d", &num_alunos);

    regis_alunos = (registro *)malloc(num_alunos * sizeof(registro));

    printf("Entre com as informacoes dos alunos\n");

    for (i = 0; i < num_alunos; i++)
    {
        scanf("%d", &regis_alunos[i].matricula);
        scanf(" %[^\n]s", regis_alunos[i].sobrenome);
        scanf("%d", &regis_alunos[i].nascimento);
    }

    arquivo = fopen("dados_alunos.txt", "w");

    if (!(arquivo = fopen("dados_alunos.txt", "w")))
    {
        printf("Erro! Impossivel abrir o arquivo!\n");
        exit(1);
    }

    for (i = 0; i < num_alunos; i++)
    {
        fprintf(arquivo, "%d\n", regis_alunos[i].matricula);
        fprintf(arquivo, "%s\n", regis_alunos[i].sobrenome);
        fprintf(arquivo, "%d\n", regis_alunos[i].nascimento);
    }

    for (i = 0; i < num_alunos; i++)
    {
        printf("%d\n", regis_alunos[i].matricula);
        printf("%s\n", regis_alunos[i].sobrenome);
        printf("%d\n", regis_alunos[i].nascimento);
    }

    fclose(arquivo);
    free(regis_alunos);
    
    return 0;
}
