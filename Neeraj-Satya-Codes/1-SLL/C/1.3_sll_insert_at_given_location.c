/*
    Implementation of Single Linked List
    ====================================
    - File Type: Insert at given location function file
		To be done
		1. Insert before the given location
*/

#include "sll.h"

int insert_at_given_loc(node **head, data_t data, int loc, int size)
{
	int i;
	node *temp;
	node *new = malloc(sizeof(node));
	if (new == NULL)
	{
		return FAILURE;
	}

	temp = *head;

	if (temp->link == NULL)
	{
		insert_at_last(head, data);
		return OUT_OF_RANGE;
	}

	if (size != 0 && loc <= 1)
	{
		new->link = *head;
		*head = new;
		return SUCCESS;
	}
	

	new->data = data;
	new->link = NULL;
	
	if (loc < size)
	{
		for (i = 0; i < loc-2; i++)
		{
			//printf("\n o->l %p, o->d %d, t->l %p, t->d %d\n", old->link, old->data, temp->link, temp->data);
			temp = temp->link;
		}
		new->link = temp->link;
		temp->link = new;
	}
	else if (loc + 1 == size || loc + 1 == size + 1)
	{
		for (; temp->link; temp = temp->link);
		temp->link = new;
		return SUCCESS;
	}
	else
	{
		printf("Out of Range\n");
		return OUT_OF_RANGE;
	}
	
	return SUCCESS;
}
