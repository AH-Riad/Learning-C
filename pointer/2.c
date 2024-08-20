#include<stdio.h>
int main()
{
    int age =22;
    int *ptr=&age;;
    //valle

    printf("%d\n",age);            //& means adress of pointer
                                   //* means value at that adress
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));



}
