#include <stdio.h>
int main ()
{
    int a[10],size,num;
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    printf("Enter the elements of the array:\n");
    for (int i=0; i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Before insertion the elements of the array are:\n");
    for (int i=0; i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter the number You wish to enter in the array:\n");
    scanf("%d",&num);
    for (int i=size-1; i>=0; i--)
    {
        a[i+1] = a[i];
    }
    a[0] = num;
    size++;
    printf("\nAfter insertion the the elements of the arrray will be:\n");
    for (int i=0; i<size; i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}