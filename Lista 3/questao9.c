#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, milhar, centena, dezena, unidade;

    scanf("%d", &numero);

    if (numero >= 10000)
    {
        printf("Numero invalido!");
    }
    else
    {
        milhar = numero / 1000;
        centena = numero / 100 - (milhar * 10);
        dezena = numero / 10 - ((numero / 100) * 10);
        unidade = numero % 10;

        if (milhar > 0)
        {

            printf("(quarta ordem)");
            printf(" %d = ", numero);
        }
        else if (centena > 0)
        {
            printf("(terceira ordem)");
            printf(" %d = ", numero);
        }
        else if (dezena > 0)
        {
            printf("(segunda ordem)");
            printf(" %d = ", numero);
        }
        else if (unidade > 0)
        {
            printf("(primeira ordem)");
            printf(" %d = ", numero);
        }

        if (milhar != 0)
        {
            printf("%d unidade de milhar ", milhar);
        }
        if (centena != 0)
        {
            if (milhar > 0)
            {
                printf("+ ");
            }
            printf("%d centenas ", centena);
        }
        if (dezena != 0)
        {
            if (milhar > 0 || centena > 0)
            {
                printf("+ ");
            }
            printf("%d dezenas ", dezena);
        }
        if (unidade != 0)
        {
            if (milhar > 0 || centena > 0 || dezena > 0)
            {
                printf("+ ");
            }
            printf("%d unidades ", unidade);
        }

        printf("= ");

        if (milhar > 0)
        {
            printf("%d ", milhar * 1000);
        }
        if (centena > 0)
        {
            if (milhar > 0)
            {
                printf("+ ");
            }
            printf("%d ", centena * 100);
        }
        if (dezena > 0)
        {
            if (milhar > 0 || centena > 0)
            {
                printf("+ ");
            }
            printf("%d ", dezena * 10);
        }
        if (unidade > 0)
        {
            if (milhar > 0 || centena > 0 || dezena > 0)
            {
                printf("+ ");
            }
            printf("%d", unidade);
        }
    }

    return 0;
}