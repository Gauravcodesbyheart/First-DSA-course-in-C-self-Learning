#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *tail , *newnode , *temp;
void create_cll(){
    int choice = 1;
    tail = 0;
    while (choice!=0){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data you want:\n");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        if (tail==0){
            tail = newnode;
            tail->next = newnode;
        }
        else{
            newnode->next = tail->next;
            tail->next = newnode;
            tail = newnode;
        }
        printf("Enter your choice\nPress 0 to discontinue \nPress 1 to continue\n");
        scanf("%d",&choice);
    }
}
void display_cll()
{   
    
    printf("The elements of the circular linked list  before performing any operations are:\n");
    temp = tail->next;
    while(temp->next!=tail->next){
        printf("%d",temp->data);
        temp = temp->next;
    
    }
    printf(" %d ",temp->data);
}
void insertion_at_beg(){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    if (tail == 0){   // THis means there is no any node in the list 
        tail = newnode;  // so this will the first and last node only in the linkedlist
        tail->next = newnode;
    }
    else {      // This means there is the elemenst is the elements in the linked list  
         newnode->next = tail->next;
         tail->next = newnode;
    }
    printf("The elements of the circular linked list  after performing insertion at beginning operation are:\n");
    temp = tail->next;
    while(temp->next!=tail->next){
        printf(" %d ",temp->data);
        temp = temp->next;
    }
    printf(" %d ",temp->data);
}
void insertion_at_end(){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    if (tail == 0 )
    {
        tail = newnode;
        tail->next = newnode;
    }
    else{
         newnode->next = tail->next;
         tail->next = newnode;
         tail = newnode;
    }
    printf("The elements of the circular linked list after  performing insertion at end operations are:\n");
    temp = tail->next;
    while(temp->next!=tail->next){
        printf(" %d ",temp->data);
        temp = temp->next;
    }
    printf(" %d ",temp->data);
}
void insertion_at_address(){
    int position,i=1;
    printf("Enter the position at which you want to make insertion:\n");
    scanf("%d",&position);
    if (position < 0 ){
        printf("The invalid position");
    }
    else if(position == 1){
        insertion_at_beg();
    }
    else{
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data:\n");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        temp = tail->next;
        while(i<position-1){
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
    printf("The elements of the circular linked list after performing insertion at address operations are:\n");
    temp = tail->next;
    while(temp->next!=tail->next){
        printf(" %d ",temp->data);
        temp = temp->next;
    }
    printf(" %d ",temp->data);
}
int main ()
{
    create_cll();
    display_cll();
    int option;
    printf("Enter your choice of operation as suggested:\n");
    printf("Choose 1 for insertion at beginnning:\nChoose 2 for insertion at end:\nChoose 3 for insertion at specific position");
    scanf("%d",&option);
    switch(option){
        case 1:
        insertion_at_beg();
        break;
        case 2:
        insertion_at_end();
        break;
        case 3:
        insertion_at_address();
        break;
    }
    return 0;
}