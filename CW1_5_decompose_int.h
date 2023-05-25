#include "Q5_header.h"

/*Function to decompose integer*/
int* decompose_int(int i) {
	int* vec = (int*)calloc(2, sizeof(int));
	/* Initialise memory for array and set all bits to 0*/
	if (vec == NULL) {
		printf("No Memory \n");
		exit(0);
	}
	vec[0] = i / 10; //first digit
	vec[1] = i % 10; //second digit
	return vec;
}