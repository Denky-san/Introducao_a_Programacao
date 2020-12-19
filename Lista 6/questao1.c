#include <stdio.h>
#include <stdlib.h>

int main()
{
    double media = 0, maior_media = 0, menor_media = 10000, media_final = 0, i = 0;

    while (scanf("%lf", &media) && media >= 0)
    {
        media_final = media_final + media;

        if (maior_media < media)
        {
            maior_media = media;
        }
        if (menor_media > media)
        {
            menor_media = media;
        }

        i++;
    }

    printf("A maior media eh: %.2lf\n", maior_media);
    printf("A menor media eh: %.2lf\n", menor_media);
    printf("A media aritmetica da turma eh: %.2lf\n", media_final / i);

    return 0;
}
