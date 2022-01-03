#include<stdio.h>
// #include"arr&length.c"
#include"arr&length.h"

//bubble sort

int* Sort(int*arr){
     for (size_t i = 0; i < length; i++)
    {
        for (size_t j = 0; j < length-1; j++)
        {
            if(arr[j+1]<arr[j]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;

            }
        } 

        printarr(arr,length);  
    }
    return arr;
}


int main(int argc, char const *argv[])
   

{ 

     int len = length ;
    int* ptr = Sort(arr);
    // printf("%d",ptr[0]);

    printarr(ptr,len);
    


    return 0;
}
