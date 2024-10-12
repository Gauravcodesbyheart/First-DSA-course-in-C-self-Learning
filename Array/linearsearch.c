#include <stdio.h>
int linear_search(int a[],int n,int k){
    for (int i=0;i<n;i++){
        if (a[i]==k){
            return i;
        }
    }
    return -1;
}
int main ()
{
    int a[10],n,key;
    printf("Enter the no. of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the item to searched:\n");
    scanf("%d",&key);
    int p = linear_search(a,n,key);
    if (p==-1){
        printf("Item not found");
    }
    else
    {
        printf("Item found at location %d",p);
    }
    return 0;

}