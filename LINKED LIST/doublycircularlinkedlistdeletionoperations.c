#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head , *tail , *newnode , *temp;
void display_dcll()
{
    printf("The elemnts of the doubly cicrcular linked list before doing any operations are:\n");
    temp = head;
    if (head == 0)
    {
        printf("List is Empty:\n");
    }
    else
    {
        while (temp != tail)
        {
            printf(" %d ", temp->data);
            temp = temp->next;
        }
        printf(" %d ", temp->data);
    }
}
void create_dcll()
{   
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
}
void deletion_at_start(){
    temp = head;
    if (head==0){
        printf("List is empty:\n");
    }
    else if (head->next == head){
         head = tail = 0;
         free(temp);
    }
    else{
         head = head->next;
         head->prev = tail;
         tail->next = head;
         free(temp); 
    }
    printf("The elements of the doubly cicrcular linked list after doing deletion at start operations are:\n");
    temp = head;
    if (head == 0)
    {
        printf("List is Empty:\n");
    }
    else
    {
        while (temp != tail)
        {
            printf(" %d ", temp->data);
            temp = temp->next;
        }
        printf(" %d ", temp->data);
    }

}
void deletion_at_end(){
    if (head == 0){
        printf("List is empty\n");
    }
    else if (head->next==head){
        head = tail = 0;
        free(temp);
    }
    else{
        tail = temp->prev;
        tail->next = temp->next;
        head->prev = tail;
        free(temp);
    }
    printf("The elemnts of the doubly cicrcular linked list after  doing deletion at end operations are:\n");
    temp = head;
    if (head == 0)
    {
        printf("List is Empty:\n");
    }
    else
    {
        while (temp != tail)
        {
            printf(" %d ", temp->data);
            temp = temp->next;
        }
        printf(" %d ", temp->data);
    }

}
void deletion_at_position(){
    if (head == 0){
        printf("The list is empty\n");
    }
    else if (head->next == tail){
        head = tail = 0;
        free(temp);
    }
    else{
        temp = head;
        int position, i=1;
        printf("Enter the position at which you want to make deletion\n");
        scanf("%d",&position);
        while (i<position){
            temp = temp->next;
            i++;
        }
        temp->prev ->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp); 
    }
    printf("The elemnts of the doubly cicrcular linked list after  doing deletion at position operation are:\n");
    temp = head;
    if (head == 0)
    {
        printf("List is Empty:\n");
    }
    else
    {
        while (temp != tail)
        {
            printf(" %d", temp->data);
            temp = temp->next;
        }
        printf(" %d ", temp->data);
    }
}
int main ()
{
    create_dcll();
    display_dcll();
    int option;
    printf("Choose your choice of operations that you want to perform:\nChoose 1 for deletion at beginning\nChoose 2 for deletion at end:\nChoose 3 for deletion at position\n");
    scanf("%d",&option);
    switch (option){
        case 1:
        deletion_at_start();
        break;
        case 2:
        deletion_at_end();
        break;
        case 3:
        deletion_at_position();
    } 

    return 0;
}
