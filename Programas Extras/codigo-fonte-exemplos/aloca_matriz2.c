#define LIN 4
#define COL 6

int main(void)
{
    int **mat ;
    int i, j ;

    // aloca um vetor de LIN ponteiros para linhas
    mat = malloc (LIN * sizeof (int*)) ;

    // aloca cada uma das linhas (vetores de COL inteiros)
    for (i=0; i < LIN; i++)
    mat[i] = malloc (COL * sizeof (int)) ;

    // percorre a matriz
    for (i=0; i < LIN; i++)
        for (j=0; j < COL; j++)
            mat[i][j] = (i+1)*j ;        // acesso com sintaxe mais simples

    // imprime os valores da matriz
    for (i=0; i < LIN; i++){
        for (j=0; j < COL; j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

    // libera a memória da matriz
    for (i=0; i < LIN; i++)
        free (mat[i]) ;
    free (mat) ;
    return 0;
}
