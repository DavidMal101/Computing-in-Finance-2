#include <stdlib.h>
#include <stdio.h>


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