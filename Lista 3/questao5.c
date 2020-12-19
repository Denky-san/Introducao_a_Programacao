#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota;

    scanf("%lf", &nota);

    if (nota >= 9 && nota <= 10)
    {
        printf("NOTA = %.2lf CONCEITO = A", nota);
    }
    else if (nota >= 7.5 && nota < 9)
    {
        printf("NOTA = %.2lf CONCEITO = B", nota);
    }
    else if (nota >= 6 && nota < 7.5)
    {
        printf("NOTA = %.2lf CONCEITO = C", nota);
    }
    else if (nota >= 0 && nota < 6)
    {
        printf("NOTA = %.2lf CONCEITO = D", nota);
    }

    return 0;
}