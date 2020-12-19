#include <stdio.h>

int main()
{
    float peixe;

    printf("Digite a quantidade de quilos de peixes que voce pescou\n");
    scanf("%f\n", &peixe);

    if (peixe >= 50)
    {
        printf("Voce trouxe %.2f quilos a mais do que o permitido por lei\n\n", peixe - 50);
        printf("O valor da multa por trazer %.2f acima do valor permitido eh: %.2f\n\n", peixe - 50, (peixe - 50) * 4);
    }
    else
    {
        printf("Voce trouxe 0kg a mais do que o permitido por lei, portando nao havera multa\n\n");
    }
    return 0;
}
