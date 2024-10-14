#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *newnode, *temp;
    head = 0;
    int choice = 1;
    while (choice != 0)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data you wish to enter:\n");
        scanf("%d", &newnode->data);
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
        temp->next = head;
        printf(" Enter your choice:\n Enter 0 to discontinue and Enter 1 to continue\n");
        scanf("%d", &choice);
    }
    printf("The elements of the circular linked list are:\n");
    temp = head;
    while (temp->next!=head)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
    printf("%d",temp->data);
    return 0;
}
