#include <stdio.h>
#include <stdlib.h>

extern char board[3][3];

int move(char x, int position, char(*board)[3]);
int check_win(char(*board)[3]);
void print_board(char(*board)[3]);

