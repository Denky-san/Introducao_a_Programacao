#include<stdio.h>

typedef struct 
{
    float x,y;
} Ponto;

void imprimePonto(Ponto q)
{
    printf("O ponto fornecido foi:(%f,%f)\n",q.x, q.y);
}

int main(void)
{
    Ponto p;
    printf("\nDigite as coordenadas do ponto (x,y): ");
    scanf ("%f %f", &p.x , &p.y );
    imprimePonto(p);
    return 0 ;
}