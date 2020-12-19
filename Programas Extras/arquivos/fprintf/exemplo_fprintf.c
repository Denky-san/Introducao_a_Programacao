#include <stdio.h>

int main() {
    int n = 2;
    float pi = 3.14159265;

    FILE* arquivo = fopen("saida.txt", "w");
    if(arquivo == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo.txt.\n");
        return 1;
    }

    fprintf(arquivo, "O número n é %d.\n", n);
    fprintf(arquivo, "pi é um número irracional: %f...\n", pi);
    fclose(arquivo);

    return 0;
}