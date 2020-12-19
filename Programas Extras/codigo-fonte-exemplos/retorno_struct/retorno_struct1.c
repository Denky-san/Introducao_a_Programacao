#include<stdio.h>

typedef struct 
{
    float x,y;
} Ponto;

void imprimePonto(Ponto q)
{
    printf("O ponto fornecido foi:(%0.2f,%0.2f)\n",q.x, q.y);
}

Ponto alteraPonto(float a, float b) {
    Ponto q;
    q.x = a;
    q.y = b;
    return q;
}

int main(void)
{
    Ponto p;
    float a = 9.2, b = 5.78;
    printf("\nDigite as coordenadas do ponto (x,y): ");
    scanf ("%f %f", &p.x , &p.y );
    imprimePonto(p);
    p = alteraPonto(a,b);
    imprimePonto(p);
    return 0 ;
}