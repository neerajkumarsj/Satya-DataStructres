/*
    Implementation of Single Linked List
    ====================================
    - File Type: Insert_at_last function file
*/
#include "sll.h"

int insert_at_last(node **head, data_t data)
{
	node *temp = *head, *new = malloc(sizeof(node));

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
	
	
	while (temp->link)
	{
		temp = temp->link;
	}
	temp->link = new;
	
	return SUCCESS;
}
