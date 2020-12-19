#include <stdio.h>

typedef struct // Cria uma STRUCT para armazenar os dados de uma pessoa
{
    float Peso;   // define o campo Peso
    int Idade;    // define o campo Idade
    float Altura; // define o campo Altura
} Pessoa; // Define o nome do novo tipo criado

Pessoa configuraPessoa(int idade, float peso, float altura)
{ 
    Pessoa P;
    P.Idade = idade; 
    P.Peso = peso;   
    P.Altura = altura;
    return P; // retorna a struct contendo os dados passados por parâmetro
}
void ImprimePessoa(Pessoa P) // declara o parâmetro como uma struct
{
  printf("Idade: %d  Peso: %0.2f Altura: %0.2f\n", P.Idade, P.Peso, P.Altura);
}


int main()
{
    Pessoa Joao;

    Joao = configuraPessoa(15,60.5,1.75); // atribui o retorno da função a uma variável struct
    ImprimePessoa(Joao);
   return 0;
}