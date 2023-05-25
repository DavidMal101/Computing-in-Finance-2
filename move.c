#include <stdlib.h>
#include <stdio.h>


int move(char x, int position, char(*board)[3]) {
	if (position <= 0 || position>9) {
		printf("Not a valid move\n");
		return EXIT_FAILURE;
	}
	/*Check if position in each row is valid*/
	for (int i = 0; i < 3; i++) {
		if (3 * i < position && position <= 3 * (i + 1)) {
			if ((*(*(board + i) + (position - 1) % 3)) == position + '0') {
				(*(*(board + i) + (position - 1) % 3)) = x;
			}
			else {
				printf("Not a valid move\n");
				return EXIT_FAILURE;
			}

		}
	}
	return EXIT_SUCCESS;


}