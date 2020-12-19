#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // criando a variável ponteiro para o arquivo
    FILE *pont_arq;
    
    //abrindo o arquivo
    pont_arq = fopen("arquivo.txt", "a");

    if (pont_arq == NULL)
    {
        printf("ERRO! O arquivo não foi aberto!\n");
    }
    else
    {
        printf("O arquivo foi aberto com sucesso!\n");
    }
        
    // fechando arquivo
    fclose(pont_arq);
    
    return(0);
}
