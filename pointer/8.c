//call by reference
#include<stdio.h>
void swap(int *a, int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
    //printf("*a=%d & *b=%d\n",a,b);
}
int main()
{   int x,y;
    printf("ENTER VALUES TO SWAP:");
    scanf("%d %d",&x,&y);
    swap(&x,&y);
    printf("a=%d & b=%d\n",x,y);
}

