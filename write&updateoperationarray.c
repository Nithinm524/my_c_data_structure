#include<stdio.h>
int main()
{
    int arr[]={7,18,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int index=3;
    int newvalue=45;
    if(index>=0 && index<n)
    {
        arr[index]=newvalue;
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
    }
    else{
        printf("happy diwali");
    }
}
