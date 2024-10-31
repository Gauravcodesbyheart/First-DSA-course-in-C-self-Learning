#include <stdio.h>
#define n 5
int queue [n];
int front = -1;
int rear = -1;
void enqueue (int x){
    if (front == -1 && rear == -1){
        front = rear = 0;
        queue[rear] = x;
    }
    else if((rear +1) % n == front){
        printf("The queue is full\n");
    }
    else{
        rear = (rear+1)%n;
        queue[rear] = x;
    } 
}
void dequeue (){              // in array implementation of queue for deleting the element just 
                              //shift the index of rear
    if (front == -1 && rear == -1){
        printf("Queue is empty\n");
    }
    else if (front == rear){
        printf("%d is the dequeued element\n",queue[front]);
        front = rear = -1;
    }
    else{
        printf("%d is the dequeue\n", queue[front]);
        front = (front +1)%n;
    }
}
void display(){
    int i=0;
    if (front == -1 && rear == -1){
        printf("Queue is empty\n");
    }
    else {
        printf("Queue elements are:\n");
        while ( i!=rear){
            printf(" %d ",queue[i]);
            i = (i+1)%n;
            i++;
        }
        printf(" %d ",queue[rear]);
    }
}
void peek(){
    if (front == -1 && rear == -1){
        printf("Queue is empty\n");
    }
    else{
        printf(" %d ",queue[front]);
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
        break;
        
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