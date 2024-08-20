#include<stdio.h>
int main()
{
    char *canChange="hello+";
    puts(canChange);
    canChange ="HELLO";
    puts(canChange);


    char cannotChange[]="Hello World";
    puts(cannotChange);
    //cannotChange= "world";
    //puts(cannotChange);



}

