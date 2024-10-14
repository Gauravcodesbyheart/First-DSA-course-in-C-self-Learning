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
void deletion_at_beg(){
    temp = tail->next;
    if (tail==0){
        printf("The list is empty\n");
        printf("Nothing to be performed");
    }
    else if (temp->next == temp){
        tail = 0;
        free(temp);
    }
    else{
        tail->next = temp->next;
        free(temp);
    }
    printf("The elements of the circular linked list  after performing deletion at beginning operation are:\n");
    temp = tail->next;
    while(temp->next!=tail->next){
        printf(" %d ",temp->data);
        temp = temp->next;
    }
    printf(" %d ",temp->data);
}
void deletion_at_end(){
    struct node *current , *previous;
    current = tail->next;
    if (tail==0)
    {
        printf("The list is empty");
        printf("Nothing can be performed");
    }
    else if(current->next==current){  // the same can be performed by tail->next == tail
        tail = 0;
        free(current);                               //   current->next == tail 
    }
    else{
        while(current->next!=tail->next){
            previous = current;
            current = current->next;
        }
        previous->next = tail->next;
        tail = previous;    
        free(current);
    }
    printf("The elements of the circular linked list after  performing deletion at end operations are:\n");
    temp = tail->next;
    while(temp->next!=tail->next){
        printf(" %d ",temp->data);
        temp = temp->next;
    }
    printf(" %d ",temp->data);
}
void deletion_at_address(){
    struct node *current, *nextnode;
    int position,i=1;
    current = tail->next;
    printf("Enter the position at which you want to make deletion:\n");
    scanf("%d",&position);
    if (position < 0 ){
        printf("The invalid position");
    }
    else if(position == 1){
        deletion_at_beg();
    }
    else{
        while(i<position-1){
            current = current->next;
            i++;
        }
        nextnode = current->next;
        current->next = nextnode->next;
        free(nextnode);  
    }
    printf("The elements of the circular linked list after performing deletion at address operations are:\n");
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
        deletion_at_beg();
        break;
        case 2:
        deletion_at_end();
        break;
        case 3:
        deletion_at_address();
        break;
    }
    return 0;
}