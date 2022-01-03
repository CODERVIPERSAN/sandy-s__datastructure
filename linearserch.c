#include<stdio.h>
#include"/home/santhosh/Documents/datastruct/sortingandsearching/arr&length.h"
int linearsearch(int*arr,int key){
for (int i = 0; i < length; i++)
{
    if(arr[i]==key) return 1;

}
return 0;
}



int main(int argc, char const *argv[])
{
    
    
    printf("%d",linearsearch(arr,50));
    return 0;
}
