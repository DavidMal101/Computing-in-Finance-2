#include <stdio.h>
#include <stdlib.h>

int reverse(char* str, int index, int n) {
	if (index == n) {
		return EXIT_SUCCESS;
	}
	printf("%c", *str);
	reverse(str-sizeof(*str),index+1,n);
		/*iterate down to the next pointer*/
}

int main() {
	char str[200];
	printf("Type in string \n"); 
	scanf_s("%200c", str, (unsigned)_countof(str)); /*User inputs 200 characters*/
	reverse(&str[199], 0, 200); /*Starting at the end of the string of characters index down to the first*/
}