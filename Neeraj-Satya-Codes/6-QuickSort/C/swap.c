/*
	Topic: Implementation of Quick Sort Using Arrays
	-	 File-Type: function file
		 - Function: Swap Function
		 - Description: Swapping of values
	------------------------------------------------
	Input: (int *)aofp, (int *)aofq
	================================================

*/

#include "quick_sort.h"

void swap(int *aofp, int *aofq)
{
	int temp;
	temp = *aofq;
	*aofq = *aofp;
	*aofp = temp;
}
