#include "Q5_header.h"
int division_check(int i, int j, int* idgts, int* jdgts) {
	//Function to check if Sleepy's method works
	/*Only takes integers with atleast one matching digit*/

	if (i == j) { /*Both digits match, i,j are equal and Sleepy method works*/
		return EXIT_SUCCESS;
	}
	float value = (float)i / (float)j; //correct result

	if (*idgts == *jdgts && (float)*(idgts + 1) / (float)*(jdgts + 1) == value) {
		//1st digit numerator and denominator cancel
		return EXIT_SUCCESS;
	}
	if (*idgts == *(jdgts + 1) && (float)*(idgts + 1) / (float)*(jdgts) == value) {
		//first digit in numerator and second in denominator cancel
		return EXIT_SUCCESS;
	}
	if (*(idgts + 1) == *jdgts && (float)*(idgts) / (float)*(jdgts + 1) == value) {
		//second digit in numerator and first in denominator cancel
		return EXIT_SUCCESS;
	}
	if (*(idgts + 1) == *(jdgts + 1) && (float)*(idgts) / (float)*(jdgts) == value) {
		//second digit in numerator and denominator cancel
		return EXIT_SUCCESS;
	}
	return EXIT_FAILURE;

}