#include<stdio.h>

typedef struct
{
    char nome[50];
    int idade;
}Pessoa;

void imprimeDados(char nome[], int i)
{
    printf("Nome: %s, Idade: %d.\n",nome,i);
}

int main(void)
{
    Pessoa p = {"Alice no Pais das Maravilhas",30};
    imprimeDados(p.nome,p.idade);

    return 0;
}