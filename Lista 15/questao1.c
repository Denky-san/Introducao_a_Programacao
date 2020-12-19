#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *arquivo;
    char c, str[30];
    int i, cont_vogal = 0, cont_cons = 0;

    gets(str);

    arquivo = fopen(str, "r");

    if (!(arquivo = fopen(str, "r")))
    {
        printf("Erro! Impossivel abrir o arquivo!\n");
        exit(1);
    }

    while (!feof(arquivo))
    {
        c = getc(arquivo);

        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        {
            if (c == 65 ||
                c == 69 ||
                c == 73 ||
                c == 79 ||
                c == 85 ||
                c == 97 ||
                c == 101 ||
                c == 105 ||
                c == 111 ||
                c == 117)
            {
                cont_vogal++;
            }
            else
            {
                cont_cons++;
            }
        }
    }

    printf("vogais = %d\nconsoantes = %d", cont_vogal, cont_cons);

    fclose(arquivo);

    return 0;
}
