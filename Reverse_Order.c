#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{
	char a,b;
	printf("Input two characters (without space):\n");
	if (scanf("%c%c", &a,&b) == 2) {
		printf("%c%c \n", b, a);
	}
	else {
		printf("Input failed \n");
	}
	return EXIT_SUCCESS;
}
	