#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero, digito_controle, prim_num, seg_num, terc_num;

    scanf("%d", &numero);

    prim_num = numero / 100;
    seg_num = (numero / 10) % 10;
    terc_num = numero % 10;
    digito_controle = (prim_num + (seg_num * 3) + (terc_num * 5)) % 7;

    printf("O NOVO NUMERO E = %d\n", (numero * 10) + digito_controle);

    return 0;
}