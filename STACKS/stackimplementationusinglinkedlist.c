#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *newnode, *top=0 , *temp;
void push (int x){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = top;
    top = newnode;
}
void display(){
    temp = top;
    if (top==0){
        printf("List is empty\n");
    }
    else{
        while(temp!=0){
        printf("%d\n",temp->data);
        temp=temp->next;
        }
    }
}
void peek(){
    if (top == 0){
        printf("List is empty\n");
    }
    else{
        printf("Top element of the list is %d\n",top->data);
    }
}
void pop(){
    if (top==0){
        printf("List is empty\n");
    }
    else{
        printf("The popped element is %d\n",top->data);
        top = top->next;
    }
}
int main ()
{
    push(2);
    push(3);
    push(10);
    display();
    peek();
    pop();
    peek();
    display();
    return 0;
}


