#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
    char nome[50];
    int dia_nascimento;
    int mes_nascimento;
    int ano_nascimento;
} Pessoa;

int main()
{
    Pessoa *p;
    
    p = (Pessoa *) malloc(10*sizeof(Pessoa));

    for(int i = 0; i < 10;i++)
    {
        strcpy(p[i].nome,"Um nome qualquer");
        p[i].dia_nascimento = 15;
        p[i].mes_nascimento = 5;
        p[i].ano_nascimento = 2006;
    }

    printf("Quantidade de bytes em *p: %lu.\n",sizeof(p));

    for(int i = 0; i < 10;i++)
    {
        printf("Nome: %s, Data de nascimento: %d/%d/%d.\n",p[i].nome,p[i].dia_nascimento,p[i].mes_nascimento,p[i].ano_nascimento);
    }

    free(p);
}