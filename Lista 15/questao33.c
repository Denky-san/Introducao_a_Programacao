#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *arquivo;
    char c, str[30], letras[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int i, qtd_letras[26] = {0};

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

        if (c == tolower('A'))
        {
            qtd_letras[0]++;
        }
        else if (c == tolower('B'))
        {
            qtd_letras[1]++;
        }
        else if (c == tolower('C'))
        {
            qtd_letras[2]++;
        }
        else if (c == tolower('D'))
        {
            qtd_letras[3]++;
        }
        else if (c == tolower('E'))
        {
            qtd_letras[4]++;
        }
        else if (c == tolower('F'))
        {
            qtd_letras[5]++;
        }
        else if (c == tolower('G'))
        {
            qtd_letras[6]++;
        }
        else if (c == tolower('H'))
        {
            qtd_letras[7]++;
        }
        else if (c == tolower('I'))
        {
            qtd_letras[8]++;
        }
        else if (c == tolower('J'))
        {
            qtd_letras[9]++;
        }
        else if (c == tolower('K'))
        {
            qtd_letras[10]++;
        }
        else if (c == tolower('L'))
        {
            qtd_letras[11]++;
        }
        else if (c == tolower('M'))
        {
            qtd_letras[12]++;
        }
        else if (c == tolower('N'))
        {
            qtd_letras[13]++;
        }
        else if (c == tolower('O'))
        {
            qtd_letras[14]++;
        }
        else if (c == tolower('P'))
        {
            qtd_letras[15]++;
        }
        else if (c == tolower('Q'))
        {
            qtd_letras[16]++;
        }
        else if (c == tolower('R'))
        {
            qtd_letras[17]++;
        }
        else if (c == tolower('S'))
        {
            qtd_letras[18]++;
        }
        else if (c == tolower('T'))
        {
            qtd_letras[19]++;
        }
        else if (c == tolower('U'))
        {
            qtd_letras[20]++;
        }
        else if (c == tolower('V'))
        {
            qtd_letras[21]++;
        }
        else if (c == tolower('W'))
        {
            qtd_letras[22]++;
        }
        else if (c == tolower('X'))
        {
            qtd_letras[23]++;
        }
        else if (c == tolower('Y'))
        {
            qtd_letras[24]++;
        }
        else if (c == tolower('Z'))
        {
            qtd_letras[25]++;
        }
    }

    for (i = 0; i < 26; i++)
    {
        printf("%c = %d\n", letras[i], qtd_letras[i]);
    }

    fclose(arquivo);

    return 0;
}
