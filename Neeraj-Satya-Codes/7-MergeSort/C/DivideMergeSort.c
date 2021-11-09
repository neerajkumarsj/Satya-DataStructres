/*
	Topic: Implementation of Merge Sort using Arrays
	-------------------------------------------------------------
	- FIle Desc: DivideMergeSort
		- Func Desc: Divides the Array into Left and Right Array.
	-------------------------------------------------------------
	Input: (int *)MainArray, 
	=============================================================
*/
#include "MergeSort.h"

void DivideMergeSort(int *MainArr, int MAlen)
{
	//Error Handling For Dangling Array Pointers
	if ((MainArr == NULL))
	{
		printf("PointerError: Some Array is Not properly Intialised\n");
		exit(1);
	}

	int i = 0;									//Left Array Traverser
	int mid = MAlen / 2;						//Left and Right Array length Describer
	int j = mid;								//Right Array Traverser
	
	//printf("Array Size after Division: %d, Before: %d\n", mid, MAlen);
	//Initialising Left Array
	int * LeftArr = malloc(mid);
	//printf("Left Array: ");
	while (i <= mid)
	{
		LeftArr[i] = MainArr[i];
		i++;
	}

	//Initialising Right Array
	int * RightArr = malloc(MAlen - mid);
	while (j <= MAlen)
	{
		RightArr[j - mid] = MainArr[j];
		j++;
	}
#if 1
	if (mid > 1)
	{
		//printf("mid > 1: %d\n", mid > 1);
		DivideMergeSort(LeftArr, mid);
		DivideMergeSort(RightArr, (MAlen - mid));

		//After Dividing the Main Array into respective Sub Arrays
		//Its Time to Merge Back.
		printf("Main Array: ");
		PrintSorted(MainArr, MAlen);
		printf("Left Array: ");
		PrintSorted(LeftArr, mid);
		printf("Right Array: ");
		PrintSorted(RightArr,  MAlen - mid);
		ConquerMergeSort(MainArr, LeftArr, RightArr, mid, (MAlen - mid));
		printf("\nSuccessFully Merged....\n");
	}
#endif
	//printf("Will Be Printing Merge Sorted Array\n");
}
