/*pointer in function call----1)call by value         //we pass value of variable as argument
                            2)call by reference     //we pass address of variables as agrument
*/
//write a program using call by value
#include<stdio.h>
int square(int n)
{
    return n=n*n;
    //printf("square of n is = %d\n",n);
}

int main()
{
    int number;
    printf("Enter number to get it's square:");
    scanf("%d",&number);
    square(number);
    printf("you entered :%d\n",number);
    printf("square of n is = %d\n",square(number));


}
