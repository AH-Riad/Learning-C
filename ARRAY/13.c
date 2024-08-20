//write a program using array to reverse a function
#include<stdio.h>
void printReverse(int arr[], int n )
{
    for(int i=0; i<n/2; i++)
    {
        int firstNumber = arr[i];
        int secondNumber = arr[n-i-1];
        arr[n-i-1] = firstNumber;
        arr[i] = secondNumber;
    }
}
void printArr(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    printReverse(arr,9);
    printArr(arr,9);
}
