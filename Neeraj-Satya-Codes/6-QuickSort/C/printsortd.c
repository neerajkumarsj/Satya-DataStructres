/*
	Topic: Implementation of Quick Sort Using Arrays
	-	 File-Type: function file
		 -	 Function Type: PrintSorted Function
		 -	 Description: Print Quick-Sorted Array
	------------------------------------------------
	Input: (int)array[MAX], (int)low, (int)High
	================================================

*/

#include "quick_sort.h"

void PrintSorted(int *arr)
{
	int i;
	if (arr == NULL)
	{
		printf("ArrayPointterErrori@PrintSorted: Invalid Array Address");
	}
	printf("Sorted Array is: ");
	for (i = 0; i < MAX; i++)
	{
		printf("%d ", arr[i]);
	}
}
