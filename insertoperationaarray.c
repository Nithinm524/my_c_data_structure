//insert element at end
#include<stdio.h>
#define CAP 10
int main()
{
    int arr[]={1,2,3};
    int n=3;
    int value=7;
    if(n<CAP){
        arr[n]=value;
        n++;
    }
    else
    {
        printf("array is full");
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
