#include<stdio.h>

#include"/home/santhosh/Documents/datastruct/sortingandsearching/arr&length.h"


int binarySearch(int arr[], int first, int last, int key)
{
if(last>=first){


int mid = first+(last-1)/2;
if(arr[mid]==key)  return mid;



else if(arr[mid]>key) return binarySearch(arr,first,mid-1,key);


else if(arr[mid]<key) return binarySearch(arr,mid+1,last,key);

}
return -1;
}

int main(int argc, char const *argv[])
{


    printarr(arr,length);


    int value = binarySearch(arr,0,length-1,4);
    if(value==-1){
        printf("notfound");

    }else{
        printf("found  %d ",arr[value]);
        
    }

    return 0;


}
