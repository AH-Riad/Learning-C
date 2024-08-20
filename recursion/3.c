//print factorial if nth number using recursion
#include<stdio.h>
int fact(int n);

int main()
{
    int f=fact(5);
    printf("Factorial of your given number is: %d\n",f);
}
int fact(int n)
{
    if(n==1||n==0)
    {
        return 1;
    }
    int fN=n*fact(n-1);
    return fN;
}
