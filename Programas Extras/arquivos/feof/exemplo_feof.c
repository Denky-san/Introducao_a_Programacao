#include <stdio.h>
int main()
{
    FILE *fp;
    char c;
    fp = fopen("feof.txt","r");   /* Arquivo ASCII, para leitura */
    if(!fp)
    {
        printf( "Erro na abertura do arquivo");
        exit(0);
    }else{
        //while((c = getc(fp) ) != EOF) 
        while(!feof(fp))/* Enquanto não chegar ao final do arquivo */
        {
            c = getc(fp);    //Lê o arquivo caracter por caracter
            printf("%c", c); // imprime o caracter lido 
        }     

            
        printf("\n");                 
        fclose(fp);
    }
    
    return 0;
}