#define _CRT_SECURE_NO_WARNINGS
#include "Q6_header.h"

int main() {

	char board[3][3] = {
	{'1','2','3'},{'4','5','6'},{'7','8','9'}
	};

	print_board(board);
	int position;
	char turn = 'X';
	int moves = 0;
	int win = EXIT_FAILURE;
	while (moves<9) {
		if (turn == 'X') {
			printf("Player X's turn, type a position:\n");
			scanf("%i", &position);
			if (move('X', position, board) == EXIT_SUCCESS) {
				turn = 'O';
				moves++;
			}
			if (check_win(board) == EXIT_SUCCESS) {
				printf("Player X wins\n");
				win = EXIT_SUCCESS;
				break;
			}
		}

		else if (turn == 'O') {
			printf("Player O's turn, type a position:\n");
			scanf("%i", &position);
			if (move('O', position, board) == EXIT_SUCCESS) {
				turn = 'X';
				moves++;
			}
			if (check_win(board) == EXIT_SUCCESS) {
				printf("Player O wins\n");
				win = EXIT_SUCCESS;
				break;
			}
		}
		print_board(board);
		

	}
	print_board(board);
	if (moves == 9 && win==EXIT_FAILURE) {
		printf("Draw!");
	}
	return EXIT_SUCCESS;
	

}