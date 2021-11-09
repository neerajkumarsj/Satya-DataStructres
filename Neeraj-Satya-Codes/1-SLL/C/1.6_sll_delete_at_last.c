/*
	Implementation of Single Linked List
	====================================
	- FIle Type: Deleting At Last
*/

#include "sll.h"

int delete_at_last(node **head)
{
	node *temp = *head;
	for (; (temp->link)->link; temp = temp->link);
	temp->link = NULL;
	return SUCCESS;
}
