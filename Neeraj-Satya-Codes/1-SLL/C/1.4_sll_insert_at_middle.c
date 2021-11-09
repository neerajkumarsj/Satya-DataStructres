/*
	Insert at the Middle
	====================
*/

#include "sll.h"
int insert_at_middle(node **head, data_t data)
{
	int i;

	node *ftemp, *stemp;
	ftemp = *head;
	stemp = *head;
	if (ftemp == NULL || stemp == NULL)
	{
		insert_at_last(head, data);
		return OUT_OF_RANGE;
	}
	node *new = malloc(sizeof(node));
	if (new == NULL)
	{
		return FAILURE;
	}
	
	while (ftemp->link)
	{
		ftemp = (ftemp->link)->link;
		stemp = stemp->link;
		if (ftemp->link)
		{
			stemp = stemp->link;
			break;
		}
	}
	new->data = data;
	new->link = stemp->link;
	stemp->link = new;
	return SUCCESS;
}
