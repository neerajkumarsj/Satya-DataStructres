/*
    Implementation of Single Linked List
    ====================================
    - File Type: Insert_before function file
*/
#include "sll.h"

int insert_by_replace(node **head, data_t data, data_t odata)
{
	node *temp, *old;
	temp = *head;
	if (temp->link == NULL)
	{
		insert_at_last(head, data);
		return OUT_OF_RANGE;
	}
	
	node *new = malloc(sizeof(node));
	if (new == NULL)
	{
		return FAILURE;
	}

	old = temp->link;
	new->data = data;
	new->link = NULL;
	while (old->data != odata)
	{
		temp = temp->link;
		old = old->link;
		if (old->data != odata && old->link == NULL)
		{
			return OUT_OF_RANGE;
		}
	}

	temp->link = new;
	new->link = old->link;
	return SUCCESS;
}
