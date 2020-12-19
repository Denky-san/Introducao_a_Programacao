#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matricula, frequencia;
    double p1, p2, p3, p4, p5, p6, p7, p8, l1, l2, l3, l4, l5, trabalho, notafinal, media_p, media_l;

    scanf("%d %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %d", &matricula, &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &l1, &l2, &l3, &l4, &l5, &trabalho, &frequencia);

    while (matricula != -1)
    {
        scanf("%d %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %d", &matricula, &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &l1, &l2, &l3, &l4, &l5, &trabalho, &frequencia);
        
        media_p = (p1 + p2 + p3 + p4 + p5 + p6 + p7 + p8) / 8;
        media_l = (l1 + l2 + l3 + l4 + l5) / 5;
        notafinal = (0.7 * media_p) + (0.15 * media_l) + (0.15 * trabalho);

        if (frequencia < 96 && notafinal >= 6)
        {
            printf("Matricula: %d, Nota Final:  %.lf, Situacao Final:  REPROVADO POR FREQUENCIA\n", matricula, notafinal);
        }
        else if (frequencia < 96 && notafinal < 6)
        {
            printf("Matricula: %d, Nota Final:  %.lf, Situacao Final:  REPROVADO POR NOTA E FREQUENCIA\n", matricula, notafinal);
        }
        else if (frequencia > 96 && notafinal < 6)
        {
            printf("Matricula: %d, Nota Final:  %.lf, Situacao Final:  REPROVADO POR NOTA\n", matricula, notafinal);
        }
        else
        {
            printf("Matricula: %d, Nota Final:  %.lf, Situacao Final:  APROVADO\n", matricula, notafinal);
        }
    }

    return 0;
}