#include<stdio.h>
void countChar(char arr[])
{
    int count=0;
   for(int i=0;arr[i]!='\0';i++)
   {
   count++;
   }
    printf("Number of character is :%d\n",count-1);

}




int main()
{
    printf("Enter name:");
     char name[100];
    fgets(name,100,stdin);
    countChar(name[100]);

}
