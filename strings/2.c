//creat a string firstName & lastName to store details of user & print all the character using a loop
#include<stdio.h>
void printName(char str[])
{
    for(int i=0; str[i]!='\0' ;i++)
    {
        printf("%c",str[i]);

    }
    printf(" ");

}
int main()
{
    char firstName[] = "Ahsanul";
    char lastName[] = "Haque Riad";

    printName(firstName);
    printName(lastName);



}
