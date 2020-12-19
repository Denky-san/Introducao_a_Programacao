#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int *maior_valor(int vetor[])
{
    int maior = INT_MIN, *ponteiro_maior;

    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }

    ponteiro_maior = &maior;
    return ponteiro_maior;
}

int menor_valor(int vetor[])
{
    int menor = INT_MAX;

    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }
    return (menor);
}

int inverter(int vetor[])
{
    printf("Impressao do vetor na ordem inversa: ");

    for (int i = 9; i >= 0; i--)
    {
        printf("%d ", vetor[i]);
    }
}

int par_impar(int vetor[])
{
    int vetor_par[10], vetor_impar[10], cont1 = 0, cont2 = 0;

    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            vetor_par[cont1] = vetor[i];
            cont1++;
        }
        else
        {
            vetor_impar[cont2] = vetor[i];
            cont2++;
        }
    }

    printf("\nOs valores pares do vetor sao: ");

    for (int i = 0; i < cont1; i++)
    {
        printf("%d ", vetor_par[i]);
    }

    printf("\nOs valores impares do vetor sao: ");

    for (int i = 0; i < cont2; i++)
    {
        printf("%d ", vetor_impar[i]);
    }
}

double media_arit(int vetor[])
{
    double media, soma = 0;

    for (int i = 0; i < 10; i++)
    {
        soma = soma + vetor[i];
    }

    media = soma / 10;

    return media;
}

int main()
{
    int int_positivos[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &int_positivos[i]);
    }

    printf("O maior elemento do vetor e: %d\n", *maior_valor(int_positivos));
    printf("O menor elemento do vetor e: %d\n", menor_valor(int_positivos));
    inverter(int_positivos);
    par_impar(int_positivos);
    printf("\nA media dos valores do vetor e: %.2lf\n", media_arit(int_positivos));

    return 0;
}