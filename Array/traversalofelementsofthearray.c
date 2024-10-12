#include <stdio.h>
int main ()
{
    int a[10],n,k;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array elements are:\n");
    for (int i=0; i<n; i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}