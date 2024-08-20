//check if a given character is present in a string or not
#include<stdio.h>
void printCharacterchecker(char arr[],char ch)
{

    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==ch)
        {
            printf("Character is present");
            return;
        }
    }
         printf("Character is not present");

    }
int main()
{
    /*
    char ch;
    char arr[100];
    printf("Enter string:");
    scanf("%s",arr);
    printf("Enter a character to check:");
    scanf("%d",&ch);
    printCharacterchecker(arr,ch);*/
    char str[]="riad is a good boy";
    char ch='r';
    printCharacterchecker(str,ch);





}
