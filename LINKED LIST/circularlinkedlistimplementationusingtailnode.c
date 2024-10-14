#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *tail , *newnode , *temp;
void create_cll(){
    int choice = 1;
    tail = 0;
    while (choice!=0){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data you want:\n");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        if (tail==0){
            tail = newnode;
            tail->next = newnode;
        }
        else{
            newnode->next = tail->next;
            tail->next = newnode;
            tail = newnode;
        }
        printf("Enter your choice\nPress 0 to discontinue \nPress 1 to continue\n");
        scanf("%d",&choice);
    }
}
void display_cll()
{   
    printf("The elements os the circular linked list are");
    temp = tail->next;
    while(temp->next!=tail->next){
        printf("%d",temp->data);
        temp = temp->next;
    }
    printf(" %d ",temp->data);
}
int main ()
{
    create_cll();
    display_cll();
    return 0;
}