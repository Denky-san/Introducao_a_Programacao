#include <stdio.h>
#include <string.h>

// Coloca o caractere ch apenas nas primeiras n posiçôes da string s. Se n > strlen(s) então n toma o valor de strlen(s).
int main()
{
    int x = 0;

    char Nome[25], letra;

    gets(Nome);

    scanf("%c %d", &letra, &x);

    puts(strnset(Nome, letra, x));

    return (0);
}