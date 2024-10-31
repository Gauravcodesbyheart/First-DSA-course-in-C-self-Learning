#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head, *tail, *newnode, *temp;
void display_dcll()
{
    printf("The elemnts of the doubly cicrcular linked list before doing any operations are:\n");
    temp = head;
    if (head == 0)
    {
        printf("List is Empty");
    }
    else
    {
        while (temp != tail)
        {
            printf(" %d ", temp->data);
            temp = temp->next;
        }
        printf(" %d ", temp->data);
    }
}
void create_dcll()
{
    head = 0;
    int choice = 1;
    while (choice != 0)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data of your choice:\n");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        newnode->prev = 0;
        if (head == 0)
        {
            head = tail = temp = newnode;
            head->next = head;
            head->prev = head;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            newnode->next = head;
            head->prev = newnode;
            tail = newnode;
        }
        printf("Enter your choice:\nEnter 0 to discontinue\nEnter 1 to continue\n");
        scanf("%d", &choice);
    }
}
void insertion_at_beginning()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data:\n");
    scanf("%d", &newnode->data);
    if (head == 0)
    { // in case list is empty there...
        head = tail = newnode;
        newnode->prev = tail;
        newnode->next = head;
    }
    else
    {
        newnode->next = head;
        head->prev = newnode;
        newnode->prev = tail;
        tail->next = newnode;
        head = newnode;
    }
    printf("After doing the insertion at beginning operation the elements are:\n");
    temp = head;
    if (head == 0)
    {
        printf("List is Empty");
    }
    else
    {
        while (temp != tail)
        {
            printf(" %d ", temp->data);
            temp = temp->next;
        }
        printf(" %d ", temp->data);
    }
}
void insertion_at_end()
{   newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data:\n");
        scanf("%d",&newnode->data);
    if (head == 0)
    {
        head = tail = newnode;
        newnode->prev = tail;
        newnode->next = head;
    }
    else
    {
        newnode->prev = tail;
        tail->next = newnode;
        newnode->next = head;
        head->prev = newnode;
        tail = newnode;
    }
    printf("After doing the insertion at end operation the elements are:\n");
    temp = head;
    if (head == 0)
    {
        printf("List is Empty");
    }
    else
    {
        while (temp != tail)
        {
            printf(" %d ", temp->data);
            temp = temp->next;
        }
        printf(" %d ", temp->data);
    }
}
void insertion_at_position()
{   
    int position,i=1; 
    printf("Enter the position at which you want to make insertion:\n");
    scanf("%d",&position);
    if (position<0){
        printf("Invalid position");
    }
    else if (position == 1){
        insertion_at_beginning();
    }
    else{
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data:\n");
        scanf("%d",&newnode->data);
        while (i<position-1){
            temp = temp->next;
            i++;
        }
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next->prev = newnode;
        temp->next = newnode; 
    }
    printf("After doing the insertion at end operation the elements are:\n");
    temp = head;
    if (head == 0)
    {
        printf("List is Empty");
    }
    else
    {
        while (temp != tail)
        {
            printf(" %d ", temp->data);
            temp = temp->next;
        }
        printf(" %d ", temp->data);
    }
}
int main()
{
    create_dcll();
    display_dcll();
    int option;
    printf("Choose options as per your prefernce of operation:\nChoose 1 for insertionat beginning\nChoose 2 for insertion at end\nChoose 3 for insertion at position\n");
    scanf("%d",&option);
    switch (option){
        case 1:
        insertion_at_beginning();
        break;
        case 2:
        insertion_at_end();
        break;
        case 3:
        insertion_at_position();
        break;
    }
    return 0;
}
