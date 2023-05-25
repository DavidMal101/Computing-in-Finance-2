
#include "Q7b_header.h"

int list_size(int N) {
	if (N % 2 == 0) {
		return N / 2 - 1;
	}
	else return N / 2;
}

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
		linspace[i - 1] = (2 * i) + 1; //list contains only odd numbers
	}

	return linspace;
}