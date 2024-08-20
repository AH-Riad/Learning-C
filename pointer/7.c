//write a funtionn to swap of 2 number
/*concept of interchange
a=3,b=5
now what you have to do is,take a temporary variable like t then
process 1:              process 2:

    t=a                     t=b
    a=b                     b=a
    b=t                     a=t                */

//call by value
#include<stdio.h>
void swap(int a, int b)
{
    int t=a;
    a=b;
    b=t;
    printf("a=%d & b=%d\n",a,b);
}
int main()
{   int x,y;
    printf("ENTER VALUES TO SWAP:");
    scanf("%d %d",&x,&y);
    swap(x,y);
    printf("a=%d & b=%d\n",x,y);
}

