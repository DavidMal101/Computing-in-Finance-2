/*
Try using a struct to set up the node
*/
/*
#include <stdlib.h>
#include <stdio.h>

struct node {
	double coef; //coefficient
	double exponent; //exponent
	struct node* next;
};

void create_node(double x, double y, struct node** temp) {
	struct node* a, * b;
	a = *temp; // set the pointer of the structure
	if (a == NULL) { // If there is no pointer, ie no pre-exisiting node
		a = (struct  node*)malloc(sizeof(struct node)); //point to a space in memory for a node
		a->coef = x;
		a->exponent = y;
		//save the coefficient and exponent in the pointer
		*temp = a; //now point at this new node

		a->next = (struct node*)malloc(sizeof(struct node)); //set next to point to space in memory for next node
		a = a->next; // start considering this "next" node instead

		a->next = NULL; //no other node
	}
	// if a node already exists
	else {
		a->coef = x;
		a->exponent = y;
		//save the coefficient and exponent in the pointer
		*temp = a; //now point at this new node

		a->next = (struct node*)malloc(sizeof(struct node)); //set next to point to space in memory for next node
		a = a->next; // start considering this "next" node instead
		a->next = NULL; //no other node
	}
}

void print_list(struct node* current_node) {
	while (current_node->next != NULL) {
		if (current_node->coef != 0) {
			printf("%fx^%f+", current_node->coef, current_node->exponent);
		}
		//update node
		current_node = current_node->next;
	}
	//print final node
	printf("%fx^%f", current_node->coef, current_node->exponent);
}

int main() {
	struct node* mylist = NULL;
	create_node(10, 3, &mylist);
	create_node(6, 2, &mylist);
	create_node(-3, 0, &mylist);

	print_list(mylist);
}
*/