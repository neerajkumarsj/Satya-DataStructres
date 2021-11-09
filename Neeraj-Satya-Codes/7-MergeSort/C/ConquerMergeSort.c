/*
	Topic: Implementation of Merge Sort using Arrays
	------------------------------------------------
	- FIle Desc: ConquerMergeSort
		- Func Desc: Combines the Array into Left and
					 Right Array.
	------------------------------------------------
	Input: (int *)MainArray, 
		   (int *)LeftArray,
		   (int *)RightArray, 
		   Size of MainArray: MAX,
		   Size of LeftArray: LAlen,
		   Size of RightArray: RAlen
	================================================
*/
#include "MergeSort.h"


void ConquerMergeSort(int *MainArr, int *LeftArr, int *RightArr, int LAlen, int RAlen)
{
	//Error Handling For Dangling Array Pointers
	if ((MainArr == NULL) || (LeftArr == NULL) || (RightArr || NULL))
	{
		printf("PointerError: Some Array is Not properly Intialised \n");
	}

	int i = 0;														//Main Array Traverser
	int j = 0;														//Left Array Traverser
	int k = 0;														//Right Array Traverser

	while ((i < LAlen) && (j < RAlen))
	{
		printf("Array Merge: %d, %d, %d\n", LeftArr[i], RightArr[j], MainArr[k]);
		if (LeftArr[i] < RightArr[j])
		{
			MainArr[k++] = LeftArr[i++];
		}
		else if(LeftArr[i] > RightArr[j])
		{
			MainArr[k++] = RightArr[j++];
		}
	}

	while (i < LAlen)
	{
		MainArr[k++] = LeftArr[i++];
	}

	while (j < RAlen)
	{
		MainArr[k++] = RightArr[i++];
	}

	free(LeftArr);
	free(RightArr);	
	printf("Merged And About to Get Out");
}

