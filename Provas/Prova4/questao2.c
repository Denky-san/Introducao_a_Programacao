#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pessoas
{
    int matricula;
    int idade;
    int num_filhos;
    char sexo;
    double salario;
} funcionario;

int main()
{
    int qtd_func, i, cont = 0, cont2 = 0, cont3 = 0, cont4 = 0, soma_idades = 0, soma_filhos = 0;
    float media_idades, media_filhos, renda_per;

    funcionario *trabalhadores;

    scanf("%d", &qtd_func);

    trabalhadores = (funcionario *)malloc(qtd_func * sizeof(funcionario));

    for (i = 0; i < qtd_func; i++)
    {
        scanf("%d", &trabalhadores[i].matricula);
        scanf("%d", &trabalhadores[i].idade);
        scanf("%d", &trabalhadores[i].num_filhos);
        scanf(" %c", &trabalhadores[i].sexo);
        scanf("%lf", &trabalhadores[i].salario);
    }

    for (i = 0; i < qtd_func; i++)
    {
        soma_idades = soma_idades + trabalhadores[i].idade;
        soma_filhos = soma_filhos + trabalhadores[i].num_filhos;
    }

    media_idades = soma_idades / qtd_func;
    media_filhos = soma_filhos / qtd_func;

    for (i = 0; i < qtd_func; i++)
    {
        if (trabalhadores[i].salario > 3600 && trabalhadores[i].idade > media_idades)
        {
            cont++;
        }
    }

    for (i = 0; i < qtd_func; i++)
    {
        if (trabalhadores[i].sexo == 'F' && trabalhadores[i].num_filhos > media_filhos)
        {
            cont2++;
        }
    }

    for (i = 0; i < qtd_func; i++)
    {
        if (trabalhadores[i].sexo == 'M' && trabalhadores[i].num_filhos > media_filhos)
        {
            cont3++;
        }
    }

    for (i = 0; i < qtd_func; i++)
    {
        renda_per = trabalhadores[i].salario / (trabalhadores[i].num_filhos + 1);

        if (trabalhadores[i].idade > 47 && renda_per < 2400)
        {
            cont4++;
        }
    }

    printf("%d %d %d %d\n", cont, cont2, cont3, cont4);

    free(trabalhadores);

    return 0;
}
