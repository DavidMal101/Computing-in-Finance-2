/*
Try using a struct to set up the node
*/
#include <stdlib.h>
#include <stdio.h>

struct node {
	double coef; //coefficient
	double exponent; //exponent
	struct node* next;
};

struct node* mylist = NULL;

void create_node(double x, double y, struct node *first_node) {
	struct node* temp, * ptr;
	temp = (struct node*)malloc(sizeof(struct node));
	if (temp == NULL) {
		printf("Out of memory\n");
		exit(0);
	}
	temp->coef = x;
	temp->exponent = y;
	temp->next = NULL;
	if (first_node == NULL) {
		first_node = temp;
	}
	else {
		ptr = first_node;
		while (ptr->next != NULL) { 
			ptr = ptr->next; // go to last node
		}
		ptr->next = temp;
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
	//struct node test={3,2,NULL};
	
	create_node(10, 3, &mylist);
	create_node(6, 2, &mylist);
	create_node(-3, 0, &mylist);
	print_list(mylist);
}




