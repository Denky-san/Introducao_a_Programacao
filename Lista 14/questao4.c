#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int qtd_alunos;

typedef struct Alunos
{
    char nome[1000];
    int matricula;
    double media_final;
} aluno;

void fim_de_ano(aluno *student)
{
    int i, cont = 0, cont2 = 0;

    aluno *reprovados;
    aluno *aprovados;

    for (i = 0; i < qtd_alunos; i++)
    {
        if (student->media_final < 5)
        {
            cont++;
        }
        else
        {
            cont2++;
        }
    }

    reprovados = (aluno *)malloc(cont * sizeof(aluno));
    aprovados = (aluno *)malloc(cont2 * sizeof(aluno));

    for (i = 0; i < qtd_alunos; i++)
    {
        if (student->media_final < 5.0)
        {
            //reprovados[cont].nome = student[i].nome;//
            reprovados[cont].matricula = student[i].matricula;
            reprovados[cont].media_final = student[i].media_final;
            cont++;
        }
        else
        {
            //aprovados[cont2].nome = student[i].nome;//
            aprovados[cont2].matricula = student[i].matricula;
            aprovados[cont2].media_final = student[i].media_final;
            cont2++;
        }
    }

    for (i = 0; i < cont; i++)
    {
        printf("%s", reprovados[i].nome);
        printf("%d", reprovados[i].matricula);
        printf("%.2lf", reprovados[i].media_final);
    }

    for (i = 0; i < cont2; i++)
    {
        printf("%s", aprovados[i].nome);
        printf("%d", aprovados[i].matricula);
        printf("%.2lf", aprovados[i].media_final);
    }
}

int main()
{
    int i;

    aluno *student;

    scanf("%d", &qtd_alunos);

    student = (aluno *)malloc(qtd_alunos * sizeof(aluno));

    for (i = 0; i < qtd_alunos; i++)
    {
        scanf(" %[^\n]s", student[i].nome);
        scanf("%d", &student[i].matricula);
        scanf("%lf", &student[i].media_final);
    }

    fim_de_ano(student);

    free(student);

    return 0;
}
