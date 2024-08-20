//write a program to accept a line of text and a word.Display the number of occurrences of that word in the text.
#include<stdio.h>
int main()
{
    char str[1000];
    gets(str);
    char arr[20];
    scanf("s",&arr);
    int count;
    for(int i=0; str[i]!='\0'; i++)
    {
        if (str[i]==arr[20])
            count++;

    }
    printf("%d",count);
}
