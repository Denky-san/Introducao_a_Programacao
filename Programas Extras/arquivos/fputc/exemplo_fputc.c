/* O programa a seguir lê uma string do teclado e escreve-a, caractere por caractere 
em um arquivo em disco (o arquivo arquivo.txt, que ser� aberto no diret�rio corrente).*/

#include <stdio.h>
int main()
{
    FILE *fp;
    char string[100];
    int i;
    fp = fopen("fputc.txt", "w"); /* Arquivo ASCII, para escrita */
    if (!fp)
    {
        printf("Erro na abertura do arquivo");
        exit(0);
    }
    printf("Entre com a string a ser gravada no arquivo:");
    gets(string);
    for (i = 0; string[i]; i++)
        putc(string[i], fp); /* Grava a string, caractere a caractere */
    fclose(fp);
    return 0;
}