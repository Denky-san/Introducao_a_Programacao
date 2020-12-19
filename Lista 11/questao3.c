#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int qtd_teste, i, j, qtd_letras, qtd_vogais, qtd_consoantes;
    char vetor_linha[10000];
    scanf("%d ", &qtd_teste);

    int letra[qtd_teste], vogal[qtd_teste], consoante[qtd_teste];

    for (i = 0; i < qtd_teste; i++)
    {
        qtd_letras = 0;
        qtd_vogais = 0;
        qtd_consoantes = 0;
        gets(vetor_linha);
        int tamanho1 = strlen(vetor_linha);

        for (j = 0; j < tamanho1; j++)
        {
            if ((vetor_linha[j] >= 65 && vetor_linha[j] <= 90) || (vetor_linha[j] >= 97 && vetor_linha[j] <= 122))
            {
                qtd_letras++;

                if (vetor_linha[j] == 65 ||
                    vetor_linha[j] == 69 ||
                    vetor_linha[j] == 73 ||
                    vetor_linha[j] == 79 ||
                    vetor_linha[j] == 85 ||
                    vetor_linha[j] == 97 ||
                    vetor_linha[j] == 101 ||
                    vetor_linha[j] == 105 ||
                    vetor_linha[j] == 111 ||
                    vetor_linha[j] == 117)
                {
                    qtd_vogais++;
                }
                else
                {
                    qtd_consoantes++;
                }
            }
        }
        letra[i] = qtd_letras;
        vogal[i] = qtd_vogais;
        consoante[i] = qtd_consoantes;
    }

    for (i = 0; i < qtd_teste; i++)
    {
        printf("Letras = %d\nVogais = %d\nConsoantes = %d\n", letra[i], vogal[i], consoante[i]);
    }
    return 0;
}
