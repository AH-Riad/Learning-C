#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter element of the array:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Elements are :");
    int Max=arr[0];
    for (i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);

    if(arr[i]>Max)
    {
        Max=arr[i];
    }
    }
    printf("maximum element is :%d\n",Max);
}

