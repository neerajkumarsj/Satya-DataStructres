/*
    Implementation of Single Linked List
    ====================================
    - File Type: Insert_at_first function file
*/
#include "sll.h"

int insert_at_first(node **head, data_t data)
{
	node *new = malloc(sizeof(node));

	if (new == NULL)
	{
		return FAILURE;
	}
	new->data = data;
	new->link = NULL;

	if (*head == NULL)
	{
		*head = new;	
		return SUCCESS;
	}

	new->link = *head;
	*head = new;
	return SUCCESS;
}
