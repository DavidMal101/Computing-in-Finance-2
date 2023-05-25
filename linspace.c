#include "Q7_header.h"

int* linspace(int N) {
	// Make list of integers
	int* linspace = (int*)calloc(N - 1, sizeof(int));

	if (linspace == NULL) {
		printf("No memory\n");
		return EXIT_FAILURE;
	}
	for (int i = 0; i < N - 1; i++) {
		linspace[i] = i + 2;
	}

	return linspace;
}