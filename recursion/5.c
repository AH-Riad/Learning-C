//write a program to calculate percentage of a studentnfrom marks in math,physics and science.
#include<stdio.h>
float calcPercentage(int math,int physics,int chemistry);
int main()
{
    int math=80;
    int physics=98;
    int chemistry=86;
    printf("Final percentage is %.2f",calcPercentage(math,physics,chemistry));

}
float calcPercentage(int math,int physics,int chemistry)
{
    float perc=((math+physics+chemistry)/3);
    perc=(perc*100)/100;
    return perc ;

}
