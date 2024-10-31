#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *front = 0;
struct node *rear = 0;
struct node *newnode;
void enqueue(int x){
    newnode = (struct node*)malloc(sizeof (struct node));
    newnode->data = x;
    newnode->next = 0;
    if (front == 0 && rear == 0){
        front = rear = newnode;
    }
    else{
        rear->next = newnode;
        rear = newnode;
    }
}
void dequeue (){
    struct node *temp;
    temp = front ;
    if (front == 0 && rear == 0){
        printf("Queue is the Empty\n");
    }
    else{
        printf("%d is the dequeued element\n",front->data);
        front = front->next;
        free(temp);
    }
}
void display(){
    struct node *temp;
    temp = front;
    if (front == 0 && rear == 0){
        printf("Queue is empty\n");
    }
    else{
        while (temp!=0){
            printf(" %d ",temp->data);
            temp = temp->next;
        }
    }
}
void peek(){
    if (front ==0 &&    rear == 0){
        printf("Queue is empty\n");
    }
    else{
        printf(" %d\n ",front->data);
    }
}
int main (){
    int choice;
    do{ 
        printf("Do you wish to perform operations:\n 1.Continue\n 0.Discontinue\n");
        scanf("%d",&choice);
        printf("Choose the operations you wish to perform:\n1.Enqueue\n2.Dequeue\n3.display\n4.peek\n5.Exit\n");
        int option;
        printf("Choose your option:\n");
        int num;
        scanf("%d",&option);
    switch (option){
        case 1:
        printf("Enter the data to enqueue in the queue:\n");
        scanf("%d",&num);
        enqueue(num);  // enqueue means insertion
        break;
        case 2:
        dequeue();   // dequeue means deletion so deletion means just forward or shift the index of front then automatically the front position got deleted... 
        break;     
        case 3:
        display();    // display means print 
        break;
        case 4:
        peek();
        case 5:
        printf("EXIT\n");
        break;
        default:
        printf("Choose the correct option\n");
    }
    }
    while(choice!= 0);
    return 0;
} 