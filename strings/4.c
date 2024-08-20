#include<stdio.h>
int main()
{
    char str[100];
    gets(str);     //or use fgets(str,100,stdin)
    puts(str);
}


                        strings using pointer
char *str="Hellow World";
Stores string in memory & the assigned adress is stored in the character pointer 'str'
char *str ="hello world"    //can be reinitialized
str = "hello"
str=anything you want
c




char str = "hello world"         //can't be reinitialized



#include<stdio.h>
int main()
{
    char *canChange="hello";
    puts(canChange);
    canChange ="HELLO";
    puts(canChange);


    char cannotChange="Hello World";
    puts(cannotChange);
    //cannotChange= "world";
    //puts(cannotChange);

}







