/*
	Topic: Merge Sort
	-----------------
	File Desc:  Header File
	=======================

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 8
#define ERROR -1
#define SUCCESS 0

void ConquerMergeSort(int *MainArr, int *LeftArr, int *RightArr, int LAlen, int RAlen);
void DivideMergeSort(int *MainArr, int MAlen);
void PrintSorted(int *arr, int len);

