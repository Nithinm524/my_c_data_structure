 #include <stdio.h>
 #define MAX 5
 int stack[MAX]; int top = -1;
 void push(int v){
     if(top==MAX-1)
        printf("Overflow\n");
     else stack[++top]=v; }
 void pop(){
     if(top==-1)
        printf("Underflow\n");
     else
     printf("%d popped\n",stack[top--]); }
 void display(){
     for(int i=top;i>=0;i--)
        printf("%d ",stack[i]);
        printf("\n"); }
 void peek(){
     if(top==-1)
         printf("Empty\n");
     else printf("Top=%d\n",stack[top]); }
 int main(){
    push(10); push(20); push(30);
    display();
    pop();
    display();
    peek();
 }
