#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 

	// Estes ponteiros irão conter os endereços dos primeiros bytes dos blocos
	// de memória alocados.
	int *ptr, *ptr1; 
	int n, i; 

	// Obtem o número de elementos para o array 
	n = 5; 
	printf("Enter number of elements: %d\n", n); 

	// Aloca dinamicamente um bolco de memória usando malloc() 
	ptr = (int*)malloc(n * sizeof(int)); 

	// Aloca dinamicamente um bolco de memória usando calloc() 
	ptr1 = (int*)calloc(n, sizeof(int)); 

	// Confere se a memória foi alocada corretamente
	if (ptr == NULL || ptr1 == NULL) { 
		printf("Memory not allocated.\n"); 
		exit(0); 
	} 
	else { 

		// A memória foi alocada corretamemente
		printf("Memória alocada corretamente usando malloc.\n"); 

		// Desaloca a memória
		free(ptr); 
		printf("Memória malloc desalocada corretamente.\n"); 

		// A memória foi alocada corretamemente
		printf("\nMemória alocada corretamente usando calloc.\n"); 

		// Desaloca a memória
		free(ptr1); 
		printf("Memória calloc desalocada corretamente.\n"); 
	} 

	return 0; 
} 
