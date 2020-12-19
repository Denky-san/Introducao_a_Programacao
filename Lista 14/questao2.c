#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int qtd_pessoas;

typedef struct Pessoas
{
    char nome[1000];
    double peso;
    double altura;
} pessoa;

void imc(pessoa *people)
{
    int i;
    double IMC[qtd_pessoas];

    for (i = 0; i < qtd_pessoas; i++)
    {
        IMC[i] = people[i].peso / (people[i].altura * people[i].altura);
    }
    for (i = 0; i < qtd_pessoas; i++)
    {
        printf("%.2lf\n", IMC[i]);
    }
}

int main()
{
    int i;

    pessoa *person;

    scanf("%d", &qtd_pessoas);

    person = (pessoa *)malloc(qtd_pessoas * sizeof(pessoa));

    for (i = 0; i < qtd_pessoas; i++)
    {
        scanf(" %[^\n]s", person[i].nome);
        scanf("%lf", &person[i].peso);
        scanf("%lf", &person[i].altura);
    }

    imc(person);

    free(person);

    return 0;
}
