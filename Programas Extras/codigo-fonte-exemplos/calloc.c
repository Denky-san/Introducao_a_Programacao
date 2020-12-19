#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 

	// Este ponteiro irá conter o endereço do primeiro byte do bloco de memória alocado. 
	int *ptr, n, i; 

	// Obtem o número de elementos para o array 
	printf("Informe o número de elemetos: \n"); 
	scanf("%d",&n);

	// Aloca dinamicamente um bolco de memória usando calloc() 
	ptr = (int*)calloc(n, sizeof(int)); 

	// Confere se a memória foi alocada corretamente
	if (ptr == NULL) { 
		printf("Memória não alocada.\n"); 
		exit(0); 
	} 
	else { 

		// A memória foi alocada corretamemente
		printf("Memória alocada corretamente usando calloc.\n"); 

		// Obtem os elementos para o array
		for (i = 0; i < n; ++i) { 
			ptr[i] = i + 1; 
		} 

		// Imprime os elementos do array
		printf("Os elementos do array são: "); 
		for (i = 0; i < n; ++i) { 
			printf("%d, ", ptr[i]); 
		} 
		printf("\n");
	} 
	free(ptr);
	return 0; 
} 
