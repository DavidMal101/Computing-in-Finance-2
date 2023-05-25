#include "Q5_header.h"

int division_check(int i, int j, int* idgts, int* jdgts) {
	/*Only takes integers with atleast one matching digit*/
	if (i == j) { /*Both digits match, i,j are equal and Sleepy method works*/
		return EXIT_SUCCESS;
	}
	float value = (float)i / (float)j;
	if (*idgts == *jdgts && (float)*(idgts + 1) / (float)*(jdgts + 1) == value) {
		return EXIT_SUCCESS;
	}
	if (*idgts == *(jdgts + 1) && (float)*(idgts + 1) / (float)*(jdgts) == value) {
		return EXIT_SUCCESS;
	}
	if (*(idgts + 1) == *jdgts && (float)*(idgts) / (float)*(jdgts + 1) == value) {
		return EXIT_SUCCESS;
	}
	if (*(idgts + 1) == *(jdgts + 1) && (float)*(idgts) / (float)*(jdgts) == value) {
		return EXIT_SUCCESS;
	}
	return EXIT_FAILURE;

}