/*
    Implementation of Single Linked List
    ====================================
    - File Type: Insert_after function file
*/
#include "sll.h"

int insert_after(node **head, data_t data, data_t odata)
{
	node *temp, *old;
	old = *head;
	if (old->link == NULL)
	{
		insert_at_last(head, data);
		return OUT_OF_RANGE;
	}
	
	node *new = malloc(sizeof(node));
	if (new == NULL)
	{
		return FAILURE;
	}

	temp = old->link;
	new->data = data;
	new->link = NULL;
	while (old->data != odata)
	{
		temp = temp->link;
		old = old->link;
		if (old->data != odata && temp->link == NULL)
		{
			return OUT_OF_RANGE;
		}
	}
	old->link = new;
	new->link = temp;
	return SUCCESS;
}
