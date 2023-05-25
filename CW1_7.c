#define _CRT_SECURE_NO_WARNINGS
#include "Q7_header.h"




int main() {
	int N;
	printf("Choose a Maximum for this method:\n");
	scanf("%i", & N);
	if (N <= 0) {
		printf("Invalid input: must input a natural number");
		return EXIT_FAILURE;
	}

	int* list = linspace(N);

	sieve(list, N);
	for (int i = 0; i < N - 1; i++) {
		if (*(list+i) != 0) {
			printf("%i\n", *(list+i));
		}
	}
	free(list);
	
	return EXIT_SUCCESS;


}