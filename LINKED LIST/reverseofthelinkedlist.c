#include <stdio.h>
#include <stdlib.h>
int main ()
{
    struct node 
    {
        int data;
        struct node*next;
    };
    struct node *head, *newnode , *temp , *prevnode , *currentnode , *nextnode;
    head = 0;
    int choice = 1;
    while (choice!=0)
    {
        newnode = (struct node*)malloc (sizeof(struct node));
        printf("Enter the data in the linked list");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Enter your choice\nChoose 0 to discontinue and 1 to continue");
        scanf("%d",&choice);
    }
    printf("The elements of the linked list are");
    temp = head;
    while (temp!=0)
    {
        printf(" %d ",temp->data);
        temp = temp->next;
    }
    prevnode = 0;
    currentnode = nextnode = head;
    while(nextnode!=0)
    {
        nextnode = nextnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;    // current node ko hamesa linked list ke saath rakho
    }
    head = prevnode;
    printf("\nThe elements of the linked list after reversing are\n");
    temp = head;
    while (temp!=0)
    {
        printf(" %d ",temp->data);
        temp = temp->next;
    }
    return 0;

}