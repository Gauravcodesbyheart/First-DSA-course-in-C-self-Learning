#include <stdio.h>
#define n 5
int queue [n];
int front = -1;
int rear =
-1;
void enqueue(int x){    // for insertion anything use rear and check the condition of overflow 
    if ( rear == n-1 ){   // if rear full then nothing to insert
        printf("Overflow\n");
    }
    else if (front == rear == -1){
        front = rear = 0;
        queue[rear]=x;
    }
    else{
        rear++;
        queue[rear] = x;
    }
}
void dequeue(){ // for deletion use the  front and each time after deletion increase it by 
    if(front == rear == -1){
        printf("The queue is empty\n");

    }
    else if (front == rear){
                                      //here only single element at this condition so so after dequeue 
        front = rear = -1;            // queue get empty so set it to -1
    }
    else{
        printf("%d is the dequeued element\n",queue[front]);
        front++;
    }                                                             // increase front by one
}
void display(){
    if (front == rear ==-1){
        printf("The queue is empty");
    }
    else{
        printf("The elements of the queue are:\n");
        for (int i=front;i<rear+1;i++){
            printf(" %d ",queue[i]);
        }
    }
}
void peek(){
    if (front==rear==-1){
        printf("Queue is empty");
    }
    else{
        printf("%d",queue[front]);
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
        default:
        printf("Choose the correct option\n");
    }
    }
    while(choice!= 0);
    return 0;
} 