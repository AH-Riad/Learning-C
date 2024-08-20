//write a function to calculate the sum,product&average of two numbers.Print that sum,product&average in the main function
#include<stdio.h>
int doWork(int a, int b, int *sum, int *prod, int *avg)
{
    *sum=a+b;
    *prod=a*b;
    *avg=(a+b)/2;
}

int main()
{
    int a,b,*sum,*prod,*avg;
    a=3;
    b=5;
    doWork(a, b, &sum, &prod, &avg);
    printf("sum = %d\nprod = %d\navg = %d\n",sum,prod,avg);


}
