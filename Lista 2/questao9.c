#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double massa, aceleracao, tempo, velocidade_kh, velocidade_ms;

    scanf("%lf %lf %lf", &massa, &aceleracao, &tempo);

    velocidade_kh = (aceleracao * tempo) * 3.6;
    velocidade_ms = aceleracao * tempo;

    printf("VELOCIDADE = %.2lf\n", velocidade_kh);
    printf("ESPACO PERCORRIDO = %.2lf\n", (aceleracao * pow(tempo, 2)) / 2);
    printf("TRABALHO REALIZADO = %.2lf\n", ((massa * 1000) * pow(velocidade_ms, 2)) / 2);

    return 0;
}