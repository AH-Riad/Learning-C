//Write a program to read a word and rewrite characters in alphabetical order
#include<stdio.h>
int main()
{
    char str[200];
    printf("Enter string:");
    gets(str);
    int n = strlen(str);
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
            if (str[i]>str[j])
        {
            int temp =str[i];
            str[i]=str[j];
            str[j]=temp;

        }
    }
                printf("The sorted string is:%s",str);

}

