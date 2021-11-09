/*
    Topic: Implementation of Quick Sort Using Arrays
    -    File-Desc: PrintSorted Function
         -   Description: Print Merge-Sorted Array
    ------------------------------------------------
    Input: (int)array[MAX]
    ================================================

*/

#include "MergeSort.h"

void PrintSorted(int *arr, int len)
{
    int i;
    if (arr == NULL)
    {   
        printf("ArrayPointterErrori@PrintSorted: Invalid Array Address");
    }   
    printf("Sorted Array is: ");
    for (i = 0; i < len; i++)
    {   
        printf("%d ", arr[i]);
    }
    putchar('\n');
}

