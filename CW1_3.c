#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int main() {
	int i = 0;
	float max_num = 0;
	float min_num = 0;
	float j;
	int count = 0;
	/*Allow one iteration to initialise max and min*/
	printf("Type a number: \n");
	if (scanf("%f", &j) == 1) {
		max_num = j;
		min_num = j;
		count++;
	}
	if (j < 0) {
		printf("No valid numbers given");
		return EXIT_FAILURE;
	}
	while (i == 0) {
		printf("Type a number: \n");
		if (scanf("%f", &j) == 1) {
			if (j < 0) {
				i = 1;
				
			}
			else {
				max_num = max(j, max_num);
				min_num = min(j, min_num);
				count++;
			}
		}
	}
	printf("Number of values read: %i \n", count);
	printf("Maximum: %f \n", max_num);
	printf("Minimum: %f \n", min_num);
	printf("Range: %f \n", (max_num - min_num));
}