#include<stdio.h>
int main()
{
    int arr[]={1,3,6,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int index = 4;
    if(index>=0&&index<n){
        printf("%d",arr[index]);
    }
}
