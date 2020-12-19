#include <stdio.h>
#include <stdlib.h>

int main()
{
    int repeat;
    double fahrenheit;

    //quantidade de vezes que o for vai loopar
    scanf("%d", &repeat);

    //vetores com a quantidade de loops e quantidade de varieaveis que vou armazenar
    double celcius[repeat];
    double farao[repeat];

    //for para loopar o repeat e armazenar ele dentro do vetor
    for (int i = 0; i < repeat; i++)
    {
        scanf("%lf", &fahrenheit);

        celcius[i] = (5 * (fahrenheit - 32)) / 9;
        farao[i] = fahrenheit;
    }
    //for para loopar o repeat e mostrar na tela os valores armazenados anteriormente
    for (int i = 0; i < repeat; i++)
    {
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", farao[i], celcius[i]);
    }

    return 0;
}