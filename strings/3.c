#include<stdio.h>
int main()
{
    char fullName[100];
    scanf("%s",fullName);
    printf("Your full name is : %s",fullName);
}


scanf can't input multi-word strings with spaces
Here gets and puts come into picture


                          String function
gets(str)---Dangerous and outdated                                           puts(str)
thats why we will use fgets                                               Used to output a string
it's used to input a string
(Even multi word)

fgets(str,n,file)
stops taking input when n-1 chars input or new line is entered
here file=stdin
