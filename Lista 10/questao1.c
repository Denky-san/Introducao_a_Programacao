#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// declare uma string com a capacidade de armazenar um nome com 25 caracteres
int main()
{
    char nome[26];

    gets(nome);
    puts(nome);

    return 0;
}
