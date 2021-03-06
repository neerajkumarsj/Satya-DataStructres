/*
    Implementation of Single Linked List
    ====================================
    - File Type: Main file
    4 2 8 1 2 5 8 3 2
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

	printf("Enter the Data and Location: ");
	scanf("%d%d", &data, &loc);
	insert_at_given_loc(&head, data, loc, size);
	print_list(&head);

	printf("Enter the element to be added at the middle: ");
	scanf("%d", &data);
	insert_at_middle(&head, data);
	print_list(&head);

	printf("After Deleting Last element in the List: ");
	delete_at_last(&head);
	print_list(&head);

	printf("After Deleting Entire List: \n");
	delete_entire_list(&head);
	print_list(&head);
}
