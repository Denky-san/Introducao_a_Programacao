#include <stdio.h>
#include <string.h>

//Faz o mesmo que a função strcmp, mas realiza a comparação ignorando se os caracteres estão, em maiusculas ou minúscula (ignore case).
int main()
{
    int x = 0;

    char Nome[25] = {0}, Nome2[25] = {0};

    gets(Nome);

    gets(Nome2);

    x = stricmp(Nome, Nome2);

    if (x > 0)
    {
        printf("As strings não são iguais");
    }
    else if (x == 0)
    {
        printf("As strings são iguais");
    }
    else
    {
        printf("As strings não são iguais");
    }

    return (0);
}