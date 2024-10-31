#include <stdio.h>
#define n 5
struct node {
    int data;
    struct node *next;
};
struct node *front = 0;
struct node *rear = 0;
void enqueue(int x){
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = 0;
    if (front == rear ==0){
        front = rear = newnode;
        rear->next = front;
    }
    else{
        rear->next = newnode; //link with newnode 
        rear = newnode;       // move rear at last
        rear->next = front;   // rear->neaxt linkd to front for making concept of circular array
    }
}
void dequeue (){
    struct node *temp;
    temp = front;
    if (front ==0 && rear ==0){
        printf("Queue is empty\n");
    }
    else if (front == rear ) {   // only the last element is there in the queue
        printf("%d is the dequeued element\n",front->data);
        front = rear = 0;
        free(temp);    // free temp as temp is there linked to front already
    }
    else{
        printf("%d is the dequeued element\n",front->data);    
        front =  front -> next; 
        rear->next = front;  // as heree we are using circcular array implementation so we needed to update rear also
        free(temp);
    }
}
void peek(){
    if (front==rear==0){
        printf("Queue is empty\n");
    }
    else{
        printf("%d",front->data);
    }
}
void display(){
    struct node*temp;
    temp = front;
    if (front==rear==0){
        printf("Queue is Empty");
    }
    else{
        while (temp->next!=front){
            printf(" %d ",temp->data);
            temp = temp->next;
        }
        printf(" %d ",temp->data);
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

                                                                                                                      