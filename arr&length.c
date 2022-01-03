
 void printarr(int* arr,int length){
     
    //  printf("%d",sizeof(arr));
     
     for (size_t i = 0; i < length; i++)
     {
         printf(" %d ",arr[i]);
     }
        printf("\n");
    // int* ptr = arr;


    
     
 }



 void merge(int arr[], int l, int m, int r)
{	int first2 = m+1;
	int i, j, k;
	int n1 = first2-l;
	int n2 = r - m;

	/* create temp arrays */
	int arr1[n1], arr2[n2];

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++)
		arr1[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		arr2[j] = arr[first2 + j];

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0; // Initial index of first subarray
	j = 0; // Initial index of second subarray
	k = l; // Initial index of merged subarray
	while (i < n1 && j < n2) {
		if (arr1[i] <= arr2[j]) {
			arr[k] = arr1[i];
			i++;
		}
		else {
			arr[k] = arr2[j];
			j++;
		}
		k++;
	}

	/* Copy the remaining elements of L[], if there
	are any */
	while (i < n1) {
		arr[k] = arr1[i];
		i++;
		k++;
	}

	/* Copy the remaining elements of R[], if there
	are any */
	while (j < n2) {
		arr[k] = arr2[j];
		j++;
		k++;
	}
}

/* l is for left index and r is right index of the
sub-array of arr to be sorted */
int * Sort(int arr[], int l, int r)
{
	if (l < r) {
		// Same as (l+r)/2, but avoids overflow for
		// large l and h
		int m = l + (r - l) / 2;

		// Sort first and second halves
		Sort(arr, l, m);
		Sort(arr, m + 1, r);

		merge(arr, l, m, r);
	}
    return arr;
}

