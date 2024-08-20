//print something nth times
#include<stdio.h>
void sum(int n);
int main()
{
   sum(5);
}

//recursive function
void sum(int n)
{
    if(n==0)
    {
        return;
    }
    printf("hello\n");
    sum(n-1);
}
