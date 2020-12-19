#include <stdio.h>
#include <string.h>

//Tornar a string s vazia.
int init_str(char a[])
{
    a[0] = '\0';

    return (a);
}

int main()
{
    char Nome[20];

    gets(Nome);

    init_str(Nome);

    puts(Nome);

    return (0);
}