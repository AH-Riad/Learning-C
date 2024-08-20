//write a programe to print hot or cold depending on the temparature user enters
#include<stdio.h>
void weather(int temp)
{
    if (temp<=30)
        {
            printf("It's a cold day");
        }
        else
            {
                printf("It's a hot day");
            }

}
int main()
{
    int tm=31;
    weather(tm);
    void weather(int temp);

}
