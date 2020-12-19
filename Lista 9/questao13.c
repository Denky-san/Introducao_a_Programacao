#include <stdio.h>

int main()
{
    int vetor[10] = {0}, vetorIgual[10] = {0}, a = 0, x = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);

        for (int j = 0; j < i + 1; j++)
        {
            if (vetor[i] == vetor[j] && i != j)
            {

                if (a == 0)
                {
                    vetorIgual[a] = vetor[i];
                    a++;
                }
                else
                {
                    for (int h = 0; h < a; h++)
                    {
                        if (vetor[i] != vetorIgual[h])
                        {
                            x++;
                        }
                    }
                    if (x == a)
                    {
                        vetorIgual[a] = vetor[i];
                        a++;
                    }
                }
            }
        }
    }

    printf("Numeros iguais : ");

    for (int i = 0; i < a; i++)
    {
        printf("%d ", vetorIgual[i]);
    }

    return (0);
}