#include<stdio.h>
#include"arr&length.h"




int *Sort(int * arr){

    
    int  min;
    for (size_t i = 0; i < length; i++)
    {
        // printf("%d",i);
        min =i;
        for (size_t j = i; j < length; j++)
        {
            if(arr[i]>arr[j]){
                min =j;

    //                 min = j;

            }
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
        
    }
    return arr;
    
}

int main(int argc, char const *argv[])

{
    int len = length;
    int* arr1 = Sort(arr);
   printarr(arr1,len);
    return 0;
}

