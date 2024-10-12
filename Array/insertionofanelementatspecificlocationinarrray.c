#include <stdio.h>
int main ()
{
    int a[10],size,post,num;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    printf("Enter the elements of the array:\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements of the array before insert any element inthe array:\n");
    for (int i=0; i<size; i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\nEnter the position at which you want to insert an element int the array:\n");
    scanf("%d",&post);
    printf("Enter the value you want to insert in the array:\n");
    scanf("%d",&num);
    for (int i = size-1; i>=post-1; i--)
    {
        a[i+1] = a[i];
    }
    a[post-1] = num;
    size++;
    printf("After insertion the value in the array the final array will be:\n");
    for (int i=0; i<size; i++)
    {
        printf("%d",a[i]);
    }
    printf("Dear! Gaurav singh You are done");
    return 0;
}