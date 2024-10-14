#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *tail, *newnode, *temp;
void create_cll()
{
    int choice = 1;
    tail = 0;
    while (choice != 0)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data you want:\n");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (tail == 0)
        {
            tail = newnode;
            tail->next = newnode;
        }
        else
        {
            newnode->next = tail->next;
            tail->next = newnode;
            tail = newnode;
        }
        printf("Enter your choice\nPress 0 to discontinue \nPress 1 to continue\n");
        scanf("%d", &choice);
    }
}
void display_cll()
{
    printf("The elements of the circular linked list  before performing any operations are:\n");
    temp = tail->next;
    while (temp->next != tail->next)
    {
        printf(" %d ", temp->data);
        temp = temp->next;
    }
    printf(" %d ", temp->data);
}
void reverse()
{
    struct node *current, *prev, *nextnode;
    current = tail->next;
    nextnode = current->next;
    while (current!=tail)
    {
        prev = current;
        current = nextnode;
        nextnode = current->next;
        current->next = prev;
    }
    nextnode->next = tail;
    tail = nextnode;
    printf("The elements of the circular linked list  after revsersing are:\n");
    temp = tail->next;
    while (temp->next != tail->next)
    {
        printf(" %d ", temp->data);
        temp = temp->next;
    }
    printf(" %d ", temp->data);
}
int main()
{
    create_cll();
    display_cll();
    printf("\n");
    reverse();
    return 0;
}
