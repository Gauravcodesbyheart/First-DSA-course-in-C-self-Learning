#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head, *newnode, *temp, *tail; 
// if any pointer you forget to write in global declaration then you can also write this in the function you have created in this way "struct node *temp" etc
void display ()
{   
    temp = head;
    while (temp!=0)
    {
        printf(" %d ",temp->data);
        temp = temp->next;
    }
} 
void create()
{
    head = 0;
    int choice = 1;
    while (choice != 0)
    {   
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data you want to insert in the linked list:\n");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        newnode->prev = 0;
        if (head == 0)
        {
            head = tail = temp = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        printf("Enter your choice Enter 0 to discontinue and 1 to continue:\n");
        scanf("%d", &choice);
    }
    printf("The elements of the linked list are:\n");
    display();

}

void insertatbeg()
{   
    printf("As you have choosed this option you are performing now insert at beginning:\n");
    newnode = (struct node*)malloc(sizeof (struct node));
    printf("Enter the data in the linked list at beginning:\n");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    newnode->prev = 0;
    head->prev = newnode;
    newnode->next = head;
    head = newnode;
    printf("The elements of the linked list after doing insertion at beginning are:\n");
    display();
}
void insertatend()
{   
    printf("As you have choosed this option you are performing now insert at end:\n");
    newnode = (struct node*)malloc (sizeof(struct node));
    printf("Enter the data in the linked list at last:\n");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    newnode->prev = 0;
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
    printf("The elements of the linked list  after doing insertion at end are:\n");
    display();
}
void insertatpost()
{   
    struct node*nextnode;
    printf("As you have choosed this option you are performing now insert at specific position:\n");
    int post,i=1;
    printf("Enter the position at which you want to insert an element in the linked list:\n");
    scanf("%d",&post);
    if (post<1)
    {
        printf("Invalid postion");
    }
    else if (post==1)
    {
        insertatbeg();
    }
    else
    {   
        temp = head;
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data in the linked list");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        newnode->prev = 0;
        while (i<post-1)
        {
            temp = temp->next;
            i++;
        }
        // nextnode = temp->next;
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->next ->prev = newnode;
    }
    printf("The elements of the linked list after doing insertion at postiton are:\n");
    display();
}
void insertafterpost()
{   
    int i=1,post;
    printf("Enter the position:\n");
    scanf("%d",&post);
    if (post<1)
    {
        printf("Invalid position");
    }
    else
    {   
        temp = head;
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data:\n");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        newnode->prev = 0;
        while (i<post)
        {
            temp = temp->next;
            i++;
        }
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->next ->prev = newnode;  
    }
        printf("The elements of the linked list after doing insertion at after position are:\n");
        display(); 
    

}

int main ()
{   
    create();
    int option;
    printf("Choose the options as you wish to perform operations:\n");
    printf("Choose 1 to perform insert at beginning:\nChoose 2 to perform at end:\nChoose 3 to perform insert at position:\nChoose 4 to perform insert at after position:\n");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
    insertatbeg();
    break;
    case 2:
    insertatend();
    break;
    case 3:
    insertatpost();
    break;
    case 4:
    insertafterpost();
    break;
    }
    return 0;
}
