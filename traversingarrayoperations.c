#include <stdio.h>
int main() {
   int a[]={10,20,30,40,50,60,70,80,90,100};
   int n=sizeof(a)/sizeof(a[0]);
   printf("%d\n",n);
   for(int i=0;i<n;i++){
       printf("%d ",a[i]);
   }
}
