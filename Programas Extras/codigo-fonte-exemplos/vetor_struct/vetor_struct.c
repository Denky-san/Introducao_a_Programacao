#include<stdio.h>
#include<string.h>

//definindo a struct
typedef struct 
{
    char nome[200];
    int idade;
    float salario;
} Funcionario;

//inicializando o vetor de struct
void inicializaDados(Funcionario *func, int t)
{
    for(int i=0; i<t; i++) 
    {
        strcpy(func[i].nome, "NULL");
        func[i].idade = 0;
        func[i].salario = 0.0;
    }    
}

void preencheDados(Funcionario *func, int t)
{
    for(int i=0; i<t; i++) {
        printf("Digite nome do funcionário:\n");
        scanf("%[^\n]s", func[i].nome);
        printf("Digite a idade do funcionário:\n");
        scanf("%d", &func[i].idade);
        printf("Digite o salário do funcionário:\n");
        scanf("%f", &func[i].salario);
        getchar();
    }
}

void imprime(Funcionario *func, int t)
{
    for(int i=0; i<t; i++) {
        printf(" \n O nome do funcionário é: %s ", func[i].nome);
        printf(" \n A idade do funcionário é: %d ", func[i].idade);
        printf(" \n O salário do funcionário é: %.2f ", func[i].salario);
    }
    printf("\n");
}

void pesquisaNome(Funcionario *func, int t, char *nome)
{
    int encontrou = 0;

    for(int i=0; i<t; i++) 
    {
        if(strcmp(nome, func[i].nome) == 0) 
        {
            printf("\n O regisro procurado está na posição %d ", i);
            printf(" \n O nome do funcionário é: %s ", func[i].nome);
            printf(" \n A idade do funcionário é: %d ", func[i].idade);
            printf(" \n O salário do funcionário é: %.2f ", func[i].salario);
            printf("\n");
            encontrou = 1;
        }
    }

    if(!encontrou) 
        printf(" \n Registro não encontrado! ");
}

void pesquisaIdade(Funcionario *func, int t, int idade1, int idade2)
{
    int posicao;
    for(int i=0; i<t; i++) 
    {
        if((func[i].idade>=idade1)&&(func[i].idade<=idade2)) 
        {
            printf(" \n O nome do funcionário é: %s ", func[i].nome);
            printf(" \n A idade do funcionário é: %d ", func[i].idade);
            printf(" \n O salário do funcionário é: %.2f ", func[i].salario);
            printf(" \n ------------------------------------------------------------------------");
            posicao = 1;
        } else {
            posicao = -1;
        }

    }
    if(posicao == -1){
        printf("\n Não há registros com esta configuração!");
    }
}

int main(void)
{
    int t = 3, a, b;
    Funcionario func[t];
    inicializaDados(func,t);
    preencheDados(&func,t);
    imprime(&func,t);

    char nome[200];
    printf(" \n Digite um nome: ");
    gets(nome);
    pesquisaNome(func, t, nome);
  

    printf("Informe duas idades: \n");
    scanf("%d %d", &a, &b);
    pesquisaIdade(func,t,a,b);

    return 0;
}
