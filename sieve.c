#include "Q7_header.h"

void sieve(int* list, int N) {
	int j = 2;
	while (j <= sqrt(N)) {
		//find next unmarked
		if (*(list + j - 2) == 0) {
			j++;
		}
		//mark multiples
		else {
			for (int k = j; k < N; k++) {
				if (*(list + k - 1) % j == 0) {
					*(list + k - 1) = 0;
				}
			}
			j++;
		}
	}
}