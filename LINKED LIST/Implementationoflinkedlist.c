#include <stdio.h>
#include <stdlib.h>
int main ()
{
    struct node 
    {
    int data;
    struct node*next;
    };
struct node *head, *newnode, *temp;
head = 0;
int choice = 1;
while (choice !=0)
{
    newnode = (struct node*)malloc(sizeof(struct node));   // returns address of the new node that is created
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
    printf("Do you want to continue(0/1)\n");
    scanf("%d",&choice);
}
temp = head;
printf("The elements of the linked list are:\n");
while (temp!=0)  // here this whil;e loop is used for traversal of the linked list
{
    printf("  %d  ",temp->data);
    temp = temp->next;
}
return 0;
}



