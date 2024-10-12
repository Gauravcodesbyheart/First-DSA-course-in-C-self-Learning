#include <stdio.h>
#include <stdlib.h>
int main ()
{
    struct node 
    {
        int data;
        struct node *next;
    };
    struct node *head,*newnode,*temp,*nextnode;
    head = 0;
    int choice = 1;
    while (choice != 0)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data of the linked list");
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
        printf("Enter your choice:\n");
        scanf("%d",&choice);
    }
    printf("The elements of the linked list are:\n");
    temp= head;
    while (temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    int post, i = 1;
    temp = head;
    printf("Enter the position:\n");
    scanf("%d",&post);
    while (i < post-1)               // most important part to delete
    {
        temp = temp->next;
        i++;
    } 
    nextnode = temp->next;
    temp->next = nextnode->next;
    free(nextnode);
    printf("The elements of the linked list after deletion from the certain position are:\n");
    temp = head;
    while (temp!=0)
    {
        printf(" %d ",temp->data);
        temp=temp->next;
    }
    return 0;
    }