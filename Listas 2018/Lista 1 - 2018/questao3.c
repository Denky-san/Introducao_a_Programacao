#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;
    
    scanf("%d", &valor);

    if(valor < 5 || valor > 2000)
    {
        printf("coloca entre 5 e 2000 seu burro");
    }
    else
    {
        for (int i = 2; i <= valor; i = i + 2)
        {
            printf("%d ^ 2 = %d\n", i, i * i);
        }
        
    }
    return 0;
}