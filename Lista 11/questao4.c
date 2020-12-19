#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int qtd_teste, i, vetor_store[5];
    char vetor_palavras[6];
    scanf("%d ", &qtd_teste);

    for (i = 0; i < qtd_teste; i++)
    {
        memset(vetor_palavras, 0, 5);
        gets(vetor_palavras);

        if (strlen(vetor_palavras) == 5)
        {
            vetor_store[i] = 3;
        }
        else
        {
            if (vetor_palavras[0] != 't' && vetor_palavras[0] != 'o')
            {
                if (vetor_palavras[1] == 'w')
                {
                    vetor_store[i] = 2;
                }
                if (vetor_palavras[1] == 'n')
                {
                    vetor_store[i] = 1;
                }
            }
            else if (vetor_palavras[0] == 't')
            {
                if (vetor_palavras[1] == 'n' || vetor_palavras[2] == 'e')
                {
                    vetor_store[i] = 1;
                }
                if (vetor_palavras[1] == 'w' || vetor_palavras[2] == 'o')
                {
                    vetor_store[i] = 2;
                }
            }
            else if (vetor_palavras[0] == 'o')
            {
                if (vetor_palavras[1] == 'w' || vetor_palavras[2] == 'o')
                {
                    vetor_store[i] = 2;
                }

                if (vetor_palavras[1] == 'n' || vetor_palavras[2] == 'e')
                {
                    vetor_store[i] = 1;
                }
            }
        }
    }

    for (i = 0; i < qtd_teste; i++)
    {
        printf("%d\n", vetor_store[i]);
    }
    return 0;
}
