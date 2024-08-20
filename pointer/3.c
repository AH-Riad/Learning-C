//find out the  output
#include<stdio.h>
int main()
{
    int x;
    int *ptr;
    ptr=&x;                //ptr is equal to adress of  x
    *ptr=0;                //pointer ptr is equal to 0
    printf("x=%d\n",x);
    printf("*ptr=%d\n",*ptr);

    *ptr+=5;                 //ptr=ptr+5
    printf("x=%d\n",x);
    printf("*ptr=%d\n",*ptr);

    (*ptr)++;                //ptr=ptr+1

     printf("x=%d\n",x);
    printf("*ptr=%d\n",*ptr);


}
