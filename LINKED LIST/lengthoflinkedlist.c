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
    while(choice!=0)
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
        printf("Enter your choice:\n");
        scanf("%d",&choice);
    } 
    printf("The elements of the linked list are :\n");
    int count = 0;
    temp = head;
    while (temp!=0)
    {   
        printf(" %d ",temp->data);
        temp = temp->next;
        count ++;
    }
    printf("\nThe length of the linked list is %d",count);
    return 0;

}
    