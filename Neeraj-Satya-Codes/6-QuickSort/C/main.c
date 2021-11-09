/*
	Topic: Implementation of Quick Sort Using Arrays
	-	 File-Type: function file
		 -	 Function Type: Main Function
		 -	 Description: Inputs the Array for Quick
						  Sort.
	------------------------------------------------
	Input: (int)array[MAX], (int)low, (int)High
	================================================

*/

#include "quick_sort.h"

int main()
{
	system("clear");
	int arr[MAX], i, low, high;
	printf("Enter the Array: ");	
	for (i = 0; i < MAX; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("Enter the Low Position and High Position: ");
	scanf("%d %d", &low, &high);
	QuickSort(arr, low, high);
	PrintSorted(arr);
}
