#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *newnode, *temp, *prevnode;
    head = 0;
    int choice = 1;
    while (choice != 0)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data of the linked list:\n");
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
        printf("Enter your choice choose 0 to discontinue and 1 to continue:\n");
        scanf("%d", &choice);
    }
    printf("The elements of the linked list is :\n");
    temp = head;
    while (temp != 0)
    {
        printf(" %d ", temp->data);
        temp = temp->next;
    }
    printf("\nDeletion from last is possible");
    temp = head;
    while (temp->next != 0)
    {
        prevnode = temp;
        temp = temp->next;
    }
        prevnode->next = 0;
        free(temp);
        printf("\nThe elements of the linked list after deletion is :\n");
        temp = head;
        while (temp != 0)
        {
            printf(" %d",temp->data);
            temp = temp->next;
        }
    
    return 0;
}
