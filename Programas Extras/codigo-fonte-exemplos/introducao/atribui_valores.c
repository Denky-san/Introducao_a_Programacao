#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct tipo_endereco
{
    char rua[50];
    int numero;
    char bairro[20];
    char cidade[30];
    char sigla_estado[3];
    long int cep;
} Endereco;

typedef struct cadastro_pessoal
{
    char nome[50];
    Endereco endereco;
    int telefone;
    int idade;
    char nascimento[11];
    float peso;
    float altura;
} Pessoa;

int main(void)
{
    //declarando a variável 
    Pessoa pessoa;
    strcpy(pessoa.nome, "Antonio Carlos de Oliveira");
    strcpy(pessoa.endereco.rua, "Avenida Castelo Branco");
    pessoa.endereco.numero = 35;
    strcpy(pessoa.endereco.bairro, "Campinas");
    strcpy(pessoa.endereco.cidade, "Goiânia");
    strcpy(pessoa.endereco.sigla_estado,"GO");
    pessoa.endereco.cep = 74580621;
    pessoa.telefone = 32804521;
    strcpy(pessoa.nascimento, "25/01/1983");
    pessoa.peso = 75.32;
    pessoa.altura = 1.86;

    //Impressão dos dados
    printf("\nnome: %s.\n",pessoa.nome);
    printf("rua:  %s.\n",pessoa.endereco.rua);
    printf("número: %d.\n",pessoa.endereco.numero);
    printf("bairro: %s.\n",pessoa.endereco.bairro);
    printf("cidade: %s.\n",pessoa.endereco.cidade);
    printf("estado: %s.\n",pessoa.endereco.sigla_estado);
    printf("cep: %li.\n",pessoa.endereco.cep);
    printf("telefone: %li.\n",pessoa.telefone);
    printf("data de nascimento: %s.\n",pessoa.nascimento);
    printf("peso: %0.2f kg.\n",pessoa.peso);
    printf("altura: %0.2f m.\n",pessoa.altura);
    return(0);
}
