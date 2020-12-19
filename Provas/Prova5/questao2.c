#include <stdio.h>
#include <stdlib.h>

int qtd_contatos = 5;

typedef struct Agenda
{
    char nome[20];
    int telefone;
    int aniversario;
} agenda;

void inserir_contato(agenda *pont_contatos)
{
    int i = 0;
    pont_contatos = (agenda *)realloc(pont_contatos, (qtd_contatos + 1) * sizeof(agenda));

    for (i = qtd_contatos; i < (qtd_contatos + 1); i++)
    {
        scanf(" %[^\n]s", pont_contatos[i].nome);
        scanf("%d", &pont_contatos[i].telefone);
        scanf("%d", &pont_contatos[i].aniversario);
    }
    qtd_contatos = qtd_contatos + 1;
}
void remover_contato(agenda *pont_contatos)
{
    pont_contatos = (agenda *)realloc(pont_contatos, (qtd_contatos - 1) * sizeof(agenda));

    qtd_contatos = qtd_contatos - 1;
}
void pesquisar_pelo_nome(agenda *pont_contatos)
{
    
}
void listar_contato(agenda *pont_contatos)
{
    int i = 0;

    for (i = 0; i < qtd_contatos; i++)
    {
        printf("%s ", pont_contatos[i].nome);
        printf("%d ", pont_contatos[i].telefone);
        printf("%d\n", pont_contatos[i].aniversario);
    }
}
void listar_contatos_letra(agenda *pont_contatos)
{
    
}
void aniversariantes_mes(agenda *pont_contatos)
{
    
}

int main()
{
    FILE *arquivo;
    agenda *contatos;
    int i, j, num;
    char c;

    contatos = (agenda *)malloc(5 * sizeof(agenda));

    printf("Adicione os 5 contatos iniciais de sua agenda\n");

    for (i = 0; i < 5; i++)
    {
        scanf(" %[^\n]s", contatos[i].nome);
        scanf("%d", &contatos[i].telefone);
        scanf("%d", &contatos[i].aniversario);
    }

    arquivo = fopen("contatos.dat", "w");

    if (!(arquivo = fopen("contatos.dat", "w")))
    {
        printf("Erro! Impossivel abrir o arquivo!\n");
        exit(1);
    }

    for (i = 0; i < 5; i++)
    {
        fprintf(arquivo, "%s ", contatos[i].nome);
        fprintf(arquivo, "%d ", contatos[i].telefone);
        fprintf(arquivo, "%d\n", contatos[i].aniversario);
    }

    printf("Digite qual operacao deseja fazer:\n1- Adicionar um novo contato\n2- Remover o ultimo contato adicionado\n3- Pesquisar contato pelo nome\n4- Listar todos os contatos\n5- Listar contatos iniciados com x letra\n6- Mostrar aniversariantes dos mes x\n");

    scanf("%d", &num);

    switch (num)
    {
    case (1):
        inserir_contato(contatos);
        for (i = qtd_contatos; i < qtd_contatos + 1; i++)
        {
            fprintf(arquivo, "%s ", contatos[i].nome);
            fprintf(arquivo, "%d ", contatos[i].telefone);
            fprintf(arquivo, "%d\n", contatos[i].aniversario);
        }
        break;
    case (2):
        remover_contato(contatos);
        break;
    case (3):
        pesquisar_pelo_nome(contatos);
        break;
    case (4):
        listar_contato(contatos);
        break;
    case (5):
        listar_contatos_letra(contatos);
        break;
    case (6):
        aniversariantes_mes(contatos);
        break;
    default:
        printf("Escolha uma opcao valida");
        break;
    }

    fclose(arquivo);
    free(contatos);

    return 0;
}
