#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// coloca todos os caracteres da string em minusculo
int main()
{
    char string[26];

    gets(string);
    strlwr(string);
    puts(string);

    return 0;
}
