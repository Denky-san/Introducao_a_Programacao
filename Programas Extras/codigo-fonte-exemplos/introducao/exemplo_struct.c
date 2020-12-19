#include<stdio.h>
#include<stdlib.h>

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
    char nascimento[9];
    float peso;
    float altura;
} Pessoa;

int main(void)
{
    //declarando a variável 
    Pessoa pessoa;
    //Entrada de dados
    printf("Informe o nome da pessoa:\n");
    scanf("%[^\n]s", pessoa.nome);
    getchar();
    printf("Informe o nome da rua:\n");
    scanf("%[^\n]s", pessoa.endereco.rua);
    getchar();
    printf("Informe o número do endereço:\n");
    scanf("%d", &pessoa.endereco.numero);

    //Impressão dos dados
    printf("\nO nome da pessoa é %s.\n",pessoa.nome);
    printf("O nome da rua é %s.\n",pessoa.endereco.rua);
    printf("O número é %d.\n",pessoa.endereco.numero);
    return(0);
}
