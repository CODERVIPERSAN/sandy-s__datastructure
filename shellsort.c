#include<stdio.h>
#include"arr&length.h"

int * SSort(int *a){

    int interval;
    for (size_t interval= length/2;  interval>0; interval/=2)
    {
        for (size_t i = interval; i < length; i++)
        {  
            int temp = a[i];
            int j;
            for (j=i;j>=interval&& a[j-interval]>temp;j-=interval)    a[j] = a[j-interval];

            a[j]=temp;   
        }
        

        
    }
    return arr;
    
}





int main(int argc, char const *argv[])
{
    printarr(arr,length);

    SSort(arr);
    printarr(arr,length);
    
    return 0;
}
