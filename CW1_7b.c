#define _CRT_SECURE_NO_WARNINGS
#include "Q7b_header.h"

int main() {
	int N;
	printf("Choose a Maximum for this method:\n");
	scanf("%i", &N);
	int* list = linspace_optimized(N);
	sieve_optimized(list, N);

	int size = list_size(N);

	printf("%i\n", 2); //since we removed all the even numbers the list no longer includes 2
	for (int i = 0; i < size; i++) {
		if (*(list + i) != 0) {
			printf("%i\n", *(list + i));
		}
	}

	
	free(list);

	return EXIT_SUCCESS;


}