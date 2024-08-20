#include<stdio.h>
int main()
{
    char str[200];
    printf("Enter a string:");
    gets(str);
    int val = atoi(str);
    printf("value of the string is:R=%d\n",val);


}
