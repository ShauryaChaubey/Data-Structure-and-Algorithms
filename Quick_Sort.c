#include <stdio.h>

int main()
{
    int n,arr[100],i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter array: ");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);

    }
    quicksort(arr,1,n);

    printf("Sorted array is: ");
    for(i=1;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
}

void quicksort(int arr[], int p, int r)
{
    if(p < r)
    {
        int q = partition(arr, p, r);
        quicksort(arr, p, q-1);
        quicksort(arr, q+1, r);
    }
}

int partition(int arr[], int p, int r)
{
    int x = arr[r];
    int i = p-1;
    for(int j=p;j<r;j++)
    {
        if(arr[j] < x)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i+1];
    arr[i+1] = arr[r];
    arr[r] = temp;

    return i+1;
}
