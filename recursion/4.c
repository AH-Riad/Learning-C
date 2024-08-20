#include<stdio.h>
float celToFer( float cel);
int main()
{
    float f=celToFer(37);
    printf("temperature in fahrenheit is :%.2f\n",f);

}
float celToFer( float cel)
{
    if(cel==0)
    {
        return 32;
    }
    float fer=cel*1.8+32;
    return fer;

}


