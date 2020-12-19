#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int qtd_produtos;

typedef struct Produtos
{
    char nome[1000];
    int codigo;
    double preco;
} produtos;

void lista_produtos(produtos *prod)
{
    int i;

    for (i = 0; i < qtd_produtos; i++)
    {
        printf("%s\n", prod[i].nome);
        printf("%d\n", prod[i].codigo);
    }
}

void procura_cod(produtos *produ)
{
    int i;

    for (i = 0; i < qtd_produtos; i++)
    {
        printf("%s\n", produ[i].nome);
        printf("%.2lf\n", produ[i].preco);
    }
}

int main()
{
    int i;

    produtos *product;

    scanf("%d", &qtd_produtos);

    product = (produtos *)malloc(qtd_produtos * sizeof(produtos));

    for (i = 0; i < qtd_produtos; i++)
    {
        scanf(" %[^\n]s", product[i].nome);
        scanf("%d", &product[i].codigo);
        scanf("%lf", &product[i].preco);
    }

    lista_produtos(product);
    procura_cod(product);

    free(product);

    return 0;
}
