#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 

	// // Este ponteiro irá conter o endereço do primeiro byte do bloco de memória alocado.
	int *ptr; 
	int n, i; 

	// Obtem o número de elementos para o array 
	printf("Enter number of elements:\n"); 
    scanf("%d", &n);

	// Aloca dinamicamente um bolco de memória usando calloc() 
	ptr = (int*)malloc(n * sizeof(int)); 

	// // Confere se a memória foi alocada corretamente
	if (ptr == NULL) { 
		printf("Memory not allocated.\n"); 
		exit(0); 
	} 
	else { 

		// Obtem os elementos para o array
		printf("Memória alocada corretamente usando  malloc.\n"); 

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
