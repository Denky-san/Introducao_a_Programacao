#include <stdio.h>

int main()
{
    float tamanho_arquivo, velocidade_dowload;

    printf("Qual o tamanho do arquivo para download? (mb)\n");
    scanf("%f", &tamanho_arquivo);

    printf("Qual a velocidade da sua internet?(mb/s)\n");
    scanf("%f", &velocidade_dowload);
    
    printf("O tempo de dowload sera aproximadamente: %.2f minutos \n", (tamanho_arquivo / (velocidade_dowload)) / 60);

    return 0;
}
