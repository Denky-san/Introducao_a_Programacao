#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int qtd_teste, j, i;
    char vetor_num[102];
    scanf("%d ", &qtd_teste);

    int total_leds[qtd_teste];

    for (i = 0; i < qtd_teste; i++)
    {
        scanf("%s", vetor_num);
        int tamanho1 = strlen(vetor_num), leds = 0;

        for (j = 0; j < tamanho1; j++)
        {
            switch (vetor_num[j])
            {
            case ('0'):
                leds = leds + 6;
                break;
            case ('1'):
                leds = leds + 2;
                break;
            case ('2'):
                leds = leds + 5;
                break;
            case ('3'):
                leds = leds + 5;
                break;
            case ('4'):
                leds = leds + 4;
                break;
            case ('5'):
                leds = leds + 5;
                break;
            case ('6'):
                leds = leds + 6;
                break;
            case ('7'):
                leds = leds + 3;
                break;
            case ('8'):
                leds = leds + 7;
                break;
            case ('9'):
                leds = leds + 6;
                break;
            }
        }

        total_leds[i] = leds;
    }

    for (i = 0; i < qtd_teste; i++)
    {
        printf("%d leds\n", total_leds[i]);
    }

    return 0;
}
