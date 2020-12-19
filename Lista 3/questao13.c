#include <stdio.h>
#include <stdlib.h>

int main()
{
    int data, dia, mes, ano, dia_mes;

    scanf("%d", &data);
    
    dia_mes = data / 10000;
    dia = data / 1000000;
    mes = dia_mes % 100;
    ano = data % 10000;

    switch (mes)
    {
    case (1):
        if (dia >= 32 || dia == 0 || ano == 0)
        {
            printf("Data invalida!\n");
        }
        else
        {
            printf("%d de janeiro de %d\n", dia, ano);
        }
        break;
    case (2):
        if (dia >= 29 || dia == 0 || ano == 0)
        {
            printf("Data invalida!\n");
        }
        else
        {
            printf("%d de fevereiro de %d\n", dia, ano);
        }
        break;
    case (3):
        if (dia >= 32 || dia == 0 || ano == 0)
        {
            printf("Data invalida!\n");
        }
        else
        {
            printf("%d de marco de %d\n", dia, ano);
        }
        break;
    case (4):
        if (dia >= 31 || dia == 0 || ano == 0)
        {
            printf("Data invalida!\n");
        }
        else
        {
            printf("%d de abril de %d\n", dia, ano);
        }
        break;
    case (5):
        if (dia >= 32 || dia == 0 || ano == 0)
        {
            printf("Data invalida!\n");
        }
        else
        {
            printf("%d de maio de %d\n", dia, ano);
        }
        break;
    case (6):
        if (dia >= 31 || dia == 0 || ano == 0)
        {
            printf("Data invalida!\n");
        }
        else
        {
            printf("%d de junho de %d\n", dia, ano);
        }
        break;
    case (7):
        if (dia >= 32 || dia == 0 || ano == 0)
        {
            printf("Data invalida!\n");
        }
        else
        {
            printf("%d de julho de %d\n", dia, ano);
        }
        break;
    case (8):
        if (dia >= 32 || dia == 0 || ano == 0)
        {
            printf("Data invalida!\n");
        }
        else
        {
            printf("%d de agosto de %d\n", dia, ano);
        }
        break;
    case (9):
        if (dia >= 31 || dia == 0 || ano == 0)
        {
            printf("Data invalida!\n");
        }
        else
        {
            printf("%d de setembro de %d\n", dia, ano);
        }
        break;
    case (10):
        if (dia >= 32 || dia == 0 || ano == 0)
        {
            printf("Data invalida!\n");
        }
        else
        {
            printf("%d de outubro de %d\n", dia, ano);
        }
        break;
    case (11):
        if (dia >= 31 || dia == 0 || ano == 0)
        {
            printf("Data invalida!\n");
        }
        else
        {
            printf("%d de novembro de %d\n", dia, ano);
        }
        break;
    case (12):
        if (dia >= 32 || dia == 0 || ano == 0)
        {
            printf("Data invalida!\n");
        }
        else
        {
            printf("%d de dezembro de %d\n", dia, ano);
        }
        break;
    default:
        printf("Data invalida!\n");
        break;
    }

    return 0;
}
