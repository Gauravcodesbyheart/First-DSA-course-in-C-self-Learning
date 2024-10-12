#include <stdio.h>
#include <stdlib.h>
int main ()
{
    struct node 
{
    int data;
    struct node *next;
};
struct node *head, *newnode, *temp;
head = 0;
int choice = 1;
int count = 1;
while (choice != 0)
{   
    newnode = (struct node*)malloc(sizeof(struct node));
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
    printf("Enter the choice, Enter 0 to discontinue or 1 to continue");
    scanf("%d",&choice);
    count ++;
}
printf("The elements of the linked list is ");
temp = head;
while (temp!=0)
{
    printf(" %d ",temp->data);
    temp = temp->next;
}
int pos, i = 1;
newnode = (struct node*)malloc(sizeof(struct node));
printf("Enter the position:\n");
scanf("%d",&pos);
if (pos>count)
{
    printf("Invalid position");
}
else
{
    temp = head;
    while (i<pos)
    {
        temp = temp->next;
        i++;
    }
    printf("Enter the data\n");
    scanf("%d",&newnode->data);
    newnode->next = temp->next;
    temp->next = newnode;
    temp = head;
    while (temp!=0)
    {
        printf(" %d ",temp->data);
        temp = temp->next;
    }
}

return 0;
}