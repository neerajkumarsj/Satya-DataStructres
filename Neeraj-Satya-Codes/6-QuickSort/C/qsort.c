/*
	Topic: Implementation of Quick Sort Using Arrays
	-	 File-Type: function file
		 -	 Function Type: Quick Sort
		 -	 Description: Recusrsive Quick Sort Func.
	------------------------------------------------
	Input: (int)array[MAX], (int)low, (int)High
	================================================

*/

#include "quick_sort.h"

void QuickSort(int *arr, int low, int high)
{
	int position;
	if (arr == NULL)
	{
		printf("ArrayPointterError@qsort: Invalid Array Address");
	}

	if (low < high)
		position = split(arr, low, high);
		QuickSort(arr, low, position - 1);
		QuickSort(arr, position - 1, high);
}
