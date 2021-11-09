/*
	Topic: Implementation of Merge Sort using Arrays
	------------------------------------------------
	- File Desc: Main Function File
		- Func Desc: Inputs the Array for Merge Sort
					 and Merge Sorts the Array.
	------------------------------------------------
	Input: (int)Array[MAX]
	================================================
*/

#include "MergeSort.h"

int main()
{
	system("clear");
	int arr[MAX], i;
	printf("Enter %d elements for Array: ", MAX);
	for (i = 0; i < MAX; i++)
	{
		scanf("%d", &arr[i]);
	}
	DivideMergeSort(arr, MAX);
	PrintSorted(arr, MAX);
}
