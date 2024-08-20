//will the address output be same??

#include<stdio.h>
//call by value
void printAddress(int *n)
{
    printf("%u",n);

}
int main()
{
    int number=4;
    printf("%u\n",&number);

    printAddress(&number);

    return 0;
}
