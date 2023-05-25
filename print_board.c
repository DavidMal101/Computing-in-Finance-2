#include <stdlib.h>
#include <stdio.h>

void print_board(char(*board)[3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%c", *(*(board + i) + j));
		}
		printf("\n");
	}
	printf("\n");
}
