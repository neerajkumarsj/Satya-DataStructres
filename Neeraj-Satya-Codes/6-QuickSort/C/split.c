/*
	Topic: Implementation of Quick Sort Using Arrays
	-	 File-Type: function file
		 -	 Function Type: Split Function
		 -	 Description: Partitioning of arrays for 
						  quick sort.
	------------------------------------------------
	Input: (int)array[MAX], (int)low, (int)High
	================================================

*/

#include "quick_sort.h"

int split(int *arr, int low, int high)
{
	if (arr == NULL)
	{
		printf("ArrayPointterError@split: Invalid Array Address");
	}

	int pivot = arr[low];
	int p = low;
	int q = high;
		
	while (p <= q)
	{
		printf("Qsort: p %d, q %d, pivot %d\n", p, q, pivot);
		while (arr[p] <=  pivot)
		{
			p++;
		}
		while (arr[q] > pivot)
		{
			q--;
		}
		if (p < q)
		{
			swap(&arr[p], &arr[q]);
		}
		PrintSorted(arr);
	}
	swap(&pivot, &arr[q]);
	return q;
}
