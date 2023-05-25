#include "Q5_header.h"

int main() {
	
	int i;
	int j;
	int *i_dgts; /*pointer to array of digits of i*/
	int *j_dgts; /*pointer to array of digits of j*/
	int count = 0;
	
	for (i = 10; i < 100; i++) {
		i_dgts = decompose_int(i);
		for (j = i; j < 100; j++) {
			j_dgts = decompose_int(j);
			if (*i_dgts == *j_dgts || *i_dgts == *(j_dgts+1) || *(i_dgts+1) == *j_dgts || *(i_dgts+1) == *(j_dgts+1)){
				//check if any digits match
				if (division_check(i, j, i_dgts, j_dgts) == EXIT_SUCCESS) {
					printf("%i and %i \n", i, j);
					count++;
				}
			}
			free(j_dgts);
		}
		free(i_dgts);
	}
	printf("This works for %i fractions", count);

	return EXIT_SUCCESS;
}