#include <stdio.h>

int main()
{
    int vetor[20] = {0}, vetor_rep[20] = {0}, a = 0, x = 0;

    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &vetor[i]);

        for (int j = 0; j < i + 1; j++)
        {
            if (vetor[i] != vetor[j] && i != j)
            {

                if (a == 0)
                {
                    vetor_rep[a] = vetor[i];
                    a++;
                }
                else
                {
                    for (int h = 0; h < a; h++)
                    {
                        if (vetor[i] != vetor_rep[h])
                        {
                            x++;
                        }
                    }
                    if (x == a)
                    {
                        vetor_rep[a] = vetor[i];
                        a++;
                    }
                }
            }
        }
    }

    printf("Numeros iguais : \n");

    for (int i = 0; i < a; i++)
    {
        printf("%d ", vetor_rep[i]);
    }

    return (0);
}
// nao consegui fazer esse exercicio, tentei utilizar o molde do exercicio anterior mas n deu certo