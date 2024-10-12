#include <stdio.h>
int main ()
{
    int a[10], size,num;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    printf("Enter the elements of the array:\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements of the array are:\n");
    for (int i=0; i<size; i++)
    {
        printf("%d",a[i]);
    }
    for (int i = 0; i<size; i++)
    {
        a[i] = a[i+1];
    } 
    size--;
    printf("\nAfter deletion from the beginnning HTe final elements of the array are:\n");
    for (int i=0; i<size; i++)
    {
        printf("%d",a[i]);
    }
    return 0; 

    
}