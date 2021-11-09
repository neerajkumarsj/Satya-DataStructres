/*
	Implementation of Single Linked List
	====================================
	- File Type: Deleting Entire List
*/
#include "sll.h"

int delete_entire_list(node **head)
{
	free(*head);
	*head = NULL;
	printf("Deleted Entire List Successfully \n");
	return SUCCESS;
}
