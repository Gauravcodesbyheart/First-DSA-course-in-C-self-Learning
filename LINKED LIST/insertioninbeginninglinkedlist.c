#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node 
    {
        int data;
        struct node *next;
    };
    struct node * head, *newnode,*temp;
    head = 0;
    int choice = 1;
    while (choice !=0)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data:\n");
        scanf("%d",&newnode->data);
        newnode->next =0;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Enter your choice enter 0 to discontinue or 1 to continue:\n");
        scanf("%d",&choice); 
    }
    temp = head;
    while (choice!=0)
    {
        printf("%d",temp->data);
        temp = temp->next;
    }
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data you want to insert");
    scanf("%d",&newnode->data);
    newnode->next = head;
    head = newnode;
    printf("The final elements of the limked list is:\n");
    temp = head;
    while (temp!=0)
    {
        printf("  %d  ",temp->data);
        temp = temp->next;
    }
    return 0;
} 