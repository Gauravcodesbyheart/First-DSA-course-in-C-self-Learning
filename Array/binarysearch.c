#include <stdio.h>
int binary_search(int a[], int n, int k)
{
    int high = n - 1;
    int low = 0;
    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (k == a[mid])
        {
            return k;
        }
        if (k < a[mid])
        {
            high = mid - 1;
        }
        if (k > a[mid])
        {
            high = mid + 1;
        }
    }
}
int main ()
{
    int a[10],n,k;
    printf("Enter the no. of elements of the array:\n");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i<n ; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the item to be searched:\n");
    scanf("%d",&k);
    int p = binary_search(a,n,k);
    if (p == -1){
        printf("Item not found\n");
    }
    else{
        printf("Item found at lcation %d",p);
    }
    return 0; 
}