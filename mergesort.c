/* C program for Merge Sort */
#include <stdio.h>
#include <stdlib.h>
#include"arr&length.h"
// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]


/* Driver code */
int main()
{
	// int arr[] = { 12, 11, 13, 5, 6, 7 };
	// int arr_size = sizeof(arr) / sizeof(arr[0]);

	// printf("Given array is \n");
	// printArray(arr, arr_size);
	printarr(arr,length);
	Sort(arr, 0, length-1);
	
	
	printf("\nSorted array is \n");
	printarr(arr,length);
	// printArray(arr, arr_size);
	return 0;
}
