#include <stdlib.h>
#include <stdio.h>
#include "list_size.h"

int* linspace_optimized(int N) {
	// Make list of integers
	int* linspace;
	int size = list_size(N);
	
	linspace = (int*)calloc(size, sizeof(int));

	if (linspace == NULL) {
		printf("No memory\n");
		return EXIT_FAILURE;
	}
	for (int i = 1; i <= size; i++) {
		linspace[i-1] = (2 * i) + 1;
	}

	return linspace;
}