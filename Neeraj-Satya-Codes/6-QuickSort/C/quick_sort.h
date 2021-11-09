/*
	Topic: Implementation of Quick Sort Using Arrays
	--------------------------------------------------
	-	 File-Type: Headers File
	==================================================
	Variables Used: Array[MAX], Low, High, traversal Pointers (p, q)

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX  10
#define ERROR -1
#define SUCCESS 0

int split(int *arr, int low, int high);
void swap(int *aofp, int *aofq);
void QuickSort(int *arr, int low, int high);
void PrintSorted(int *arr);
