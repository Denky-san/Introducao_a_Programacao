#include <stdio.h>
#include <string.h>

int main()
{
    char string1[51], string2[51];
    int qtd_teste, indice, menor_tamanho, maior_tamanho, i, j, k;

    scanf("%d ", &qtd_teste);

    char string3[qtd_teste + 1][101];

    for (i = 1; i <= qtd_teste; i++)
    {
        scanf("%s", string1);
        indice = 0;
        memset(string3[i], 0, 101);
        scanf("%s", string2);
        int tamanho1 = strlen(string1);
        int tamanho2 = strlen(string2);

        if (tamanho1 > tamanho2)
        {
            menor_tamanho = tamanho2;
            maior_tamanho = tamanho1;
        }
        else
        {
            menor_tamanho = tamanho1;
            maior_tamanho = tamanho2;
        }

        for (j = 0; j < menor_tamanho; j++)
        {
            string3[i][indice] = string1[j];
            indice++;
            string3[i][indice] = string2[j];
            indice++;
        }

        if (maior_tamanho == strlen(string1))
        {
            for (k = j; k < maior_tamanho; k++)
            {
                string3[i][indice] = string1[k];
                indice++;
            }
        }
        else
        {
            for (k = j; k < maior_tamanho; k++)
            {
                string3[i][indice] = string2[k];
                indice++;
            }
        }
    }

    for (i = 1; i <= qtd_teste; i++)
    {
        puts(string3[i]);
    }

    return 0;
}
