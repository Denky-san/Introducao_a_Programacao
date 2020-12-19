#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void remove_vogais(char *str, int *vogais)
{
    char vogais_declaradas[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int tamanho, i, j, cont = 0;

    tamanho = strlen(str);

    for (i = 0; i < tamanho; i++)
    {
        cont = 0;
        for (j = 0; j < 10; j++)
        {
            if (str[i] == vogais_declaradas[j])
            {
                vogais[cont]++;

                for (j = i; j < tamanho; j++)
                {
                    str[j] = str[j + 1];
                }

                tamanho--;
                i--;
            }

            if (j % 2 != 0)
            {
                cont++;
            }
        }
    }

    printf("%s\n", str);
    printf("a: %d\n", vogais[0]);
    printf("e: %d\n", vogais[1]);
    printf("i: %d\n", vogais[2]);
    printf("o: %d\n", vogais[3]);
    printf("u: %d\n", vogais[4]);
}

int main()
{
    char frase[257];
    int vogais[5] = {0};

    scanf("%[^\n]s", frase);

    remove_vogais(&frase, &vogais);

    return 0;
}