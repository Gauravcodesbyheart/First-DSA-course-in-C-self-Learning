#include <stdio.h>
int main ()
{
    int a[10], size, post;
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    printf("Enter the elements of the array:\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The elements of the array before deletion of the elements:\n");
    for (int i=0; i<size; i++)
    {
        printf("%d",a[i]);
    }
    printf("\nEnter the position from which you want to delete an element in the array:\n");
    scanf("%d",&post);
    if (post>size || post< 0)
    {
        printf("Invalid position");
    }
    else 
    {
    for (int i = post-1;  i< size-1; i++)
    {
        a[i] = a[i+1];
    }
    }
    size--;
    printf("The elements of the array after deletion of the elements:\n");
    for (int i=0; i<size; i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}