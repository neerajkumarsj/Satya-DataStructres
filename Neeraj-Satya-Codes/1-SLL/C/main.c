/*
    Implementation of Single Linked List
    ====================================
    - File Type: Main file 
*/

#include "sll.h"

int main()
{
	system("clear");
	node *head = NULL;
	data_t data, odata, ndata, loc;

	printf("Enter the Data To be Added at Last: ");
	scanf("%d", &data);
	insert_at_last(&head, data);
	print_list(&head);

	printf("Enter the Data To be Added at first: ");
	scanf("%d", &data);
	insert_at_first(&head, data);
	print_list(&head);

	printf("Enter the Data To be Added at last: ");
	scanf("%d", &data);
	insert_at_last(&head, data);
	print_list(&head);

	printf("Enter the Data To be Added before what data: ");
	scanf("%d%d", &data, &odata);
	insert_before(&head, data, odata);
	print_list(&head);

	printf("Enter the Data To be Added replace what data: ");
	scanf("%d%d", &data, &odata);
	insert_by_replace(&head, data, odata);
	print_list(&head);

	printf("Enter the Data To be Added after what data: ");
	scanf("%d%d", &data, &odata);
	insert_after(&head, data, odata);
	print_list(&head);
}
