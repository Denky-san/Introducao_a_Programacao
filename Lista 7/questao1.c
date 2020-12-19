#include <stdio.h>
#include <stdlib.h>

char media(double n1, double n2, double n3)
{
    double media_aluno = (n1 + n2 + n3) / 3;

    printf("A media eh: %.2lf\n", media_aluno);

    if (media_aluno >= 9 && media_aluno < 10)
    {
        char letra = 'A';
        return letra;
    }
    else if (media_aluno >= 7 && media_aluno <= 8.99)
    {
        char letra = 'B';
        return letra;
    }
    else if (media_aluno >= 5 && media_aluno <= 6.99)
    {
        char letra = 'C';
        return letra;
    }
    return '\0';
}

int main()
{
    double nota1, nota2, nota3;

    scanf("%lf %lf %lf", &nota1, &nota2, &nota3);

    char notafinal = media(nota1, nota2, nota3);

    printf("A letra que representa sua media eh: %c\n", notafinal);

    return 0;
}
