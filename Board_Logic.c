#include "Q6_header.h"


int check_win(char(*board)[3]) {
	/*Pointer to first element in 1d array of pointers*/
	/*Checks whether win condition has been satisfied*/

	/*Check for horizontal win*/
	for (int i = 0; i < 3; i++) {
		if ((*(*(board + i))) == (*(*(board + i) + 1)) && (*(*(board + i) + 1)) == (*(*(board + i) + 2))) {
			printf("Win\n");
			return EXIT_SUCCESS;
		}

	}
	/*Check for veritcal win*/
	for (int i = 0; i < 3; i++) {
		if ((*(*(board)+i)) == (*(*(board + 1) + i)) && (*(*(board + 1) + i)) == (*(*(board + 2) + i))) {
			printf("Win\n");
			return EXIT_SUCCESS;
		}
	}

	/*Check for diagonal win*/
	if ((*(*(board))) == (*(*(board + 1) + 1)) && (*(*(board + 1) + 1)) == (*(*(board + 2) + 2))) {
		printf("Win\n");
		return EXIT_SUCCESS;
	}
	if ((*(*(board + 2))) == (*(*(board + 1) + 1)) && (*(*(board + 1) + 1)) == (*(*(board)+2))) {
		printf("Win\n");
		return EXIT_SUCCESS;
	}
	return EXIT_FAILURE;


}


void print_board(char(*board)[3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%c", *(*(board + i) + j));
		}
		printf("\n");
	}
	printf("\n");
}

int move(char x, int position, char(*board)[3]) {
	if (position <= 0 || position > 9) {
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