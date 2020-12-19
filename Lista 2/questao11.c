#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero, prim_num, seg_num, terc_num;

    scanf("%d", &numero);

    prim_num = numero / 100;
    seg_num = (numero / 10) % 10;
    terc_num = numero % 10;

    printf("%d\n", (terc_num * 100) + (seg_num * 10) + prim_num);

    return 0;
}