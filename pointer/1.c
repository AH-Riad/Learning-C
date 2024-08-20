//lets start pointer
#include<stdio.h>

int main()

{
   int age=21;
   int *ptr;
   *ptr=age;
   printf("%d\n",age);
   printf("%d\n",*ptr);
   printf("%d\n",*(&ptr));
}

