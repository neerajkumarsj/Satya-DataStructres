/*
	Implementation of Single Linked List
	====================================
	- File Type: Header File
*/

#include <stdio.h>
#include <stdlib.h>


#define FAILURE 1
#define SUCCESS 0
#define OUT_OF_RANGE -1

int size;
typedef int data_t;
typedef struct list
{
	data_t data;
	struct list *link;
}node;

int insert_at_first(node **head, data_t data);
int insert_at_last(node **head, data_t data);
int insert_before(node **head, data_t data, data_t odata);
int insert_by_replace(node **head, data_t data, data_t odata);
int insert_after(node **head, data_t data, data_t odata);
void print_list(node **head);
