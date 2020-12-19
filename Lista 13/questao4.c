#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Planilha
{
    int CodigoCurso;
    double ValorPorCreditoCurso;
    char NomeDoCurso[100];

} Universidade;

typedef struct Planilha2
{
    char NomeDoAluno[100];
    char NomeDoCursoDoAluno[100];
    int CodigoCursoAluno;
    int CreditosAtuais;
    double ValorPorCreditoAluno;

} Dados;

int main()
{
    int N, M, i, j, w, f;
    Universidade Curso[30];
    Dados Aluno[50];
    char **NomeDoCurso0;
    char **NomeDoAluno0;

    scanf("%d", &N);

    NomeDoCurso0 = (char *)malloc(N * sizeof(char *));

    for (i = 0; i < N; i++)
    {
        scanf("%d", &Curso[i].CodigoCurso);
        scanf("%lf", &Curso[i].ValorPorCreditoCurso);
        scanf(" %[^\n]s", Curso[i].NomeDoCurso);

        for (w = 0; w < strlen(Curso[i].NomeDoCurso); w++)
        {
            NomeDoCurso0[w] = (char *)malloc(strlen(Curso[w].NomeDoCurso + 1) * sizeof(char));
            strcpy(NomeDoCurso0[w], Curso[w].NomeDoCurso);
        }
    }

    scanf("%d", &M);

    NomeDoAluno0 = (char *)malloc(M * sizeof(char *));

    for (i = 0; i < M; i++)
    {
        scanf(" %[^\n]s", Aluno[i].NomeDoAluno);

        for (f = 0; f < strlen(Aluno[i].NomeDoAluno + 1); f++)
        {
            NomeDoAluno0[f] = (char *)malloc(strlen(Aluno[f].NomeDoAluno + 1) * sizeof(char));
            strcpy(NomeDoAluno0[f], Aluno[f].NomeDoAluno);
        }
        scanf("%d", &Aluno[i].CodigoCursoAluno);

        for (j = 0; j < N; j++)
        {
            if (Aluno[i].CodigoCursoAluno == Curso[j].CodigoCurso)
            {
                strcpy(NomeDoCurso0[i], Curso[j].NomeDoCurso);
                Aluno[i].ValorPorCreditoAluno = Curso[j].ValorPorCreditoCurso;
            }
        }
        scanf("%d", &Aluno[i].CreditosAtuais);
    }

    for (i = 0; i < M; i++)
    {
        printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %0.2lf Mensalidade: %0.2lf\n",
               NomeDoAluno0[i], NomeDoCurso0[i], Aluno[i].CreditosAtuais, Aluno[i].ValorPorCreditoAluno, (Aluno[i].CreditosAtuais * Aluno[i].ValorPorCreditoAluno));
    }

    return (0);
}