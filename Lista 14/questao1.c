#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Livro
{
    char titulo[1000];
    char autor[1000];
    double preco;
} livro;

int main()
{
    int qtd_livros, i;

    livro *books;

    scanf("%d", &qtd_livros);

    books = (livro *)malloc(qtd_livros * sizeof(livro));

    for (i = 0; i < qtd_livros; i++)
    {
        scanf(" %[^\n]s", books[i].titulo);
        scanf(" %[^\n]s", books[i].autor);
        scanf("%lf", &books[i].preco);
    }

    for (i = 0; i < qtd_livros; i++)
    {
        printf("%s\n", books[i].titulo);
        printf("%s\n", books[i].autor);
        printf("%.2lf\n", books[i].preco);
    }

    free(books);

    return 0;
}
