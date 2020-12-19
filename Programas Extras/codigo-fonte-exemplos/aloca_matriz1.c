#define LIN 4
#define COL 6

int main(void){
    int *mat ;
    int i, j ;

    // aloca um vetor com todos os elementos da matriz
    mat = malloc (LIN * COL * sizeof (int)) ;

    // percorre a matriz
    for (i=0; i < LIN; i++)
        for (j=0; j < COL; j++)
            mat[(i*COL) + j] = (i+1)*j ; // calcula a posição de cada elemento
    j = 0;
    for (i=0; i < (LIN * COL); i++){
        printf("%d ", mat[i]);
        j++;
        if(j == COL){
            printf("\n");
            j = 0;
        }        
    }    
    printf("\n");

    // libera a memória alocada para a matriz
    free (mat) ;
}