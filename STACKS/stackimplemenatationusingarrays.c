#include <stdio.h>
#define max 5
int stack [max];
int top  = -1;
void push (){
    if ( top == max -1){
        printf("The stack is overflow \n");
    }
    else{
        int item;
        printf("Enter the data:\n");
        scanf(" %d ",&item);
        top++;
        stack[top] = item; 
    }
}
void pop(){
    if (top == -1){
        printf("The stack is in underflow condition\n");
    }
    else{
        printf(" %d ",stack[top]);
        top--;
    }
}
void peek(){
    if (top ==-1){
        printf("The stack is underflow\n");
    }
    else{
        printf(" %d ",stack[top]);
    }
}
void display(){
    if (top == -1){
        printf("The stack is underflow\n");
    }
    else{
        for (int i = top; i>=0; i--){
            printf(" %d ",stack[top]);
            top--;
        }
    }
}
int main (){
    int choice;
    do {
        
        printf("Enter your choice:\n1.Push\n2.Pop\n3.Peek\n4.Display\n0.Exit\n");
        scanf("%d",&choice);
        switch(choice){ 
            case 1:
                   push();
            break;
            case 2:
                   pop();
            break;
            case 3:
                   peek();
            break;
            case 4:
                   display();
            case 0:
                   printf("Exit");
            break;
            default:
                   printf("Please choose the right option\n");
        }
    }
    while(choice != 0);
    return 0;
}
