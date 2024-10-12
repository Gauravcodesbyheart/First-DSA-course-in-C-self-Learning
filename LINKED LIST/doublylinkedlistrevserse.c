#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head, *newnode, *temp, *tail;
int choice;
void display()
{
    temp = head;
    while(temp!=0)
    {
        printf(" %d ",temp->data);
        temp = temp->next;
    }
}
void create()
{
    head = 0;
    choice = 1;
    while(choice!=0)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data of the linked list:\n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;
        if (head == 0)
        {
            head = tail = temp =  newnode;
        } 
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        printf("Enter the choice Do you wiush to continue");
        scanf("%d",&choice);
        
    }
    printf("The elements of the Doubly linked list are:\n");
    display();
}
void reverse()
{
    struct node* currentnode,*nextnode;
    currentnode = head;
    while(currentnode != 0) 
    {
    nextnode = currentnode->next;
    currentnode->next = currentnode->prev;
    currentnode->prev = nextnode;
    currentnode = nextnode; 
    }
    currentnode = head;
    head = tail;
    tail = currentnode; 
    printf("The elements of the Doubly linked list after reversing are:\n");

    display();
}
int main ()
{   
    create();
    reverse();

    
    
    return 0;
}