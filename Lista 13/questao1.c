#include <stdio.h>
#include <stdlib.h>

typedef struct universidade_particular
{
    int codigo_curso;
    float valor_credito;
    char nome_curso[101];
} PUC;

typedef struct Aluno
{
    char nome_aluno[501];
    int codigo_curso;
    int numero_creditos;
} Estudante;

int main()
{
    int numero_cursos, numero_alunos, i, j;
    float mensalidade;

    scanf("%d", &numero_cursos);
    PUC vetor_cursos[numero_cursos];

    for (i = 0; i < numero_cursos; i++)
    {
        scanf("%d", &vetor_cursos[i].codigo_curso);
        scanf("%f", &vetor_cursos[i].valor_credito);
        scanf(" %[^\n]s", vetor_cursos[i].nome_curso);
    }

    scanf("%d", &numero_alunos);
    Estudante vetor_estudantes[numero_alunos];

    for (i = 0; i < numero_alunos; i++)
    {
        scanf(" %[^\n]s", vetor_estudantes[i].nome_aluno);
        scanf("%d", &vetor_estudantes[i].codigo_curso);
        scanf("%d", &vetor_estudantes[i].numero_creditos);
    }

    for (i = 0; i < numero_alunos; i++)
    {
        for (j = 0; j < numero_cursos; j++)
        {
            if (vetor_estudantes[i].codigo_curso == vetor_cursos[j].codigo_curso)
            {
                mensalidade = vetor_cursos[j].valor_credito * vetor_estudantes[i].numero_creditos;

                printf("Aluno(a):  %s Curso: %s Num.  Creditos:  %d Valor Credito:  %.2f Mensalidade: %.2f\n",
                       vetor_estudantes[i].nome_aluno, vetor_cursos[j].nome_curso, vetor_estudantes[i].numero_creditos, vetor_cursos[j].valor_credito, mensalidade);
            }
        }
    }

    return 0;
}
