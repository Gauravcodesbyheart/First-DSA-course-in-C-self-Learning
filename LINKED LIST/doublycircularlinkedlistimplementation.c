#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
        struct node *prev;
    };
    struct node *head, *tail, *newnode, *temp;
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
    temp = head ;
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
        printf(" %d ",temp->data);
    }
    return 0;
}
  