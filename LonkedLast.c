#include <stdio.h>
#include <stdlib.h>

struct node {
	int i;
	struct node * next;
};

void print_list(struct node * tbp){
	int ctr = 0;
	while(tbp -> next){
		printf("Item %d: %d\n", ctr, tbp -> i);
		ctr++;
		tbp = tbp -> next;

	}
	printf("Item %d: %d\n", ctr, tbp -> i);
}

struct node * insert_front(struct node * ogfront, int tba){
	struct node *newnod = (struct node *) malloc(1 * sizeof(struct node));
	newnod -> i = tba;
	newnod -> next = ogfront;
	return newnod;
}

struct node * free_list(struct node* tbf){
	while(tbf != NULL){
		struct node * beingfreed = tbf;
		tbf = (*tbf).next;
		free(beingfreed);
	}
}

int main(){
	/*//TEST INSERT_FRONT
	struct node* linked_list;
	struct node * next_pointer = 0;
	int ctr = 5;
	while(ctr >= 0){
		linked_list = insert_front(next_pointer, ctr);
		next_pointer = linked_list;
		ctr--;
	}
	//Test Printing the list
	print_list(linked_list);

	//Delete/free the list
	free_list(linked_list);

	//This should be wonky.
	print_list(linked_list);
*/


}
