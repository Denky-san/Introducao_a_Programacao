#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota1, nota2, nota3, media;

    scanf("%lf %lf %lf", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("MEDIA = %.2lf\n", media);

    if (media >= 6)
    {
        printf("Aprovado");
    }
    else
    {
        printf("Reprovado");
    }
    return 0;
}