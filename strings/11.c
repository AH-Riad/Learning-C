//Write a function to count the occurrence of vowels in a string
#include<stdio.h>
void countVowel(char arr[])
{
    int count=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
        count++;
    }
    printf("number of vowels are :%d",count);
}
int main()
{
    char str[]="riad is not a good boy";
    countVowel(str);
}
