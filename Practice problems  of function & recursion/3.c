//write a programe to print sum of two digits using void function
#include<stdio.h>
void sumOfDigits(int a, int b)
{
    printf("Sum of given digits :%d\n",a+b);
}
int main()
{
    int x,y;
    printf("Enter your first digit:");
    scanf("%d",&x);
    printf("Enter your second digit:");
    scanf("%d",&y);
    sumOfDigits(x,y);

}
