#include <stdio.h>

int main()
{
    double produto;

    scanf("%lf", &produto);

    if (produto < 20)
    {
        printf("O valor da venda eh: %.2lf\n", produto * 1.45);
    }
    else
    {
       printf("O valor da venda eh: %.2lf\n", produto * 1.30);
    }

    return 0;
}
