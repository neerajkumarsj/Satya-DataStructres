/*
    Implementation of Single Linked List
    ====================================
    - File Type: Print_list function file
*/
#include "sll.h"

void print_list(node **head)
{
	size = 0;
	node *temp = *head;
	if (head == NULL)
	{
		printf("List is Empty!\n");
	}
	printf("head->");
	while (temp)
	{
		size++;
		printf("%d->", temp->data);
		temp = temp->link;
	}
	printf("(nil) Size = %d\n", size);
}
