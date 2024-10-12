#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node*head, *newnode, *temp,*tail;
void display()
{
    temp = head;
    while (temp!=0)
    {
        printf(" %d ",temp->data);
        temp = temp->next;
    }
}
void create ()
{
    head = 0;
    int choice = 1;
    while(choice!=0)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the elements of the linked list:\n");
        scanf("%d",&newnode->data);
        newnode->prev = 0;
        newnode->next = 0;
        if (head == 0)
        {
            head = temp = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev =tail;
            tail = newnode;  
        }
        printf("Enter your choice choose 0 to discontinue and 1 to continue:\n");
        scanf("%d",&choice);
    }
    printf("The elements of the linked list are:\n");
    display();
}
void deletionatbeg ()
{
    if (head == 0)
    {
        printf("Empty linked list nothing to delete");
    }
    else
    {
        temp = head;
        head = head->next;
        head->prev = 0;
        free(temp);
    }
    // temp = head;
    printf("\nThe elements of the linked list after deletion from the beginning:\n");
    display();
}
void deletionatend()
{
    if (head==0)
    {
        printf("Empty linked list Nothing to delete");
    }
    else
    {
        temp = tail;
        tail->prev->next = 0;
        tail = tail->prev;
        free(temp); 
    }
    printf("\nThe elements of the linked list after deletion from the end are:\n");
    display();
}
void deletionatpost()
{
    int i=1,post;
    printf("Enter the position at which you want to delete the element:\n");
    scanf(" %d ",&post);
    temp = head;
    while(i<post)
    {
        temp = temp->next;
        i++;
    }
    temp->prev->next = temp->next;
    temp->next->prev=temp->prev;
    free(temp);
    
    printf("\nThe elements of the linked list after deletion from the position :\n");
    display();
}

int main ()
{   
    int option;
    create();
    printf("\nEnter your option to perform different options of deletion:\nChoose 1 to perform deletion at beginning:\nChoose 2 to perform deletion at end:\nChoose 3 to perform deletion at position:\n");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
    deletionatbeg();
    break;
    case 2:
    deletionatend();
    break;
    case 3:
    deletionatpost();
    break;
    }
    return 0;
}