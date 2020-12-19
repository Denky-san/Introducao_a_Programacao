#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, sequencia;
    
    scanf("%d %d", &numero, &sequencia);

    if(numero % 2 == 1)
    {
        printf("O PRIMEIRO NUMERO NAO E PAR");
    }
    else
    {   //foi definido o primeiro numero da sequencia e então bastou escreve-los pulando de 2 em 2
        for (int i = numero; i < (sequencia * 2) + numero; i = i + 2)
        {
            printf("%d\n", i);
        }
        
    }
    return 0;
}