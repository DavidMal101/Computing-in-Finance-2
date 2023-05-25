#include <stdlib.h>
#include <math.h>
#include "list_size.h"


void sieve_optimized(int* list, int N) {
	int j = 0;
	int size=list_size(N);

	while (*(list+j) <= sqrt(N)) {
		//find next unmarked
		if (*(list + j) == 0) {
			j++;
		}
		//mark multiples
		else {
			for (int k = j+1; k < size; k++) {
				if (*(list + k ) % *(list+j) == 0) {
					*(list + k ) = 0;
				}
			}
			j++;
		}
	}
}