/*int arr[]={1,2,3,4,5} for the given array what will be the following give
*(arr+2)
*(arr+5)*/
#include<stdio.h>
int main()
{
    int arr[]={1, 2, 3, 4, 5};
    printf("%d\n",*(arr+2));//array is also a pointer.It points on the first element of the array
    printf("%d\n",*(arr+5));//indicating the 6th element of the array which is invalid

}
