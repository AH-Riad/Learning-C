//write a programe to find sum of digits
#include<stdio.h>
int sumOfDigits(int a,int b)
{
     int s=a+b;

    return s;
}
int main()

{
    int a,b;
    printf("Enter the value of first number :");
    scanf("%d",&a);
    printf("Enter the value of second number :");
    scanf("%d",&b);
    printf("Sum of your entered digits :%d\n",sumOfDigits(a,b));
}
