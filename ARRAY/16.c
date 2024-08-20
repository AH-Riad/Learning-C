
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
    for (i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("Enter number to check it's existence:");
    int number;
    scanf("%d",&number);
    int flag = 0;
    for (int i=0; i<n; i++)
    {
        if (arr[i]==number)
        {

}

