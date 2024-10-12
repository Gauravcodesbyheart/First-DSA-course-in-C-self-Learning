#include <stdio.h>
#include <stdlib.h>
int main ()
{
    struct node 
    {
        int data;
        struct node *next;
    };
    struct node *head, *newnode,*temp;
    head =  0;
    int choice = 1;
    while (choice !=0)
    {
        newnode = (struct node*)malloc (sizeof (struct node));
        printf("Enter the data:\n");
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
        printf("Enter the choice: Enter 0 to discontinue and 1 to continue\n");
        scanf("%d",&choice);
    }
    temp = head;
    while (temp!=0)
    {
        printf(" %d ",temp->data);
        temp = temp->next;
    }
    if (head == 0)
    {
        printf("We have nothng to delete");
    }
    else
    {
        temp = head;
        head = head->next;
        free(temp);
        printf("\nAfter deletion the final linkedlist will be:\n");
    temp = head;
    while (temp!=0)
    {
        printf(" %d ",temp->data);
        temp = temp->next;
    }    
    }
    return 0;

}