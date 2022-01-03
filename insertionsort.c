#include<stdio.h>
#include"arr&length.h"

int*Sort(int *arr){
   int i,j,key;
   for(i=1;i<length;i++){
       key=arr[i];
       j=i-1;
       while(j>=0 && key<arr[j]){
           arr[j+1]=arr[j];
           j--;
       }
       arr[j+1]= key;
   }

    return arr;

}

int main(int argc, char const *argv[])
{

    int * ptr =  Sort(arr);

    printarr(ptr,length);
    
    return 0;
}
