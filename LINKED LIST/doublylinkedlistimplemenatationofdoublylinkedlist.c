#include <stdio.h>
#include <stdlib.h>
struct node                       //Global declaration so that can be used in all functions
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head,*newnode,*temp;    // same as singly linked list
void create()
{
    head = 0;
    int choice = 1;
    while (choice !=0)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the element of the linked list:\n");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        printf("Enter your choice choose 0 to discontinue and 1 to continue:\n");
        scanf("%d",&choice);
    }
}    
    void display()      // function to display elements of the linked list
    {   
        printf("The elements of the doubly linked list are:\n");
        temp = head;
        while (temp!=0)
        {
            printf(" %d ",temp->data);
            temp = temp->next;
        }
    }
int main ()
{
    create();
    display();
    return 0;
}
