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
    head = 0;
    int choice= 1;
    while (choice!=0)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data:\n");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        if (head==0)
        {
            head = temp = newnode; 
        }
        else 
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Enter your choice 0 to discontinue and 1 to continue\n");
        scanf("%d",&choice);
    }
        
        printf("The elements of the linked list is:\n");
        temp = head;
        while (temp!=0)
        {
            printf("%d",temp->data);
            temp = temp->next;
        }
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data you want to insert in the linked list:\n");
        scanf("%d",&newnode->data);
        newnode->next = 0; 
        temp = head;
        while (temp->next!=0)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        temp = head;
        printf("After insertion the final elements of the array is :\n");
        
        while (temp!=0)
        {
            printf(" %d ",temp->data);
            temp = temp->next;
        }
    return 0;
}