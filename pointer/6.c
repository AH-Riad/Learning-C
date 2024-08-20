#include<stdio.h>
    void _square(int *n)
    {
        *n=(*n)*(*n);
        printf("square = %d\n",*n);
    }
//call by reference
int main()
{
    int number;
    printf("Enter number:");
    scanf("%d",&number);
    _square(&number);
    printf("Entered number is:%d\n",number);
}
