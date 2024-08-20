/*pointer can be incremented & decremented but it increments or decrements in bytes.
like,if we increment a integer variable it will increase 4,for float variable it will also
increase 4.For character variables it will increase 1. */
#include<stdio.h>
int main()
{
    int age = 22;
    int *ptr = &age;
    printf("ptr = %d\n",*ptr);
    ptr++;
    printf("ptr = %d\n",*ptr);
    ptr--;
    printf("ptr = %d\n",*ptr);
}

